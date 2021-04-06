# Pointer 

អញ្ញាត Pointer គឺជាអញ្ញាតមួយដែលទូទៅត្រូវបានគេប្រើសម្រាប់ផ្ទុកតម្លៃ Address (ទីតាំង) របស់អញ្ញាតផ្សេងទៀតដែលស្ថិតនៅលើ RAM។ Pointer អាចផ្ទុកតម្លៃ Address របស់អញ្ញាតដែលមានប្រភេទទិន្នន័យដូចគ្នាតែមួយ។ 

## ការប្រកាសអថេរ Pointer 
```
datatype * pointerName;
ប្រភេទ​ទិន្នន័យ * ឈ្មោះអថេរ;
```
ឧទាហរណ៍៖
```
int *p;
int *p2;​ //pointer កំរិតទី១
float **p3; // pointer កំរិតទី២
```
ចូលមើលកូដខាងក្រោយខ្ញុំនឹងពន្យល់បន្លែម៖​
```
#include <stdio.h>

void main() {
    int p;
    scanf("%d", &p);
    printf("%p => %d \n", &p, p);
    // input: 77
    // output: 0x7ffe87d83654 => 77 
}
```
ប្រសិនបើអ្នកបញ្ចូលលេខដូចខ្ញុំដែរ ក៏លទ្ធផលមិនដូចគ្នាដែរព្រោះ វាប្រើទីតាំង `memory` ផ្សេងគ្នានោះតម្លៃ `address` មិនដូចគ្នា។ 

**ចំណាំ** សម្រាប់ការបង្ហាញលើអេក្រង់​
1.  `%p` គឺសម្រាប់បង្ហាញទីតាំង `address` របស់អថេរ ដែលត្រូវប្រើ `&param`​​ ។
2.  `%d` គឺសម្រាប់បង្ហាញទីតាំង `value` របស់អថេរ ដែលត្រូវប្រើ `param` ដូចអថេរដទៃធម្មតា។

ខាងក្រោមខ្ញុំ សាកឧទាហរណ៍ដោយប្រើ pointer​ ៖
```
#include <stdio.h>
void main() {
    int* pc, c;
    c = 5;
    pc = &c;
    printf("%p => %d \n", pc, *pc); 
    //Output: 0x7fff4116d49c => 5 
}
```
**ចំណាំ៖ **
1. ដោយសារយើងប្រកាសអថេរជា pointer `pc` និង `c`
2. `c` ត្រូវបានបោះតម្លៃឱ្យស្មើ `5` 
3. pointer `pc` ត្រូវបានផ្ទុកទីតាំងរបស់ `c` ដូច្នេះ `pc` ក៏មានតម្លៃស្មើ `5` ដែរ
4. សម្រាប់ការយកមកបង្ហាញលើអេក្រង `%d` ជាប្រភេទ `int` ដែលត្រូវយកតម្លៃ `*pc` និង​ `%p` ជាទីតាំងរបស់ pointer `pc` យើងគ្រាន់តែសរសេរ `pc` ជាការស្រាច់ មិនត្រូវប្រើ `&pc` នោះទេព្រោះវាជា pointer ។ 😙 (អ្នកខ្លះចូលដល់ចំនុចនេះនិយាយ ស្អីគេ វល់ៗ 😄😅)

បើនៅវល់សាកមើល ឧទាហរណ៍ខាងក្រោមទៀតមានអារម្មណ៍ថា ថ្មីទៀតលូវ៖
```
#include <stdio.h>

void main() {
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    // Output: 1
    printf("%d", *pc);  // Ouptut: 1 // not 5
}
```
**ពន្យល់៖**
1. ដំបូងយើង ប្រកាស pointer `pc, c` បន្ទាប់មកបោះតម្លៃអថេរ `c​ = 5`
2. អថេរ `pc = &c` មានន័យថា `pc` ផ្ទុកទីតាំង address របស់ `c` 
3. បន្ទាប់មក `c` បោះតម្លៃថ្មីស្មើ `1` ដល់ពេលបង្ហាញលើអេក្រង មានន័យថាទីតាំងរបស់ `c` មានតម្លៃស្មើ `5` ជំនួសលេខ `1` 
4. `pc` ដែលមានទីតាំងដូចគ្នា `c` ក៏ត្រូវមានតម្លៃស្មើ `1` ដូចគ្នាដែរ

​យើងអាចសង្កេតមើលឧទាហរណ៍ខាងក្រោមមួយទៀត៖

```
#include <stdio.h>
void main() {
    int* pc, c, d;
    c = 5;
    d = -15;

    pc = &c; printf("%d", *pc); // Output: 5
    pc = &d; printf("%d", *pc); // Ouptut: -15
}
```

## ការប្រើប្រាស់ Pointer 

```
#include <stdio.h>
void main() {
   int* pc, c;
   
   c = 22;
   printf("Address c: %p\n", &c);
   printf("Value c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address pointer pc: %p\n", pc);
   printf("Content pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address pointer pc: %p\n", pc);
   printf("Content pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address c: %p\n", &c);
   printf("Value c: %d\n\n", c); // 2
}
```
**ពន្យល់៖**
1. `int *pc, c;`  
![image](https://cdn.programiz.com/sites/tutorial2program/files/pointer-1.jpg)

2. `c = 22;`  
![image2](https://cdn.programiz.com/sites/tutorial2program/files/pointer-2.jpg)
3. `pc = &c`  
   ![alt](https://cdn.programiz.com/sites/tutorial2program/files/pointer-3.jpg)
4. `c = 11;`  
    ![alt](https://cdn.programiz.com/sites/tutorial2program/files/pointer-4.jpg)
5. `*pc = 2;`  
    ![image](https://cdn.programiz.com/sites/tutorial2program/files/pointer-5.jpg)


**កំហុសពេលសរសេរ​** `pointer` និង​ `address c` ៖
```
int c, *pc;

// pc is address but c is not
pc = c; // Error

// &c is address but *pc is not
*pc = &c; // Error

// both &c and pc are addresses
pc = &c;

// both c and *pc values 
*pc = c;
```

សាកមើលឧទាហរណ៍ខាងក្រោម៖
```
#include <stdio.h>
void main() {
   int c = 5;
   int *p = &c;

   printf("%d", *p);  // 5
}
```
ព្រោះតែ `int *p = &c;` មានន័យថា 
```
int *p;
p = &c;
```

## ប្រើប្រាស់ Pointer ជាមួយ Array

Pointer វាមានទំនាក់ទំនងទៅនឹង Array ដែរមើលទៅស្រដៀងគ្នាយើងអាចសិក្សាមិនពិបាកយល់។ យើងអាចមើលគំរូខាងក្រោមវាស្រដៀងគ្នា។

```
#include <stdio.h>
void main() {
   int x[4];
   int i;

   for(i = 0; i < 4; ++i) {
      printf("&x[%d] = %p\n", i, &x[i]);
   }

   printf("Address of array x: %p", x);
}
```
Output: 
```
&x[0] = 0x7ffe1dce9e10
&x[1] = 0x7ffe1dce9e14
&x[2] = 0x7ffe1dce9e18
&x[3] = 0x7ffe1dce9e1c
Address of array x: 0x7ffe1dce9e10
```
យើងអាចមើលឃើញថា ការបង្ហាញទីតាំង address ក័ត្រូវបើសញ្ញា `&x[0]` ដូចគ្នា `x` បើចង់បានតម្លៃនៃ index `x[0]` ត្រូវបើ `*x`
- យើងអាចសរសេរទីតាំង address  `&x[1]` ប្រើ `x+1` និងតម្លៃ `x[1]` ប្រើសញ្ញា `*(x+1)`
- យើងអាចសរសេរទីតាំង address  `&x[2]` ប្រើ `x+2` និងតម្លៃ `x[2]` ប្រើសញ្ញា `*(x+2)`
- យើងអាចសរសេរទីតាំង address  `&x[i]` ប្រើ `x+i` និងតម្លៃ `x[i]` ប្រើសញ្ញា `*(x+i)`

### ឧទាហរណ៍ 

```
#include <stdio.h>
void main() {
  int i, x[6], sum = 0;
  printf("Enter 6 numbers: ");
  for(i = 0; i < 6; ++i) {
  //  scanf("%d", &x[i]);
      scanf("%d", x+i);

  //  sum += x[i]
      sum += *(x+i);
  }
  printf("Sum = %d", sum);
}
```

