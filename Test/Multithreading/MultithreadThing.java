public class MultithreadThing extends Thread {

  private int threadNo;

  public MultithreadThing(int threadNo) {
    this.threadNo = threadNo;
  }

  @Override
  public void run() {
    for (int i = 1; i <= 5; i++) {
      System.out.println(i + " from thread" + threadNo);

      // if (threadNo == 3) {
      //   throw new RuntimeException();
      // }

      try {
        Thread.sleep(1000);
      } catch (InterruptedException e) {
      }

    }
  }
}
