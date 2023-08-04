import java.util.Scanner;
import java.util.Stack;


import javax.lang.model.util.ElementScanner6;

public class CycleInGraph
{
    public static void main(String[] args) {
        try {

            
            Scanner scan = new Scanner (System.in);

        int n;
        System.out.println("Enter number of nodes:");
        n=scan.nextInt();
        int graph[][]=new int [n][n];


        System.out.println("Enter graph in matrix form:");

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                graph[i][j]= scan.nextInt();
            }
        }

        Stack<Integer> stack= new Stack<Integer>();

        int stackState[]=new int[n];
        for(int i=0;i<n;i++)
        {
            stackState[i]=0;
        }
        int traversed[]= new int [n];
        for(int i=0;i<n;i++)
        {
            traversed[i]=0;
        }

        stack.push(0);
        stackState[0]=1;
        traversed[0]=1;


        while(!stack.isEmpty())
        {
            
            int neg_exist=0;
            int i=stack.peek();
            for(int j=0;j<n;j++)
            {
                if(graph[i][j]==1)
                {
                    
                    if(traversed[graph[i][j]]!=1)
                    {
                        if(stackState[graph[i][j]]==1)
                        {
                            System.out.println("Cycle Exits for element:"+graph[i][j]);
              
                         
                        }
                        else
                        {
                            stack.add(graph[i][j]);
                        }
                        neg_exist=1;
                        break;
                    }
                   
                }
            }

            if(neg_exist==0)
            {
                stack.pop();
            }
          
        }



        } catch (Exception e) {
            //TODO: handle exception
            System.out.println("exception");
        }

    }
}