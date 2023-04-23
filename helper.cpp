დავალება 1

 

შეადგინეთ პროგრამა c++, შეადგინეთ პროგრამა c++ .do/while ციკლის ოპერატორის გამოყენებით შეადგინეთ პროგრამა, რომელიც გამოთვლის y=x^2+ 5 ფუნქციის მნიშვნელობებს და წარმოაგენს ფუნქციისა და არგუმენტის მნიშვნელობათა ცხრილს სადაც x არფუმენტი [-5;5] ინტერვალში იცვლება h =1.5 ბიჯით

 

#include <iostream>

#include <iomanip>

#include <cmath>

 

using namespace std;

 

int main() {

    double x = -5.0;

    double h = 1.5;

    double y;

 

    cout << setw(10) << "x" << setw(10) << "y" << endl;

    do {

        y = pow(x, 2.0) + 5.0;

        cout << setw(10) << x << setw(10) << y << endl;

        x += h;

    } while (x <= 5.0);

 

    return 0;

}

 

დავალება 2

 

შეადგინეთ პროგრამა c++, მოცემულთა კვადრატული მატრიცა N[4x4]

შეადგინეთ პროგრამა, რომელიც გამოთვლის მატრიცის ელემენტების ჯამებს სვეტების მიხედვით და დაბეჭდავს იმ სვეტის ელემენტებს, რინეკთა ჯამიც მინიმალურია.

 

#include <iostream>

 

using namespace std;

 

const int N = 4;

 

int main() {

    int matrix[N][N] = {{1, 2, 3, 4},

                        {5, 6, 7, 8},

                        {9, 10, 11, 12},

                        {13, 14, 15, 16}};

    int col_sum[N] = {0};

    int row_sum[N] = {0};

 

    // Calculate the sum of the elements by column and row

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            col_sum[j] += matrix[i][j];

            row_sum[i] += matrix[i][j];

        }

    }

 

    // Find the column with the highest sum and print its elements and sum

    int max_col_sum_index = 0;

    for (int j = 1; j < N; j++) {

        if (col_sum[j] > col_sum[max_col_sum_index]) {

            max_col_sum_index = j;

        }

    }

    cout << "Column " << max_col_sum_index + 1 << ":\n";

    for (int i = 0; i < N; i++) {

        cout << matrix[i][max_col_sum_index] << endl;

    }

    cout << "Sum: " << col_sum[max_col_sum_index] << endl;

 

    // Find the row with the smallest sum and print its elements

    int min_row_sum_index = 0;

    for (int i = 1; i < N; i++) {

        if (row_sum[i] < row_sum[min_row_sum_index]) {

            min_row_sum_index = i;

        }

    }

    cout << "Row with smallest sum:\n";

    for (int j = 0; j < N; j++) {

        cout << matrix[min_row_sum_index][j] << "\t";

    }

    cout << endl;

 

    return 0;

}

 

დავალება 1

 

შეადგინე პროგრამა c++, რომელიც გამოითვლის y = x^4-2x^2+7 ფუნქცისს მნიშვნელობებს და წარმოადგენს ფუნქციისა და არგუმენტების მნიშვნელობათა ცხრილს, სადაც x არგუმენტები [-4,8] ინტერვალში იცვლება h =1.5 ბიჯით ამასთან გამოთვალეთ ფუნქციის უარყოფითი მნიშვნელობის ნამრავლი.

 

#include <iostream>

#include <iomanip>

#include <cmath>

 

using namespace std;

 

int main() {

    double x, y, product_of_negatives = 1.0;

    double h = 1.5;

    int num_rows = 0;

   

    // Print header of the table

    cout << setw(10) << "x" << setw(15) << "y" << endl;

 

    // Loop over the range of x values and calculate the function values

    for (x = -4.0; x <= 8.0; x += h) {

        y = pow(x, 4.0) - 2.0 * pow(x, 2.0) + 7.0;

        cout << setw(10) << x << setw(15) << y << endl;

       

        // Check if the value of the function is negative and update the product

        if (y < 0) {

            product_of_negatives *= y;

        }

       

        num_rows++;

    }

   

    // Print the product of the negative values of the function

    if (product_of_negatives != 1.0) {

        cout << "The product of the negative values of the function is: " << product_of_negatives << endl;

    } else {

        cout << "There are no negative values of the function." << endl;

    }

   

    // Print the number of rows in the table

    cout << "Number of rows in the table: " << num_rows << endl;

   

    return 0;

}

 

დავალება 2

 

შეადგინეთ პროგრამა c++, მოცემულთა კვადრატული მატრიცა B[5x5]

შეადგინეთ პროგრამა, რომელიც ცალ-ცალკე გამოტვლის მატრიცის არამთავარი დიაგონალის ზემოთ და ქვემოტ განლაგებული ელემენტების ნამრავლებს, მიღებულ შედეგებს ერთმანეთს შეადარებს და დაბეჭდავს მატრიცას და ყველა ეტაპის შედეგს.

 

#include <iostream>

 

using namespace std;

 

const int N = 5;

 

int main() {

    int B[N][N] = {{1, 2, 3, 4, 5},

                   {6, 7, 8, 9, 10},

                   {11, 12, 13, 14, 15},

                   {16, 17, 18, 19, 20},

                   {21, 22, 23, 24, 25}};

    int product_above_diagonal = 1;

    int product_below_diagonal = 1;

 

    // Print the matrix and calculate the products

    cout << "Matrix B:\n";

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            cout << B[i][j] << "\t";

            if (i < j) {

                product_above_diagonal *= B[i][j];

            } else if (i > j) {

                product_below_diagonal *= B[i][j];

            }

        }

        cout << endl;

    }

 

    // Print the products of the elements above and below the diagonal

    cout << "Product of elements above the diagonal: " << product_above_diagonal << endl;

    cout << "Product of elements below the diagonal: " << product_below_diagonal << endl;

 

    // Compare the products and print the result

    if (product_above_diagonal > product_below_diagonal) {

        cout << "The product of elements above the diagonal is greater." << endl;

    } else if (product_above_diagonal < product_below_diagonal) {

        cout << "The product of elements below the diagonal is greater." << endl;

    } else {

        cout << "The products of elements above and below the diagonal are equal." << endl;

    }

 

    return 0;

}

 

ღია კითხვა 2  ??
რა დაიბეწდება ეკრანზე პროგრამის შესულეის მერე

 

int main()[

int x=1;

y=2;

x

if(x==1)

if(y==2)

 

ღია კითხვა 2  ??
 

რა დაიბეწდება ეკრანზე პროგრამის შესულეის მერე

 

int main()

int k ;

int a[] =[-2,2,7,-4,-7,1,2];

k = 52%7;

switch(a[k])

(

case -2;cout<<1<<endl;break;

case 2;cout<<2<<endl;break;

case 7;cout<<3<<endl;break;

case -4;cout<<4<<endl;break;

case -7;cout<<5<<endl;break;

case 1;cout<<6<<endl;break;

case 3; cout<<7<<endl;break;

default: cout<<8<<endl;

;

 

swori

#include <iostream>

 

using namespace std;

 

int main() {

    int k;

    int a[] = {-2, 2, 7, -4, -7, 1, 2};

    k = 52 % 7;

    switch (a[k]) {

        case -2:

            cout << 1 << endl;

            break;

        case 2:

            cout << 2 << endl;

            break;

        case 7:

            cout << 3 << endl;

            break;

        case -4:

            cout << 4 << endl;

            break;

        case -7:

            cout << 5 << endl;

            break;

        case 1:

            cout << 6 << endl;

            break;

        case 3:

            cout << 7 << endl;

            break;

        default:

            cout << 8 << endl;

            break;

    }

    return 0;

}

answer :4

 

დავალება 1

 

შეადგინეთ y =cosx/x ფუნქციის მნიშვლებობათა ცხრილის გამოთვლის პროგრამა სადაც X არგუმენტი [-10;25] ინტერვალში h=0,1 ბიჯით იცვლება

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

int main() {

    const double h = 0.1;

    double x, y;

 

    for (x = -10.0; x <= 25.0; x += h) {

        if (x == 0.0) {

            cout << "Division by zero error!" << endl;

            continue;

        }

        y = cos(x) / x;

        cout << "x = " << x << ", y = " << y << endl;

    }

 

    return 0;

}

 

დავალება 2
მოცემულია კვადრატული მატრიცა m[5x5] შეადგინეთ პროგრამა რომელიც გამოთვლის მატრიცის იმ ელემენტების ნამრავლსა და საშუალო არითმეტიკულს რომელთაც გააჩნიათ ლუწი მნიშვნელობის მქონე სტრიქონის ინდექსის ნომრები და კენტი მნიშვნელოვის მქონე სვეტის ინდექსის ნომრევი

 

#include <iostream>

using namespace std;

 

int main() {

    int m[5][5] = {{1, 2, 3, 4, 5},

                   {6, 7, 8, 9, 10},

                   {11, 12, 13, 14, 15},

                   {16, 17, 18, 19, 20},

                   {21, 22, 23, 24, 25}};

    int product = 1;

    int count = 0;

    int sum = 0;

 

    for (int i = 0; i < 5; i += 2) {

        for (int j = 1; j < 5; j += 2) {

            if (m[i][j] % 2 == 0) {

                product *= m[i][j];

                sum += m[i][j];

                count++;

            }

        }

    }

 

    double mean = (double) sum / count;

    cout << "Product: " << product << endl;

    cout << "Mean: " << mean << endl;

 

    return 0;

}

 

დავალეაბა 1

შეადგინეთ პროგრამა c++ რომელიც გამოიტვლის გამოსახულებათა შემდეგი სისტემსი მნიშვნეწლობას

 

y = sin(2-x)+1/sqrte^4-x

სადაც x=2; a=2,8, b=4,2, c=8,a=1

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

int main() {

    double x = 2, a = 2.8, b = 4.2, c = 8, d = 1;

    double y = sin(2 - x) + 1 / sqrt(exp(4 - x));

 

    cout << "y = " << y << endl;

 

    return 0;

}

 

დავალება 1

z = { ax^3-2, თუ y<1;

ax^2+bx+c თუ y=1

c; if y==1

2x-3}

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

double z(double x, double y, double a, double b, double c) {

    double result;

    if (y < 1) {

        result = a * pow(x, 3) - 2;

    } else if (y == 1) {

        result = a * pow(x, 2) + b * x + c;

    } else {

        result = 2 * x - 3;

    }

    return result;

}

 

int main() {

    double x = 2, y = 1, a = 1, b = 2, c = -3;

    double result = z(x, y, a, b, c);

    cout << "z(" << x << ", " << y << ", " << a << ", " << b << ", " << c << ") = " << result << endl;

    return 0;

}

 

დავალება 1

 

შეადგინეთ პროგრამა c++, შეადგინეთ პროგრამა c++ .do/while ციკლის ოპერატორის გამოყენებით შეადგინეთ პროგრამა, რომელიც გამოთვლის y=x^2+ 5 ფუნქციის მნიშვნელობებს და წარმოაგენს ფუნქციისა და არგუმენტის მნიშვნელობათა ცხრილს სადაც x არფუმენტი [-5;5] ინტერვალში იცვლება h =1.5 ბიჯით

 

#include <iostream>

#include <iomanip>

#include <cmath>

 

using namespace std;

 

int main() {

    double x = -5.0;

    double h = 1.5;

    double y;

 

    cout << setw(10) << "x" << setw(10) << "y" << endl;

    do {

        y = pow(x, 2.0) + 5.0;

        cout << setw(10) << x << setw(10) << y << endl;

        x += h;

    } while (x <= 5.0);

 

    return 0;

}

 

დავალება 2

შეადგინეთ პროგრამა c++, მოცემულთა კვადრატული მატრიცა N[4x4]

შეადგინეთ პროგრამა, რომელიც გამოთვლის მატრიცის ელემენტების ჯამებს სვეტების მიხედვით და დაბეჭდავს იმ სვეტის ელემენტებს, რინეკთა ჯამიც მინიმალურია.

 

#include <iostream>

 

using namespace std;

 

const int N = 4;

 

int main() {

    int matrix[N][N] = {{1, 2, 3, 4},

                        {5, 6, 7, 8},

                        {9, 10, 11, 12},

                        {13, 14, 15, 16}};

    int col_sum[N] = {0};

    int row_sum[N] = {0};

 

    // Calculate the sum of the elements by column and row

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            col_sum[j] += matrix[i][j];

            row_sum[i] += matrix[i][j];

        }

    }

 

    // Find the column with the highest sum and print its elements and sum

    int max_col_sum_index = 0;

    for (int j = 1; j < N; j++) {

        if (col_sum[j] > col_sum[max_col_sum_index]) {

            max_col_sum_index = j;

        }

    }

    cout << "Column " << max_col_sum_index + 1 << ":\n";

    for (int i = 0; i < N; i++) {

        cout << matrix[i][max_col_sum_index] << endl;

    }

    cout << "Sum: " << col_sum[max_col_sum_index] << endl;

 

    // Find the row with the smallest sum and print its elements

    int min_row_sum_index = 0;

    for (int i = 1; i < N; i++) {

        if (row_sum[i] < row_sum[min_row_sum_index]) {

            min_row_sum_index = i;

        }

    }

    cout << "Row with smallest sum:\n";

    for (int j = 0; j < N; j++) {

        cout << matrix[min_row_sum_index][j] << "\t";

    }

    cout << endl;

 

    return 0;

}

 

 დავალება 1

შეადგინე პროგრამა c++, რომელიც გამოითვლის y = x^4-2x^2+7 ფუნქცისს მნიშვნელობებს და წარმოადგენს ფუნქციისა და არგუმენტების მნიშვნელობათა ცხრილს, სადაც x არგუმენტები [-4,8] ინტერვალში იცვლება h =1.5 ბიჯით ამასთან გამოთვალეთ ფუნქციის უარყოფითი მნიშვნელობის ნამრავლი.

 

#include <iostream>

#include <iomanip>

#include <cmath>

 

using namespace std;

 

int main() {

    double x, y, product_of_negatives = 1.0;

    double h = 1.5;

    int num_rows = 0;

   

    // Print header of the table

    cout << setw(10) << "x" << setw(15) << "y" << endl;

 

    // Loop over the range of x values and calculate the function values

    for (x = -4.0; x <= 8.0; x += h) {

        y = pow(x, 4.0) - 2.0 * pow(x, 2.0) + 7.0;

        cout << setw(10) << x << setw(15) << y << endl;

       

        // Check if the value of the function is negative and update the product

        if (y < 0) {

            product_of_negatives *= y;

        }

       

        num_rows++;

    }

   

    // Print the product of the negative values of the function

    if (product_of_negatives != 1.0) {

        cout << "The product of the negative values of the function is: " << product_of_negatives << endl;

    } else {

        cout << "There are no negative values of the function." << endl;

    }

   

    // Print the number of rows in the table

    cout << "Number of rows in the table: " << num_rows << endl;

   

    return 0;

}

 

დავალება 2

შეადგინეთ პროგრამა c++, მოცემულთა კვადრატული მატრიცა B[5x5]

შეადგინეთ პროგრამა, რომელიც ცალ-ცალკე გამოტვლის მატრიცის არამთავარი დიაგონალის ზემოთ და ქვემოტ განლაგებული ელემენტების ნამრავლებს, მიღებულ შედეგებს ერთმანეთს შეადარებს და დაბეჭდავს მატრიცას და ყველა ეტაპის შედეგს.

 

#include <iostream>

 

using namespace std;

 

const int N = 5;

 

int main() {

    int B[N][N] = {{1, 2, 3, 4, 5},

                   {6, 7, 8, 9, 10},

                   {11, 12, 13, 14, 15},

                   {16, 17, 18, 19, 20},

                   {21, 22, 23, 24, 25}};

    int product_above_diagonal = 1;

    int product_below_diagonal = 1;

 

    // Print the matrix and calculate the products

    cout << "Matrix B:\n";

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            cout << B[i][j] << "\t";

            if (i < j) {

                product_above_diagonal *= B[i][j];

            } else if (i > j) {

                product_below_diagonal *= B[i][j];

            }

        }

        cout << endl;

    }

 

    // Print the products of the elements above and below the diagonal

    cout << "Product of elements above the diagonal: " << product_above_diagonal << endl;

    cout << "Product of elements below the diagonal: " << product_below_diagonal << endl;

 

    // Compare the products and print the result

    if (product_above_diagonal > product_below_diagonal) {

        cout << "The product of elements above the diagonal is greater." << endl;

    } else if (product_above_diagonal < product_below_diagonal) {

        cout << "The product of elements below the diagonal is greater." << endl;

    } else {

        cout << "The products of elements above and below the diagonal are equal." << endl;

    }

 

    return 0;

}

 

ღია კითხვა 2  ??

რა დაიბეწდება ეკრანზე პროგრამის შესულეის მერე

 

int main()[

int x=1;

y=2;

x

if(x==1)

if(y==2)

 

ღია კითხვა 2  ??

რა დაიბეწდება ეკრანზე პროგრამის შესულეის მერე

int main()

int k ;

int a[] =[-2,2,7,-4,-7,1,2];

k = 52%7;

switch(a[k])

(

case -2;cout<<1<<endl;break;

case 2;cout<<2<<endl;break;

case 7;cout<<3<<endl;break;

case -4;cout<<4<<endl;break;

case -7;cout<<5<<endl;break;

case 1;cout<<6<<endl;break;

case 3; cout<<7<<endl;break;

default: cout<<8<<endl;

;

 

swori

#include <iostream>

 

using namespace std;

 

int main() {

    int k;

    int a[] = {-2, 2, 7, -4, -7, 1, 2};

    k = 52 % 7;

    switch (a[k]) {

        case -2:

            cout << 1 << endl;

            break;

        case 2:

            cout << 2 << endl;

            break;

        case 7:

            cout << 3 << endl;

            break;

        case -4:

            cout << 4 << endl;

            break;

        case -7:

            cout << 5 << endl;

            break;

        case 1:

            cout << 6 << endl;

            break;

        case 3:

            cout << 7 << endl;

            break;

        default:

            cout << 8 << endl;

            break;

    }

    return 0;

}

answer :4

 

დავალება 1

შეადგინეთ y =cosx/x ფუნქციის მნიშვლებობათა ცხრილის გამოთვლის პროგრამა სადაც X არგუმენტი [-10;25] ინტერვალში h=0,1 ბიჯით იცვლება

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

int main() {

    const double h = 0.1;

    double x, y;

 

    for (x = -10.0; x <= 25.0; x += h) {

        if (x == 0.0) {

            cout << "Division by zero error!" << endl;

            continue;

        }

        y = cos(x) / x;

        cout << "x = " << x << ", y = " << y << endl;

    }

 

    return 0;

}

 

დავალება 2

მოცემულია კვადრატული მატრიცა m[5x5] შეადგინეთ პროგრამა რომელიც გამოთვლის მატრიცის იმ ელემენტების ნამრავლსა და საშუალო არითმეტიკულს რომელთაც გააჩნიათ ლუწი მნიშვნელობის მქონე სტრიქონის ინდექსის ნომრები და კენტი მნიშვნელოვის მქონე სვეტის ინდექსის ნომრევი

 

#include <iostream>

using namespace std;

 

int main() {

    int m[5][5] = {{1, 2, 3, 4, 5},

                   {6, 7, 8, 9, 10},

                   {11, 12, 13, 14, 15},

                   {16, 17, 18, 19, 20},

                   {21, 22, 23, 24, 25}};

    int product = 1;

    int count = 0;

    int sum = 0;

 

    for (int i = 0; i < 5; i += 2) {

        for (int j = 1; j < 5; j += 2) {

            if (m[i][j] % 2 == 0) {

                product *= m[i][j];

                sum += m[i][j];

                count++;

            }

        }

    }

 

    double mean = (double) sum / count;

    cout << "Product: " << product << endl;

    cout << "Mean: " << mean << endl;

 

    return 0;

}

 

დავალეაბა 1

შეადგინეთ პროგრამა c++ რომელიც გამოიტვლის გამოსახულებათა შემდეგი სისტემსი მნიშვნეწლობას

 

y = sin(2-x)+1/sqrte^4-x

სადაც x=2; a=2,8, b=4,2, c=8,a=1

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

int main() {

    double x = 2, a = 2.8, b = 4.2, c = 8, d = 1;

    double y = sin(2 - x) + 1 / sqrt(exp(4 - x));

 

    cout << "y = " << y << endl;

 

    return 0;

}

 

დავალება 1

z = { ax^3-2, თუ y<1;

ax^2+bx+c თუ y=1

c; if y==1

2x-3}

 

#include <iostream>

#include <cmath>

 

using namespace std;

 

double z(double x, double y, double a, double b, double c) {

    double result;

    if (y < 1) {

        result = a * pow(x, 3) - 2;

    } else if (y == 1) {

        result = a * pow(x, 2) + b * x + c;

    } else {

        result = 2 * x - 3;

    }

    return result;

}

 

int main() {

    double x = 2, y = 1, a = 1, b = 2, c = -3;

    double result = z(x, y, a, b, c);

    cout << "z(" << x << ", " << y << ", " << a << ", " << b << ", " << c << ") = " << result << endl;

    return 0;

}

 

 

ტესტები 18

რა გამოვა ეკრანზე

 

char x; int n=0;

for (x='A'; x<='R'; x++)[

cout<<x<<" ";

n++;

if(n%5==0) cout<<endl;

]

cout<<endl;

 

ese gadava c++ shi

 

#include <iostream>

 

using namespace std;

 

int main() {

    char x;

    int n = 0;

    for (x = 'A'; x <= 'R'; x++) {

        cout << x << " ";

        n++;

        if (n % 5 == 0) {

            cout << endl;

        }

    }

    cout << endl;

    return 0;

}

 

 

answer :

 A B C D E

F G H I J

K L M N O

P Q R

 

ტესტი 19

int i:

for (i=1; I< 50; i++)[

if(i%7 !=0) continue;

cout<<i

c ++

#include <iostream>

 

using namespace std;

 

int main() {

    int i;

    for (i = 1; i < 50; i++) {

        if (i % 7 != 0) {

            continue;

        }

        cout << i << " ";

    }

    cout << endl;

    return 0;

}

 

answr :7 14 21 28 35 42 49

 

ტესტი 20

int k ;

for (k=5; 1; k++)[

if(k%2 ==0) continue;

cout<<"k="<<k;

if(k==9)break;

]

 

c++

#include <iostream>

 

using namespace std;

 

int main() {

    int k;

    for (k = 5; 1; k++) {

        if (k % 2 == 0) {

            continue;

        }

        cout << "k=" << k;

        if (k == 9) {

            break;

        }

    }

    cout << endl;

    return 0;

}

 

answer :#include <iostream>

 

using namespace std;

 

int main() {

    int k;

    for (k = 5; 1; k++) {

        if (k % 2 == 0) {

            continue;

        }

        cout << "k=" << k;

        if (k == 9) {

            break;

        }

    }

    cout << endl;

    return 0;

}

 

 

ტესტი 24

რომელი ფრაგმენტები არ დაითვლის ლუწი რიცხვების ჯამს 2 და ნ 100 მდე

 

#include <iostream>

using namespace std;

ა)

int main() {

    int s = 0;

    for (int n=1; n<=100; s+=n, n+=2)

s+=n

 

answer ა;

 

ტესტი 25

რა არის კომენტარი