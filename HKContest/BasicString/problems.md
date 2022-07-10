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
   
  
