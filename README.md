Pytania

• Opisz trzy sposoby obsługi cykliczności bufora.
- warunek if (tail > max_size)
       tail = 0
- tail = tail % max_size

- tail & max_size (tylko gdy size potega 2) 
           
• Omów przykłady zastosowania kolejki?
    Kolejka zadań do wykonania (Task Queue): Kolejki są często wykorzystywane w systemach wielozadaniowych do kolejkowania zadań do wykonania.
    Kolejkowane w algorytmach np sortowanie radix
• Co oznaczają akronimy LIFO i FIFO?
    LIFO - LAST IN FIRST OUT
    FIFO - FIRST IN FIRST OUT
Kompilacja:
Radix.cpp:
- make Radix.x

Queue.cpp:
- make Queue.x

Generator.cpp:
- make Generator.x

Kompilacja wszystkich:
- make all

Uruchamianie:
Queue.x:
- ./Radix.x

Queue.x:
- ./Queue.x

Generator.x:
- ./Generator.x 10

Generator.x i zapisanie wyników do pliku txt:
- ./Generator.x 10 > wynik.txt

Stack  z Generatorem:
- ./Generator.x 10 | ./Queue.x
