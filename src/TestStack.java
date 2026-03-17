import java.util.Scanner;

public class TestStack {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter Size");
        NewStack stack = new NewStack(scanner.nextInt());
        int choice ;
        
        do {
        	 System.out.println("\n--- Stack Menu ---");
             System.out.println("1. Push");
             System.out.println("2. Pop");
             System.out.println("3. Peek");
             System.out.println("4. Display");
             System.out.println("5. Exit");
             System.out.print("Enter your choice: ");
             choice = scanner.nextInt();	
             
             switch(choice) {
             case 1:
            	 System.out.println("Enter Data ");
            	 stack.push(scanner.nextInt());
                 break;
             case 2:
            	 int poppedData=stack.pop();
            	 if(poppedData!=-1) {
            		 System.out.println("Popped Element "+poppedData);
            	 }
            	 break;
             case 3:
            	 int peekData=stack.peek();
            	 if(peekData!=-1) {
            		 System.out.println("Top Element : "+peekData);
            	 }
            	 break;
             case 4:
            	 stack.display();
            	 break;
             case 5:
            	 System.out.println("Exiting program.");
            	 break;
             default:
                 System.out.println("Invalid choice. Please try again.");
           
             }
        }while(choice!=5);
        
        scanner.close();
	}
}