
# **ماشین حساب**
## ساختمان داده‌ها \- دکتر رضا رمضانی
دانشگاه اصفهان
پاییز 1403  


# **هدف‌ها**

## **هدف‌های اصلی**

* شبیه‌سازی عملکرد ماشین حساب  در محاسبه‌ی عبارت‌های ریاضی و حل معادلات  
* آشنایی با کاربرد ساختمان‌داده‌های استک و صف در ذخیره‌سازی و پردازش داده‌ها  
* آشنایی با الگوریتم‌های پردازشی مرتبط با محاسبات ریاضی  
* و ..


## **هدف‌های جانبی**

* رعایت اصول ساختارمندی کد  
* رعایت اصول تمیزی کد  
* و..  
  


# **قابلیت‌ها**

* محاسبه‌ی عبارت‌های ریاضی شامل عملگرها و عملوندهای متداول  
* محاسبه‌ی مجموعه معادلات دارای وابستگی‌  
* رعایت اولویت‌بندی در محاسبات عبارت‌ها و معادلات  
* تشخیص خطاهای متداول  
  


# **پیش نیازها**

* آشنایی با مبانی ساختمان‌داده‌های استک و صف  
* آشنایی با مبانی الگوریتم و پیاده‌سازی  
* آشنایی با عبارت‌های پایه‌ی ریاضی و اولویت عملگرها

# **توصیف نیازمندی‌ها**
پروژه‌‌ی حاضر به منظور طراحی سامانه‌ای برای حل مجموعه‌ای از معادلات وابسته‌ی ریاضی تعریف شده است. این معادلات شامل عملگرها و عملوندهای مشخص و با فرمت تعیین‌شده هستند که حل آن‌ها نیازمند توجه به اولویت در ترتیب و حل معادلات ست. این برنامه مجموعه‌ی معادلات را به‌صورت متنی دریافت و نتیجه‌ی محاسبات یا پیام خطای مرتبط را خروجی می‌دهد. جزئیات بیشتر از نحوه‌ی عملکرد و پیاده‌سازی در ادامه بیان خواهد شد.


# **ساختمان داده‌ها** - 100 امتیاز

* پشته‌ (Stack)  
* صف (Queue)  
* آرایه (Array)  
  * پیاده‌سازی ساختمان‌داده‌های پشته و صف **الزامی** بوده و استفاده از پیاده‌سازی‌های آماده‌ی آن در زبان‌های برنامه‌نویسی موجب **کسر نمره‌ی این بخش** خواهد شد.  


# **ویژگی‌ها و عملکردها** - 100 امتیاز

* پشتیبانی از عملگرهای جمع (+)، تفریق (-)، ضرب (\*)، تقسیم (/)، توان (^) و فاکتوریل (\!)  
* پشتیبانی از عملوندهای صحیح و اعشاری (به فرم بخش اعشاری(درصورت نبودن صفر).بخش صحیح(درصورت نبودن صفر))، عدد پی (PI=3.14159)، عدد نپر (EN=2.71828) و متغیرهای تک‌حرفی (a-z A-Z **بدون توجه به بزرگ یا کوچک بودن حروف**)  
* پشتیبانی از محاسبات اولویت‌دار (با ترتیب اولویت پرانتز، فاکتوریل، توان، ضرب و تقسیم، جمع و تفریق)  
* پشتیبانی از مجموعه معادلات وابسته به شکل **«عبارت ریاضی=متغیر»**


# **پیاده‌سازی** - 300 امتیاز

در این پروژه **سه** بخش پیاده‌سازی الگوریتمی مدنظر است:

## **محسابه‌ی عبارت‌های ریاضی اولویت‌دار**  - 150 امتیاز

* یکی از روش‌های محاسبه‌ی عبارت‌های ریاضی اولویت‌دار، تبدیل آن‌ها به فرم postfix و سپس محاسبه به کمک **پشته** است.  
* استفاده از تابع‌های آماده‌ی زبان برنامه‌نویسی **صرفاً جهت اجرای عملیات‌های پایه‌ی ریاضی** (مانند توان) مجاز می‌باشد.

## **مدیریت وابستگی معادلات** - 100 امتیاز

* یکی از روش‌های مدیریت وابستگی معادلات، استفاده از **صف** برای اطمینان از پردازش هر معادله تنها پس از پردازش وابستگی‌های آن است.

## **ذخیره‌سازی و دسترسی سریع به نتایج** - 50 امتیاز

* یکی از روش‌های سریع دسترسی به داده‌ها در کمترین مرتبه‌ی زمانی، استفاده از **آرایه و اندیس‌گذاری** است.

توصیه می‌شود روند پیاده‌سازی را به ترتیب گفته شده پیش ببرید:
 1. ابتدا بخش مربوط به **محاسبه‌ی عبارت‌های ریاضی** را پیاده‌سازی نموده و از صحت عملکرد آن اطمینان حاصل کنید(بخش اول تست‌کیس‌ها)؛
 1. سپس برنامه‌ی خود را برای **پشتیبانی از چند معادله** گسترش دهید. این مرحله را ابتدا با فرض مرتب بودن معادلات از نظر وابستگی پیاده‌سازی و ارزیابی نموده (بخش دوم تست‌کیس‌ها)؛
 1. در مرحله‌ی بعد به **مدیریت وابستگی‌های درهم** بپردازید(بخش سوم تست‌کیس‌ها).
 1. در هر مرحله به **ذخیره‌سازی** و **دسترسی سریع** به نتایج نیز توجه کنید.


# **ساختار و مدل‌های داده** - 50 امتیاز

* رعایت اصول طراحی معماری و سازماندهی کد از جمله [اصول SOLID](https://medium.com/backticks-tildes/the-s-o-l-i-d-principles-in-pictures-b34ce2f1e898) برای **توسعه‌پذیری** و **بهبود کیفیت طراحی** ضروری است.  
  * در طراحی معماری این پروژه می‌توانید از [نمونه‌ی پیشنهادی](https://s32.picofile.com/file/8480718176/CalculatorSuggestedCalssDiagram.PNG) در قالب [نمودار کلاس](https://www.geeksforgeeks.org/unified-modeling-language-uml-class-diagrams/) استفاده نمایید. توجه داشته باشید که این نمونه **کاملا پیشنهادی** و **ناقص** ست؛ به‌گونه‌ای که تکمیل جزئیات و اعمال تغییرات لازم در آن هنگام پیاده‌سازی **ضروری** است.


# **کدنویسی تمیز** - 50 امتیاز

رعایت [اصول کدنویسی تمیز](https://dev.to/favourmark05/writing-clean-code-best-practices-and-principles-3amh) برای **فهم‌پذیری** و **بهبود کیفیت کد** ضروری است.


# **مدیریت خطا** - 50 امتیاز

خطاهای ممکن در این سیستم در **سه** بخش کلی طبقه‌بندی می‌شوند: 

## **خطاهای ورودی**
  ```
  Invalid Input
  ```
مثال:

  F=@+T  
  \#=9-10  

  ```
  Invalid Format
  ```
مثال:

  R=(4\!-3(  
  3-S=81\*2  
  d=4-\*3

## **خطاهای مربوط به محاسبه‌ها**
  ```
  Arithmetic Error
  ```

مثال:

  D=C/0  
  W=-4^(1/2)
  
  ## **خطاهای مربوط به معادله‌ها**
  ```
  Inconsistency
  ```
مثال:

  X=3+5  
  y=x+7  
  x=96\*2  

  ```
  Circular Dependency  
  ```
مثال:

  x=3+4-Y  
  Y=X/90  

  ```
  Not Defined Variable
  ```
مثال:

  Z=x-4  
  y=(4+Z)\*5.4  
  


# **پیچیدگی‌ و بهینه‌سازی** - 50 امتیاز

* پیچیدگی **زمانی** و **فضایی** الگوریتم خود را در **بدترین حالت**، به ازای N معادله با فرض وجود وابستگی‌ در بین آن‌ها محاسبه و **به‌صورت مختصر توضیح دهید**.  
* بررسی کنید که چگونه می‌توان با بهینه‌سازی الگوریتم این پیچیدگی را به مراتب کمتر کاهش داد.


# **ورودی خروجی** - 300 امتیاز

## **ورودی**

در خط اول ورودی عدد n به معنای تعداد معادلات می‌آید و هر یک از n خط بعدی شامل یک معادله به فرم (عبارت ریاضی=متغیر) می‌باشد که در قالب یک رشته دریافت می‌شود.

 * عبارت ریاضی می‌تواند شامل عملگرهای جمع (+)، تفریق (-)، ضرب (\*)، تقسیم (/)، توان (^) و فاکتوریل (\!)، عملوندهای اعداد صحیح، اعشاری (بخش اعشاری.بخش صحیح)، عدد پی (PI=3.14159)، عدد نپر (EN=2.71828) و متغیرها (a-z A-Z بدون توجه به بزرگی یا کوچکی) و پرانتز گذاری برای تعیین اولویت محاسبات باشد.  
    
  0 ≤ n ≤10  
  10-9 ≤ any number in equations ≤ 109


  ## **خروجی**

در صورت قابل محاسبه بودن مقدار همه‌ی متغیرها و عدم بروز خطا در حین محاسبه، نتیجه‌ را تا **چهار رقم اعشار** (در صورت اعشاری بودن) و در قالب مجموعه‌ای از متغیرها (**حروف بزرگ**) و مقادیر منتسب به آن‌ها **به ترتیب حروف الفبا** در خروجی چاپ کنید. در صورت بروز هرگونه خطا در **هر یک از معادلات**، تنها نام خطا را در خروجی چاپ کنید.  
    
ورودی 1:
  ```
  1
  x=4*(5+PI)
  ```
خروجی 1:
  ```
  X=32.5663
  ```

  ورودی 2:
  ```
  3
  B=A+1  
  C=3+7  
  A=C*4
  ```
خروج 2:
  ```
  A=40
  B=41  
  C=10
  ```

ورودی 3
  ```
  3
  A=90-4  
  B=C^5  
  C=7/0
  ```
خروجی 3:
  ```
  Outp Arithmetic Error
  ```


# **امتیازی** - 250 امتیاز

**پشتیبانی از تعریف عملیات جدید** - 60 امتیاز

* افزودن نماد و عبارت ریاضی متناظر بر اساس عملیات‌های پایه‌ی ماشین حساب؛  
  * می‌توانید از الگوی زیر برای تعریف عملیات جدید استفاده کنید.  
      
 ورودی تعریف عملیات:
  ```
  Advanced Mode/New Operation    
  A # B = A*B-(A+B)
  ```
  نتیجه‌ی تعریف:
  ```
  Operation defined successfully.
  ```
  ورودی نمونه:
  ```
  1  
  X=2#3
  ```
خروجی نمونه:
  ```
  X=1
  ```


## **پشتیبانی از نمایش تاریخچه‌ی محاسبات** - 50 امتیاز

 * گسترش قابلیت‌های ماشین حساب با نمایش وضعیت عبارت در حال محاسبه در هر مرحله؛  
  ورودی تاریخچه:
  
  ```
  Advanced Mode/Show History
  ```
  ورودی نمونه:
  
  ```
  2  
  C=54^2/D  
  D=87\*(32-17)
  ```
  خروجی نمونه:
  
  ```
  D=87\*15  
  D=1305

  C=2916/1305  
  C=2.2344
  ```

## **پشتیبانی از توابع ریاضی** - 40 امتیاز

 * گسترش قابلیت‌های ماشین حساب با پشتیبانی از توابع ریاضی مانند: توابع مثلثاتی، لگاریتم و …؛  
  ورودی توابع ریاضی:
  
  ```
  Advanced Mode/Special Functions  
  ```
ورودی نمونه:

  ```
  2  
  X=50\*sin90  
  Y=tan32/x
  ```
خروجی نمونه:

  ```
  X=50  
  Y=0.6246
  ```  		    

## **پشتیبانی از نمایش توابع** - 30 امتیاز

* گسترش قابلیت‌های ماشین حساب با افزودن امکان رسم نمودار توابع در کنسول یا رابط کاربری گرافیکی؛


## **پشتیبانی از رابط کاربری گرافیکی** - 20 امتیاز

 * گسترش قابلیت‌های ماشین حساب با پیاده‌سازی رابط کاربری گرافیکی به سبک دلخواه؛
ورودی رابط کاربری گرافیکی:

  ```
  Advanced Mode/Graphical UI
  ```


## **سایر موارد** - 50> امتیاز

* گسترش قابلیت‌های ماشین حساب بسته به خلاقیت و سلیقه‌ی شخصی؛


- به منظور حفظ عملکرد حالت پایه‌ی ماشین حساب، هریک از پیاده‌سازیی‌های امتیازی باید با وارد کردن دستور خاصی مثلا Advanced Mode اجرا شوند. در غیر اینصورت ماشین حساب از ورودی خروجی‌های گفته شده در بخش‌های قبلی پشتیبانی می‌کند. پیروی از این الگو برای قبولی تست‌کیس‌ها ضروری است.  
- پیاده‌سازی موارد امتیازی تنها در صورت تکمیل بخش‌های اصلی پروژه می‌تواند امتیاز اضافی به همراه داشته باشد.

# **نکات تکمیلی**

## **زبان‌ پیاده‌سازی**

 * زبان‌های برنامه‌نویسی قابل ارزیابی در پروژه شامل \++C و java و \#C می‌باشد.  
 * استفاده از فریم‌ورک‌ زبان‌های برنامه‌نویسی نام‌برده مجاز است.


  ## **مهلت اتمام**

 * پروژه‌ی جاری در تاریخ 1403/09/06 ساعت 06:00:00 منتشر و حداکثر مهلت اتمام آن تا تاریخ 1403/09/17 ساعت 06:00:00 می‌باشد.


  ## **گروهبندی**

 * پیاده‌سازی و ارزیابی پروژه به‌صورت فردی انجام می‌شود.


  ## **بستر پیاده‌سازی**

 * توسعه و پیاده‌سازی پروژه، در بستر گیت‌هاب انجام می‌گیرد.  
 * با ورود به [لینک اساینمنت پروژه](https://classroom.github.com/a/Q4OCc_3i)، ریپوزیتوری مخصوص هر فرد به‌صورت خودکار ساخته می‌شود.  
 * روند توسعه‌ی پروژه در قالب کامیت‌های **متوالی** و **معنادار** روی برنچی به نام Calculator و تحلیل پیچیدگی آن روی **برنچ دیگری** بنام Analysis انجام می‌شود. توصیه می‌شود پیاده‌سازی بخش‌های امتیازی نیز روی برنچ مجزا انجام گردد.  
 * ساخت **برنچ‌های متعدد** و رعایت [اصول نوشتار صحیح متن کامیت](https://www.freecodecamp.org/news/how-to-write-better-git-commit-messages/) برای توسعه‌ی تمیزتر توصیه می‌شود.


  ## **نحوه‌ی ارزیابی**

 * ارزیابی عملکرد پروژه، به‌صورت تست‌کیسی در بستر گیت‌هاب و همچنین ارائه‌ی حضوری انجام می‌گیرد.  
 * ارزیابی ابتدایی پروژه به کمک تست‌کیس‌‌های طبقه‌بندی شده و با ابزار تست گیت‌هاب انجام می‌شود.  
 * ارزیابی نهایی در قالب ارائه‌های 20 دقیقه‌ای، به‌صورت حضوری و براساس **بارم‌بندی ذکرشده در بخش‌های مختلف همین مستند** انجام می‌شود.  
 * بخش‌های امتیازی پروژه شامل ارزیابی اولیه **نمی‌شود**.