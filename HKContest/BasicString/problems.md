# Bài tập xâu cơ bản

## Bài 1: Đếm từ

Cho xâu $S$ tối đa $255$ ký tự gồm các chữ cái, chữ số và dấu cách. Hãy đếm xem xâu $S$ có bao nhiêu từ (một từ là một hoặc nhiều kí tự viết liền nhau).

### Giới hạn:

$0 \le |S| \le 256$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa số từ đếm được.

### Sample Input 

    Bai nay ez

### Sample Output 

    3
    

## Bài 2: Tính tổng

Cho xâu $S$ tối đa $255$ ký tự gồm các chữ cái, chữ số và dấu cách. Hãy tính tổng các số trong xâu $S$ (một số được tạo bởi một hoặc nhiều kí tự số viết liền nhau).

### Giới hạn:

$0 \le |S| < 256$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa tổng đã tính được.

### Sample Input 1

    1a2b3c

### Sample Output 1

    6

### Sample Input 2

    10x5=50

### Sample Output 2

    65
    

## Bài 3: Thập lục phân - Thập phân

Cho xâu $S$ tối đa $15$ kí tự biểu diễn một số trong hệ đếm cơ số $16$. Hãy đổi $S$ từ hệ đếm cơ số $16$ sang hệ đếm thập phân.

### Giới hạn:

$0 \le |S| < 16$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa số trong hệ thập phân đã đổi được.

### Sample Input 1:

    1A

### Sample Output 1:

    26

### Sample Input 2:

    FFF

### Sample Output 2:

    4095


## Bài 4: Chuẩn hóa tên

Cho xâu $S$ là họ và tên người Việt không dấu tối đa $50$ kí tự chữ cái và dấu cách. Hãy chuẩn hóa xâu họ và tên trên: Xóa dấu cách thừa nếu có; kí tự đầu mỗi từ viết in hoa, các kí tự còn lại viết in thường.

### Giới hạn:

$0 \le |S| < 50$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa xâu $S$ đã chuẩn hóa.

### Sample Input 1

    NGUYEN van a

### Sample Output 1

    Nguyen Van A

### Sample Input 2

    nGo Ba         KhA

### Sample Output 2

    Ngo Ba Kha
    

## Bài 5: Tách tên

Cho xâu $S$ là họ và tên người Việt tối đa $50$ kí tự chữ cái và dấu cách đã được chuẩn hóa. Hãy viết họ, đệm và tên mỗi loại trên một dòng.

### Giới hạn:

$0 \le |S| < 50$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Gồm $3$ dòng: dòng thứ nhất chứa họ, dòng thứ hai chứa đệm và dòng thứ ba chứa tên.

### Sample Input 1

    Nguyen Van A

### Sample Output 1

    Nguyen
    Van
    A

### Sample Input 2

    Nguyen Thi B C

### Sample Output 2

    Nguyen
    Thi B
    C

## Bài 6: Nhị phân - Bát phân

Cho xâu $S$ tối đa $200$ kí tự biểu diễn một số trong hệ đếm nhị phân (cơ số $2$). Hãy đổi $S$ từ hệ đếm nhị phân sang hệ đếm cơ số $8$.

### Giới hạn:

$0 \le |S| \le 200$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa số trong hệ đếm cơ số $8$ đã đổi được.

### Sample Input 1:

    101101
    
### Sample Output 1:

    55
    
### Sample Input 2:

    1000101
    
### Sample Output 2:

    105
   

## Bài 7: Kí tự khác nhau

Cho xâu $S$ tối đa $255$ ký tự gồm các chữ cái, chữ số và dấu cách. Hãy đếm xem xâu $S$ có bao kí tự chữ cái, chữ số khác nhau (chữ cái in thường, in hoa là một).

### Giới hạn:

$0 \le |S| < 256$.

### Input:

Một dòng duy nhất chứa xâu $S$.

### Output:

Số lượng chữ cái, chữ số khác nhau trong $S$.

### Sample Input 1

    Day la 1 test mau
    
### Sample Output 1

    10

### Sample Input 2

    hahaha

### Sample Output 2

    2

## Bài 8: Đối xứng

Cho xâu $S$ tối đa $255$ ký tự gồm các chữ cái, chữ số và dấu cách. Hãy kiểm tra xâu $S$ có là xâu đối xứng hay không?

### Giới hạn:

$0 \le |S| < 256$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Nếu xâu $S$ đối xứng ghi số $1$, còn ngược lại ghi số $0$.

### Sample Input 1

    wordle

### Sample Output 1

    0

### Sample Input 2

    nolemonnomelon

### Sample Output 2

    1


## Bài 9: Mười sáu - Nhị phân

Cho xâu $S$ tối đa $50$ kí tự biểu diễn một số trong hệ đếm cơ số $16$. Hãy đổi $S$ từ hệ đếm cơ số $16$ sang hệ đếm nhị phân.

### Giới hạn:

$0\le|S|\le50$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa số trong hệ nhị phân đã đổi được.

### Sample Input 1

    F

### Sample Output 1

    1111

### Sample Input 2

    FFF

### Sample Output 2

    111111111111

## Bài 10: Đếm xâu

Cho hai xâu $S_1$ và $S_2$ tối đa $255$ kí tự chữ cái. Hãy đếm số lần $S_1$ có trong $S_2$ và chỉ ra các vị trí nếu có.

### Giới hạn:

$0\le|S_1|, |S_2|<256$

### Input: 

Dòng thứ nhất chứa xâu $S_1$, dòng thứ hai chứa xâu $S_2$.

### Output: 

Nếu có $S_1$ trong $S_2$ thì dòng thứ nhất chứa số lần $S_1$ có trong $S_2$; dòng thứ hai là các vị trí bắt đầu của $S_1$ có trong $S_2$. Nếu không có $S_1$ có trong $S_2$ ghi số $0$;

### Sample Input 1

    a
    aaaa

### Sample Output 1

    4
    1 2 3 4

### Sample Input 2

    codedi
    codedicodedicodedi
    
### Sample Output 2

    3
    1 7 13

## Bài 11: Xâu ghép

Cho xâu $S$ tối đa $255$ ký tự gồm các chữ cái, chữ số và dấu cách. Hãy kiểm tra $S$ xem có là ghép của một số lần lớn hơn $1$ của một xâu $X$ nào đó không, nếu là ghép của một số lần xâu $X$ thì đưa ra xâu $X$ dài nhất có thể.

### Giới hạn:

$0\le|S|<256$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa xâu $X$ dài nhất ghép thành xâu $S$, nếu không có xâu $X$ ghi số $0$.

### Sample Input 1

    Day la 1 test
    
### Sample Output 1

    0
    
### Sample Input 2

    ACACACAC
    
### Sample Output 2

    ACAC


## Bài 12: Nhị phân - Mười sáu

Cho xâu $S$ độ dài tối đa $200$ kí tự biểu diễn một số trong hệ đếm nhị phân. Hãy đổi $S$ từ hệ đếm nhị phân sang hệ đếm cơ số $16$.

### Giới hạn:

$0<|S|\le200$.

### Input: 

Một dòng duy nhất chứa xâu $S$.

### Output: 

Một dòng duy nhất chứa số trong hệ đếm cơ số $16$ đã đổi được.

### Sample Input 1

    1010101

### Sample Output 1

    55
    
### Sample Input 2

    1101010
    
### Sample Output 2

    6A

