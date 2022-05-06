public class Multithreading {
  public static void main(String[] args) {
    // MultithreadThing myThing = new MultithreadThing();
    // myThing.run();
    // myThing.start();

    for (int i = 1; i <= 3; i++) {
      MultithreadThing myThing = new MultithreadThing(i);
      myThing.start();
    }
  }
}
