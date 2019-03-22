this is a notebook that about java virtual machine



# java 

* native关键字
  * native表示该方法不是java实现的
  * 不是native表示该方法是java实现的

* java具体执行过程
  * 首先编写A.java文件，进行编译，生成A.class文件，然后class文件需要在java的虚拟机上面运行，不同的操作系统对应不同的java虚拟机

* ![1552641541267](https://github.com/lemon34/note/blob/master/java/screenshot/1552641541267.png)

* 1.Java保存的文件名必须与类名一致； 2.如果文件中只有一个类，文件名必须与类名一致； 3.一个Java文件中只能有一个public类； 4.如果文件中不止一个类，文件名必须与public类名一致； 5.如果文件中不止一个类，而且没有public类，文件名可与任一类名一致 

* 在进行GC测试的时候，编写了书上的一段代码

  * ```java
    package GC_test;
    public class GC_test {
        public Object instance = null;
        private static final int MB = 1024 * 1024;
        private byte[] bigSize = new byte[2 * MB];
        public static void testGC() {
            GC_test objA = new GC_test();
            GC_test objB = new GC_test();
            objA.instance = objB;
            objB.instance = objA;
            objA = null;
            objB = null;
    
            System.gc();
    
        }
        public static void main(String[] args) {
            //GC_test GC_sample = new GC_test();
            GC_test.testGC();
        }
    }
    // 在执行的时候，没有显示出GC日志，后来在网上发现实际的原因是在进行run configuration的时候，需要在VM option中间进行设置，添加变异选项-XX:PrintGCDetails
    ```

* 串行收集器： DefNew：是使用-XX:+UseSerialGC（新生代，老年代都使用串行回收收集器）。 并行收集器： ParNew：是使用-XX:+UseParNewGC（新生代使用并行收集器，老年代使用串行回收收集器）或者-XX:+UseConcMarkSweepGC(新生代使用并行收集器，老年代使用CMS)。 PSYoungGen：是使用-XX:+UseParallelOldGC（新生代，老年代都使用并行回收收集器）或者-XX:+UseParallelGC（新生代使用并行回收收集器，老年代使用串行收集器） garbage-first heap：是使用-XX:+UseG1GC（G1收集器） 

* Minor GC 表示的是清理年轻代的对象；Major GC表示的是清理老年代的对象；Full GC表示的是年轻代和老年代的对象同时清理

* java的虚拟机性能监控与故障处理工具

  * jps  // 虚拟机进程状况工具
  * jstat // 虚拟机统计信息监视工具
  * jinfo //java配置信息工具
  * jmap //java内存映像工具
  * jstack //虚拟机堆转储快照工具，dump
  * hsdis //jit生成代码反汇编

* java与c++之间，有一堵由内存动态分配的由垃圾收集技术所围成的高墙

* static关键字

  * 修饰成员变量

    * 静态成员变量的初始化时间要更早，是在静态存储区，将其变为类变量，而不是对象的成员

  * 修饰成员方法

    * 最大的优势就是可以使用类名直接操作方法

  * 静态块

    * 将多个类成员放在一起初始化，使得程序更加完整，

    * ```java
      static {
              book2 = new Book("static成员book2成员变量初始化");
              book4 = new Book("static成员book4成员变量初始化");
          }
      //直接进行初始化
      ```

    * 

  * 静态导包

    * 将类方法直接导入到当前类中，从而使用方法名即可调用类方法，更加方便

* 在同一个java文件中，只允许你存在一个public class