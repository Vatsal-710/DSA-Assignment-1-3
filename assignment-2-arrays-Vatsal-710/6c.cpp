#include <iostream>
using namespace std;

struct Triplet {
    int r, c, v;
};

int main() {
    Triplet a[100], b[100], c[100];
    int m, n, t1, t2, i, j, k, ch;
    cout << "Enter rows cols nnz for matrix1: ";
    cin >> m >> n >> t1;
    for(i=0;i<t1;i++) cin >> a[i].r >> a[i].c >> a[i].v;

    cout << "1.Transpose 2.Add 3.Mul\nEnter choice: ";
    cin >> ch;

    if(ch==1) {
        for(i=0;i<t1;i++) cout << a[i].c << " " << a[i].r << " " << a[i].v << endl;
    }
    else if(ch==2) {
        cout << "Enter nnz for matrix2: ";
        cin >> t2;
        for(i=0;i<t2;i++) cin >> b[i].r >> b[i].c >> b[i].v;
        i=j=k=0;
        while(i<t1 && j<t2) {
            if(a[i].r<b[j].r || (a[i].r==b[j].r && a[i].c<b[j].c))
                c[k++]=a[i++];
            else if(b[j].r<a[i].r || (a[i].r==b[j].r && b[j].c<a[i].c))
                c[k++]=b[j++];
            else {
                c[k]=a[i];
                c[k++].v+=b[j++].v; i++;
            }
        }
        while(i<t1) c[k++]=a[i++];
        while(j<t2) c[k++]=b[j++];
        for(i=0;i<k;i++) if(c[i].v) cout << c[i].r << " " << c[i].c << " " << c[i].v << endl;
    }
    else if(ch==3) {
        int m2, n2;
        cout << "Enter rows cols nnz for matrix2: ";
        cin >> m2 >> n2 >> t2;
        for(i=0;i<t2;i++) cin >> b[i].r >> b[i].c >> b[i].v;
        k=0;
        for(i=0;i<t1;i++) {
            for(j=0;j<t2;j++) {
                if(a[i].c==b[j].r) {
                    int f=0;
                    for(int x=0;x<k;x++)
                        if(c[x].r==a[i].r && c[x].c==b[j].c) {
                            c[x].v += a[i].v*b[j].v;
                            f=1;
                        }
                    if(!f) {
                        c[k].r=a[i].r;
                        c[k].c=b[j].c;
                        c[k++].v=a[i].v*b[j].v;
                    }
                }
            }
        }
        for(i=0;i<k;i++) if(c[i].v) cout << c[i].r << " " << c[i].c << " " << c[i].v << endl;
    }
    return 0;
}