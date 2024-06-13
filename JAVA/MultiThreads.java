class myThread1 extends Thread {

	public void run(){
		int i=0;
		while(i<1000){
			System.out.println("Pizzzzzaaa!!!");
			i++;
		}
	}
}

class myThread2 extends Thread {

	public void run(){
		int i=0;
		while(i<1000){
			System.out.println("Burgurrrrr!!!!!");
			i++;
		}
	}
}

public class MultiThreads {
	public static void main(String[] args) {
		myThread1 t1 = new myThread1();
		myThread2 t2 = new myThread2();
		t1.start();
		t2.start();
	}
}