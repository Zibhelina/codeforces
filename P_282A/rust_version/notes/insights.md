* What is the use in using stdin.lock() when reading input?

    It seems that the benefit of lock() can only be understood when viewed from the perspective of what usually happens whenever we read input from stdin. Whenever the standard input is read, there is a process in which the program needs to lock that input so that only one part of the program is interfering with that input (I am not sure why this is a problem if the input is read-only. If input was modifiable, then that would make sense ). Each time I call stdin.read_line() for instance, I am locking the input, reading the input, and then unlocking the input. By using stdin.lock() we can avoid this overhead, thus making the code more performant.

* What is BufRead? What does it do?

    BufRead is a trair that provides efficiend, buffered reading functionality.

    When reading input line-by-line without buffering, the program needs to ask the OS to go get more data, meaning that for each line there is a system call. These are expensive, and can be avoided with buffering. The idea of BuffRead is to reading larger chuncks of memory each time a system call is needed, thus decreasing the interaction between the program and the OS.

* What is a trait?

    It is essentially an interface in Rust; that is, it defines shared behavior between different types.

* How much of input does BufRead read at a time? If my input surpasses the size of the buffer provided by BufRead, do I need to somehow summon it again?
    
    It varies depending on the implementation, but it varies between 8KB and 64KB. If my input surpasses the size of this internal buffer, it automatically reads the next chinck of input from stdin.

* What is a handle? 

    A handle is essentially a pointer that allows us to access resources managed by other entities like the operating system and other programs safely. By safely I mean that a handle comes with some methods that tell us exactly how we can interact with the data it points to.