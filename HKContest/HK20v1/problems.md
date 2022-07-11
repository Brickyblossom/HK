# HSG HOÀN KIẾM 2020 vòng 1

## BÀI 1 (PRIME.CPP | PRIME.INP | PRIME.OUT)
Thầy Đăng vừa đọc được một bài toán thú vị: Có tồn tại hay không một số gồm toàn số $1$ chia hết cho một số nguyên tố $p$ nào đó.

Thầy liền nghĩ ra và đố bạn một bài toán khác: Liệu có tồn tại hay không một số gồm toàn số $k$ chia hết cho số nguyên tố $p$? Nếu có, hãy chỉ ra số bé nhất thỏa mãn.

### Input:
Một dòng gồm hai số nguyên $k$ và số nguyên tố $p$. $(1 \le k \le 9$, $7 \le p \le 10^5$, đàm bảo $p$ là số nguyên tố$)$.

### Output: 
Một số tự nhiên thỏa mãn đề bài. Nếu không tồn tại số thỏa mãn, hãy in ra $-1$.

### Sample Input
    2 7

### Sample Output
    222222


## BÀI 2 (HATE.CPP | HATE.INP | HATE.OUT)
Tập hợp các số yêu thích của anh Duke được biểu diễn bằng mảng $A$ gồm $n$ số tự nhiên khác nhau. Anh Duke ghét tất cả các số không thể biểu diễn bằng tổng các số trong mảng $A$ với mỗi số trong mảng không được sử dụng hơn một lần. Anh Zuy muốn tìm số nguyên dương bé nhất mà anh Duke ghét để trêu anh ấy.
Hãy giúp anh Zuy.

### Input:
- Dòng đầu tiên gồm số tự nhiên $n$ $(1 \le n \le 10)$.
- Dòng thứ hai gồm $n$ số tự nhiên $A_i$, phân biệt bởi dấu cách, tượng trưng cho mảng $A$ $(1 \le A_i \le 10^5)$.
Đảm bảo đáp án của tất cả các test bé hơn $10^{18}$ (trong trường hợp có đáp án).

### Output:
Một số là kết quả bài toán. Nếu không có số nào thỏa mãn thì in ra $-1$.

### Sample Input
    4
    2 5 6 1000
    
### Sample Output
    1


## BÀI 3 (REMAIN.CPP | REMAIN.INP | REMAIN.OUT)
Anh Duke được thầy Đăng tặng một dãy nhị phân biểu diễn một số tự nhiên $X$ nào đó. Hết ghét các số không thể biểu diễn được bằng tổng các số mà anh ấy thích, anh Duke chuyển sang hận thù tất cả các số bé hơn $16$, nên anh Zuy muốn bạn in ở dạng thập phân số dư của $X$ khi chia cho $17$.
In ra số bạn có được sau khi thực hiện yêu cầu của anh Zuy. Biết mã nhị phân biểu diễn số $17$ là $10001$.

### Input:
Một dòng, là một mã nhị phân $($chỉ chứa $0$ hoặc $1$; gọi chiều dài mã nhị phân cho trước là $n$: $1 \le n \le 10^6)$

### Output:
Một số là đáp án bài toán.

### Sample Input
    11100
    
### Sample Output
    11

## BÀI 3 (COMPRESS.CPP | COMPRESS.INP | COMPRESS.OUT)
Thầy Đăng vừa mới mua máy tính mới cho phòng tin. Nhưng vì mua phải máy tính rởm nên bị giới hạn bộ nhớ của mỗi mảng cần lưu. Chính vì vậy thầy cần nén mảng.
Có một mảng các số thực, thầy muốn nén mảng này thành một mảng các số nguyên dương sao cho mảng vẫn đảm bảo thứ tự lớn bé, đồng thời số lớn nhất trong mảng mới là nhỏ nhất.
Vì thầy cần lưu thứ tự điểm của các thí sinh một cách nhanh nhất nên bạn hãy giúp thầy nén mảng.

### Input: 
- Dòng đầu là số tự nhiên $n$ $(1 \le n \le 10^5)$, số phần tử của mảng.
- Dòng sau là $n$ số thực là các phần tử $a_i$ của mảng. $(-10^9 \le a_i \le 10^9)$

### Output:
In ra ~n~ số là mảng sau khi nén.

### Sample Input
    5
    1 -1 4 2 8

### Sample Output
    2 1 4 3 5






