import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        MyArrayList<Integer> list = new MyArrayList<>();
        list.add(5);
        list.add(7);
        list.add(6);

        for(Integer item : list){
            System.out.println(item);
        }

        MyQueue<String> queue = new MyQueue<>();
        queue.enqueue("1CAR");
        queue.enqueue("2BUS");
        queue.enqueue("3AIRPLANE");
        System.out.println("Front of queue: " + queue.peek());
        while (!queue.isEmpty()) {
            System.out.println("Dequeued: " + queue.dequeue());
        }



    }
}
