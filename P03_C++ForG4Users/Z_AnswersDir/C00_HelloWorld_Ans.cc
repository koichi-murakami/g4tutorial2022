//******************************************************************************
// Introduction to C++ for Geant4 Users: Hello World
//******************************************************************************

//------------------------------------------------------------------------------
// [演習] 
//   次のプログラムは、スライドで示した'Hello World'と同じである：
//
//     #include <iostream>
// 
//     int main()
//     {
//       std::cout << "Hello, world!" 
//                 << std::endl;
//       return 0;
//     }
//
//   このプログラムでは'cout', 'endl'などを使うとき、名前衝突を避けるため明示的に
//   名前空間 'std::'を指定している。しかし、名前衝突の恐れがない時には、以下の宣言文を
//   用いて名前空間指定を省略でき、プログラムが簡潔となる。
//           
//      using namespace std;
// 
//   (演習実行手順)
//     下のプログラムのコメント部分に書かれた[問]に対して、答えを入力してプログラムを完成
//     させて実行せよ。
//------------------------------------------------------------------------------

#include <iostream>

int main()
{
  using namespace std;       // [問] ?...?部分を上で述べた宣言文で上書きせよ

  cout << "Hello, world!" << endl;
  return 0;
}

//------------------------------------------------------------------------------
// [重要コメント] 
//   - この宣言を使うと、プログラム内に標準ライブラリで定義されているモジュールのすべての
//     名前が導入されるので、自分が独自に定義した名前と衝突の可能性が生じ非常に危険
//   - 名前衝突の可能性がないことが、確信される場合以外は決して使わない
//   - このhands-onでは課題プログラムの可読性を考慮して、この宣言をあえて使っている
//   - この宣言は決して関数の外で使ってはいけない
//------------------------------------------------------------------------------
   
