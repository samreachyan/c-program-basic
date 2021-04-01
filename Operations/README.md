# ប្រមាណវិធីក្នងភាសាស៊ី
[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/variable "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Condition "Next")

ប្រមាណវិធី Operator គឺការធ្វើប្រមាណវិធីនៅក្នុងភាសាស៊ី។ វាចែកជា ៣ Arithmetic, Comparission និង​ Logical operator។ 

## ប្រមាណវិធី Arithmetic
ប្រមាណវិធីនេះវាមានការគណនាដូចគណិតវិទ្យាយើងដែរ 

|សញ្ញា| តួនាទី|
|---|---|
|+|ផលបូក|
|-|ផលដក|
|*|ផលគុណ|
|/|ផលចែក|
|%|ចែកយកសំណល់|

|ប្រមាណវិធី|ឧទាហរណ៍|គំរូ|
|---|---|---|
 |=|a = b|a = b|
|+=|a += b|	a = a+b|
| -=|a -= b|	a = a-b|
| *=	|a *= b	| a = a*b
| /=|	a /= b|	a = a/b|
| %=|	a %= b|	a = a%b|

ឧទាហរណ៍​ ៖
```
#include <stdio.h>
void main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
}
```
### សញ្ញា ++ និង -- 
`++` ជាសញ្ញាផលបូកមួយ `--` ជាសញ្ញាផលដកមួយ
```
int a = 5;
a++; // a = a + 1 // a += 1;
a--; // a = a - 1 // a -= 1;
// បីប្រភេទនេះគឺមានន័យដូចគ្នា 
```
យើងសង្កេតឃើញមានសញ្ញា​ ++ ឬ -- នៅមុខឬក្រោយអថេរទៀត។ ខ្ញុំសូមលើបង្ហាញឧទាហរណ៍ដូចខាងក្រោមទៀត៖

- ++a មានន័យថា វាបូកខ្លួនវាមួយហើយទៀត បង្ហាញទៅអេក្រង់ ឬធ្វើការអ្វីមួយ
- a++ មានន័យថា វាបង្ហាញឬធ្វើការហើយទៀត បូកខ្លួនវាមួយ
- --a មានន័យថា វាដកខ្លួនវាមួយហើយទៀត បង្ហាញទៅអេក្រង់ ឬធ្វើការអ្វីមួយ
- a-- មានន័យថា វាបង្ហាញឬធ្វើការហើយទៀត ដកខ្លួនវាមួយ

**ចំណាំ** ៖ 
```
- a+++ មិនមានទេ
- a = a + 2 ឬ a += 2 មិនមែន a++
```

ឧទាហរណ៍ ៖ 
```
#include <stdio.h>

void main() {
	int a = 7, b, c;
	b = a++ + 2; // b=9, a=8
	c = --a - b++; // c=-2, a=7, b=9 => b=10
	
    //a 7, b 10, c -2
                 ┌───────────────────┐
	printf("a = %d, b = %d, c = %d", a, b, c);
                         │       └──────┘  │
                         └─────────────────┘
}
```
## ប្រមាណវិធីប្រៀបធៀប (Comparission Operator)

ក្នុងភាសាស៊ី របស់កុំព្យូទ័រ បើពិតគឺ `1` មិនពិតគឺ ​`0`
ការប្រៀបធៀបមានដូចគណិតវិទ្យាដែរ ៖

|សញ្ញា|តួនាទី|ឧទាហរណ៍|
|---|---|---|
| == | ស្មើ | 3 == 2 មិនពិតគឺ 0 |
| < | តូចជាង | 3 < 2 មិនពិតគឺ 0 |
| > | ធំជាង | 3 > 2 ពិតគឺ 1 |
| <= | តូចជាងឬស្មើ | 3 <= 2 មិនពិតគឺ 0 |
| >= | ធំជាងឬស្មើ | 3 >= 2 ពិតគឺ 1 |
| != | ខុសពី | 3 != 2 ពិតគឺ 1 |

ឧទាហរណ៍នៅខាងក្រោម ៖

```
#include <stdio.h>

void main()
{
    int a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);
}
```

## ប្រមាណវិធីកត្តវិទ្យា (Logical Operator)
កត្តវិទ្យា មានក្នុងកម្មវិធីសិក្សាតាំងពីថ្នាក់ទី១០ មកម្ល៉េះ ខ្ញុំសួមរំលឹកបន្តិចចោះ។ វាមានឈ្នាប់និង​ (`&&`) ឈ្នាប់ឬ (`||`) និង ឈ្នាប់មិន (`!`)។ 

---
|a|b| (a && b) |
|---|---|---|
|1|1|1|
|1|0|0|
|0|1|0|
|0|0|0|

---
|a|b| (a​ \|\| b) |
|---|---|---|
|1|1|1|
|1|0|0|
|0|1|0|
|0|0|0|
---
|!a|a|
|---|---|
|1|0|
|0|1|
---

ឧទាហរណ៍ ៖ 
```
#include <stdio.h>

void main()
{
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);
}

Output:
(a == b) && (c > b) is 1 
(a == b) && (c < b) is 0 
(a == b) || (c < b) is 1 
(a != b) || (c < b) is 0 
!(a != b) is 1 
!(a == b) is 0 
```

**សម្រាប់អ្នកស្រាវជ្រាវបន្ថែមនឹងជួបការគណនា bitwise operator**

|សញ្ញា |	តួនាទី|
|---|---|
| &	| Bitwise AND|
| \| |	Bitwise OR |
| ^	| Bitwise exclusive OR |
| ~	| Bitwise complement |
| << |	Shift left |
| >> |	Shift right |

