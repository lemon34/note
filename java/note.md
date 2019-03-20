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