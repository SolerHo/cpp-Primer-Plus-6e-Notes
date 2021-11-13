
## 调试说明
```sh
cd build
cmake ..
make
./StringBad.out
```

## 显示内容
```cpp
Starting an inner block .
1: "Celery Stalks at Midnight" Object created 
2: "Lecture Prey" Object created 
3: "Spanach Leaves Bowl for Dollars" Object created 
headline1 : Celery Stalks at Midnigh!
headline2 : Lecture Prey
sports : Spanach Leaves Bowl for Dollars
String passed by reference : 
    "Celery Stalks at Midnigh!"
headline1 : Celery Stalks at Midnigh!
String passed by value : 
    "Lecture Prey"
"Lecture Prey" object deleted , 2 left 
headline2 : 
initialize one object to another : 
sailor : Spanach Leaves Bowl for Dollars
Assign one object to another : 
3: "C++" Object created 
knot : C++
Exiting the block .ln"C++" object deleted , 2 left 
"Spanach Leaves Bowl for Dollars" object deleted , 1 left 
"��" object deleted , 0 left 
free(): double free detected in tcache 2
Aborted (core dumped)
```

## 说明

关于书中对代码的解读信息，全部已在code中做了注释，方便复习快速阅读，然后加深对内容场景的理解。