// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;

// struct Mon {
//     string nm;
//     int wr;
//     double pr;
// };

// int main() {
//     int k;
//     cout << "Kilkist mon: ";
//     if(!(cin >> k) || k <= 0) return 0;
//     vector<Mon> a;
//     a.reserve(k);
//     for (int i=0;i<k;++i){
//         Mon t;
//         cout << "Mon " << i+1 << " - naymen: ";
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         getline(cin, t.nm);
//         cout << "Term gar (mis): ";
//         cin >> t.wr;
//         cout << "Tsina: ";
//         cin >> t.pr;
//         a.push_back(t);
//     }

//     sort(a.begin(), a.end(), [](const Mon& x, const Mon& y){ return x.pr > y.pr; });

//     cout << "\nVidsortovano mon (za spadannyam ceny):\n";
//     for (size_t i=0;i<a.size();++i){
//         cout << i+1 << ". " << a[i].nm
//              << " | Gar: " << a[i].wr << " mis."
//              << " | C: " << a[i].pr << "\n";
//     }
//     return 0;
// }








// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <vector>
// using namespace std;

// struct Det {
//     string eng;
//     string col;
//     int own;
// };

// struct Car {
//     string br;
//     string md;
//     int yr;
//     double pr;
//     bool trg;
//     Det d;
// };

// void inCars(vector<Car>& c);
// void prTable(const vector<Car>& c);

// int main(){
//     vector<Car> cp;
//     inCars(cp);
//     prTable(cp);
//     return 0;
// }

// void inCars(vector<Car>& c){
//     int n;
//     cout << "Kilkist avto: ";
//     if(!(cin >> n) || n<=0) return;
//     c.resize(n);
//     for(int i=0;i<n;++i){
//         cout << "\nAvto " << i+1 << ":\n";
//         cout << "Marka: ";
//         cin >> ws;
//         getline(cin, c[i].br);
//         cout << "Model: ";
//         getline(cin, c[i].md);
//         cout << "Rik vip: ";
//         cin >> c[i].yr;
//         cout << "Tsina: ";
//         cin >> c[i].pr;
//         char ch;
//         cout << "Torg (y/n): ";
//         cin >> ch;
//         c[i].trg = (ch=='y' || ch=='Y');
//         cout << "Dvygun: ";
//         cin >> ws;
//         getline(cin, c[i].d.eng);
//         cout << "Kolir: ";
//         getline(cin, c[i].d.col);
//         cout << "Kilkist vlasn: ";
//         cin >> c[i].d.own;
//     }
// }

// void prTable(const vector<Car>& c){
//     cout << "\nInfo pro avto:\n";
//     cout << left << setw(12) << "Marka"
//          << setw(12) << "Model"
//          << setw(6)  << "Rik"
//          << setw(10) << "Tsina"
//          << setw(6)  << "Torg"
//          << setw(12) << "Dvygun"
//          << setw(10) << "Kolir"
//          << setw(8)  << "Vlasn" << "\n";
//     cout << string(76, '-') << "\n";
//     for(const auto& x : c){
//         cout << left << setw(12) << x.br
//              << setw(12) << x.md
//              << setw(6)  << x.yr
//              << setw(10) << fixed << setprecision(2) << x.pr
//              << setw(6)  << (x.trg ? "tak" : "ni")
//              << setw(12) << x.d.eng
//              << setw(10) << x.d.col
//              << setw(8)  << x.d.own << "\n";
//     }
// }


// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// typedef struct Stud {
//     string fam;
//     char g;
//     double av;
// } Stud;

// int main(){
//     int n;
//     cout << "Kilkist studentiv: ";
//     if(!(cin >> n) || n<=0) return 0;
//     vector<Stud> s;
//     s.reserve(n);
//     for(int i=0;i<n;++i){
//         Stud t;
//         cout << "\nStudent " << i+1 << " - Fam: ";
//         cin >> t.fam;
//         cout << "Stat (M/F): ";
//         cin >> t.g;
//         cout << "Serednii bal: ";
//         cin >> t.av;
//         s.push_back(t);
//     }

//     double sm=0, sf=0;
//     int cm=0, cf=0;
//     for(const auto& x : s){
//         char u = toupper(static_cast<unsigned char>(x.g));
//         if(u=='M'){ sm += x.av; ++cm; }
//         else if(u=='F'){ sf += x.av; ++cf; }
//     }
//     double am = (cm? sm/cm : 0.0);
//     double af = (cf? sf/cf : 0.0);

//     cout << "\nSrednii bal ch: ";
//     if(cm) cout << am << " (" << cm << ")\n"; else cout << "ni danih\n";
//     cout << "Srednii bal d: ";
//     if(cf) cout << af << " (" << cf << ")\n"; else cout << "ni danih\n";

//     if(cm==0 && cf==0) cout << "Ni danih pro studentiv.\n";
//     else if(cm==0) cout << "Vyshchii serednii bal: divchata\n";
//     else if(cf==0) cout << "Vyshchii serednii bal: cholyaki\n";
//     else if(am > af) cout << "Vyshchii pidsumkovii serednii bal: cholyaki\n";
//     else if(af > am) cout << "Vyshchii pidsumkovii serednii bal: divchata\n";
//     else cout << "Pidsumkovi seredni baly odnakovi\n";

//     return 0;
// }
