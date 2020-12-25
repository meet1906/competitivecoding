import java.io.*;



class MultithreadingDemo implements Runnable{
    @Override
    public void run(){
        try{
            System.out.println("Thread "+Thread.currentThread().getId()+" is running ");
        }
        catch(Exception e){
            System.out.println("Couldn't create Thread ");
        }
    }

}

class Multithread{
    public static void main(String args[]){
        int n = 10;//Number of threads
        for(int i=0;i<n;i++){
            Thread obj = new Thread(new MultithreadingDemo());
            obj.start();
        }
    }
}
