# គ្រប់គ្រងលក្ខខ័ណ
[<< Prev >>](https://github.com/samreachyan/c-program-basic/tree/main/Condition "Previous") | [<< Next >>](https://github.com/samreachyan/c-program-basic/tree/main/Loops "Next")

ការគ្រប់គ្រងលក្ខខ័ណមានច្រើន ធម្មតាយើងរៀនដំបូងៗច្រើនជួប `if else ` ហើយថ្ងៃនេះយើងនឹង សិក្សាពីវាគ្រប់លក្ខខ័ណ និង ថែមផ្នែកមួយចំនួន។ 
- [គ្រប់គ្រងលក្ខខ័ណ](#គ្រប់គ្រងលក្ខខ័ណ)
  - [if - ប្រសិនបើ](#if---ប្រសិនបើ)
  - [if else - ប្រសិនបើ បើមិនដូច្នោះ](#if-else---ប្រសិនបើ-បើមិនដូច្នោះ)
  - [if - else if - else - ប្រសិនបើ ប្រសិនបើ បើមិនដូច្នោះ](#if---else-if---else---ប្រសិនបើ-ប្រសិនបើ-បើមិនដូច្នោះ)
  - [Nest Condition - លក្ខខ័ណក្នុងលក្ខខ័ណ](#nest-condition---លក្ខខ័ណក្នុងលក្ខខ័ណ)
  - [Swtich - លក្ខខ័ណច្រើនបែប](#swtich---លក្ខខ័ណច្រើនបែប)

ក្នុងមេរៀននេះដែរ យើងត្រូវឆ្លាតវៃក្នុងការគណនា (+ - * / %) និងប្រើប្រាស់កត្តវិទ្យា (&& || !) ចាំបាច់សម្រាប់ដោះស្រាយតាមករណីនិមួយៗ។ 

## if - ប្រសិនបើ
យើងច្រើននិយាយលេង `បើមេឃភ្លៀង ខ្ញុំមិនទៅសាលា`។
```
if (មេឃភ្លៀង) {
    សម្រាកនៅផ្ទះ ;
}
-----
if (condition) {
    code;
}
``` 

ឧទាហរណ៍ ៖

```
#include <stdio.h>

void main() {
    int girl=20;
    if (girl >= 18) {
        printf("You can marry me 😍 ");
    }
}
```

## if else - ប្រសិនបើ បើមិនដូច្នោះ
ងាយៗ `បើមេឃភ្លៀង ខ្ញុំមិនទៅសាលាទេ តែបើមិនភ្លៀងទៅរៀនធម្មតា` ។

```
if (មេឃភ្លៀង) {
    សម្រាកនៅផ្ទះ ;
} else {
    ទៅសាលារៀន ;
}
-----
if (condition) {
    code;
} else {
    code;
}
```

ឧទាហរណ៍ ៖

```
#include <stdio.h>

void main() {
    int girl=17;
    if (girl >= 18) {
        printf("You can marry me 😍 ");
    } else {
        printf("I am waiting you babe ❤️ ");
    }
}
```

## if - else if - else - ប្រសិនបើ ប្រសិនបើ បើមិនដូច្នោះ
ប្រសិនបើខ្ញុំមានលុយខ្ញុំនឹង៖
- 1000$ ទិញកុំព្យូទ័រ 😏😏
- 5000$ ទិញម៉ូតូថ្លៃ 😗😗
- 10000$ ដណ្តឹងប្រពន្ធមួយ 😘😘
- 100000$ ទិញផ្ទះ 😝😝
- តែលូវគ្មានអីទេ ដើរទៅសាលារៀន 😫😫

```
if (condition1) {
    code;
} else if (condition2) {
    code;
} else if (condition3) {
    code;
} else {
    code;
}
-----
if (money >= 1000) {
    printf("ទិញកុំព្យូទ័រ 😏😏");
} else if (money >= 5000) {
    printf("ទិញម៉ូតូថ្លៃ 😗😗");
} else if (money >= 10000) {
    printf("ដណ្តឹងប្រពន្ធមួយ 😘😘");
} else if (money >= 100000) {
    printf("ទិញផ្ទះ 😝😝");
} else {
    printf("ក្រ!! ដើរទៅសាលារៀន 😫😫");
}
```

## Nest Condition - លក្ខខ័ណក្នុងលក្ខខ័ណ
ពេលខ្លះ យើងត្រូវចេះប្រើតាមស្ថានភាព តាមការងារជាក់ស្តែង ខ្ញុំសូមណែនាំការសរសេរកូដមួយទៀតហៅថា `Nest conditions`។ 

```
if (condition1) {
    if (condition1.1){
        code;
    } else {
        code;
    }
} else if (condition2) {
    if (condition2.1){
        code;
    }
} else {
    code;
}
```

ខ្ញុំមានឧទាហរណ៍ងាយៗទៀត៖ `ខ្ញុំស្រលាញ់នារីម្នាក់ មានអាយុលើស ១៨ឆ្នាំ ហើយស្អាត ឆ្លាតមាន តែបើអាយុច្រើនពេកអត់យកទេ។ អាយុតិចទ្រាំចាំគាត់ 😆`។ 

```
#include <stdio.h>

void main() {
    int age = 20;
    if (age >= 18) {
        if (beauty && nice_heart || rich) {
            printf("ការភ្លាម 😍");
        } else if (rich || age >= 30 ) {
            printf("មើលចិត្តយូរខ្លះដែរ មិនចិត្តងាយពេកទេ 😏😏");
        } else {
            printf("មិនដឹងទេ មិនយកទេ គ្មាននិស្ស័យនឹងគ្នា 😂😂");
        }
    } else {
        printf("អាយុតិចទ្រាំចាំ 😆");
    }
}
```

## Swtich - លក្ខខ័ណច្រើនបែប
Swtich ក៏ឃើញថាត្រូវបានប្រើច្រើនណាស់ដែរក្នុងភាសានិមួយៗ។ 

```
switch(variable) {
    case condi1: 
        code;
        break;
    case condi2: 
        code;
        break;
    case condi3:
        code;
        break;
    ...
    default: 
        code;
        break;
}
```

ឧទាហរណ៍៖ 

```
#include <stdio.h>

void main() {
    char operator;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
}
```
ងាយៗ សម្រាប់រៀនដំបូងៗអញ្ចឹង។ 😘😘
