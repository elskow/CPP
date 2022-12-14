// Deskripsi Masalah
//     Di pagi hari yang cerah,
//     Joni Yespapa bersiap untuk mengikuti lomba agustusan
//             di desanya.Ketika Joni hendak keluar rumah tiba -
//         tiba dia menemukan kardus
//             di depan pintu rumahnya yang berisi π integer π1,
//     π2, β¦ ππdan sebuah
//                 integer π.Joni baru ingat itu adalah tugas dari Professor Drake untuk mencari
//                     nilai maksimal dari π.π β π.(ππ | ππ) dari semua pasangan(π, π) dimana 1 β€ π < π β€ π.Disini,
//     tanda | adalah operator bitwise OR.Supaya Joni bisa tetap
//             bisa mengikuti lomba agustusan,
//     dia harus segera menyelesaikan tugas dari
//     Professor yang deadlinennya harusnya selesai semalam.Bantu dia agar bisa
//     tetep bergabung dengan keseruan lomba agustusan !
// Format Masukan
// Baris pertama adalah t β jumlah test case.
// Baris pertama dari setiap test case berisi 2 integer π dan π.
// Baris kedua dari setiap test case berisi π integer a1, a2, β¦ , an.
// Batasan Masukan
// β’ (1 β€ π‘ β€ 10000)
// β’ (2 β€ π β€ 105
// )
// β’ (1 β€ π β€ πππ(π, 100))
// β’ (0 β€ ππ β€ π)
// Format keluaran
// Setiap test case, print satu integer β nilai maksimal yang mungkin dari i β j β
// k β (ai
// |aj

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastio();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        ll maks = 0;
        for (ll j = 0; j < n; j++)
        {
            for (ll l = j + 1; l < n; l++)
            {
                maks = max(maks, (j + 1) * (l + 1) - k * (a[j] | a[l]));

                cout << i << " " << j << " " << k << " " << a[j] << " " << a[l] << " " << maks << endl;
            }
        }
        cout << maks << endl;
    }

    return 0;
}