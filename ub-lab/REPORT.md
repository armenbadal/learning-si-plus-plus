## 01-overflow.cxx

Prediction: undefind behaviour, ՝x՝-ը կտպվի բացասական թվի տեսքով

Classification: ill-formed

Reason: `x`-ը արժեքավորվում է `int` տիպի ամենամեծ արժեքով, դրան 1 գումարելուց հետո բիթային ներկայացման առաջին բիթը կդառնա 1

Expected sanitizer: UBSan


## 02-shifts.cxx

```
    unsigned int x = 1;
    auto y = x << 32;
```

Prediction: `x`-ը կզրոյանա, 

Classification: ill-formed, shift count-ը պետք է փոքր լինի բիթերի քանակից

Reason: քանի որ `<<` գործողությունը աջ կողմից ազատված բիթերը միշտ դարձնում է զրո

Expected sanitizer: UBSan

```
    int n = -1;
    auto y = 1u << n;
```

Prediction: սխալ, 

Classification: ill-formed, shift count-ը պետք է փոքր լինի դրական

Expected sanitizer: UBSan

```
    unsigned int x = 1;
    auto y = x << 31;
```

Prediction: ճիշտ, 

Classification: well-defined


## 03-dangling

Prediction: UB՝

Classification: UB

Reason: `x`-ի կյանքն ավարտվում է `get`-ի ավարտի հետ

Expected sanitizer:
