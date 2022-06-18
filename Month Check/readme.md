## Originally this code was from my old school project that was for "Java"

```java
import java.util.*;

public class PetaClass {
    public static int _input;
    public static void main (String[] args) {
        Scanner _s = new Scanner(System.in);
        try {            
            _input = _s.nextInt();
        } catch (Exception e) {
            //invalid
        }
        month();
    }
    static void month() {
        switch(_input) {
            default: System.out.println("Invalid Input"); break;
            case 1: System.out.println("January"); break;
            case 2: System.out.println("February"); break;
            case 3: System.out.println("March"); break;
            case 4: System.out.println("April"); break;
            case 5: System.out.println("May"); break;
            case 6: System.out.println("June"); break;
            case 7: System.out.println("July"); break;
            case 8: System.out.println("August"); break;
            case 9: System.out.println("September"); break;
            case 10: System.out.println("October"); break;
            case 11: System.out.println("November"); break;
            case 12: System.out.println("December"); break;
        }
    }
}
```

## and later turn it into C++. There's also a C# of it but yeah..