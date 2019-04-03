

// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int64_t N, A, B, C, ans = INT_MAX;
vector<int> l;
void solve(int i, int a, int b, int c, int MP)
{
    if (i == N)
        if (a == A || b == B || c == C)
            return;
        else
        {
            ans = min((long long)ans, (ll)(abs(a) + abs(b) + abs(c) + MP));
            return;
        }
    solve(i + 1, a - l[i], b, c, MP + (a == A ? 0 : 10));
    solve(i + 1, a, b - l[i], c, MP + (b == B ? 0 : 10));
    solve(i + 1, a, b, c - l[i], MP + (c == C ? 0 : 10));
    solve(i + 1, a, b, c, MP);
}
int main()
{
    cin >> N >> A >> B >> C;
    getchar();
    for (int i = 0; i < N; i++)
    {
        int64_t to_push_back;
        cin >> to_push_back;
        getchar();
        l.push_back(to_push_back);
    }
    solve(0, A, B, C, 0);
    cout << ans;
    puts("");
    return 0;
}

// // #include <bits/stdc++.h>
// // using namespace std;
// // typedef long long ll;
// // #define INF 10e17 // 4倍しても(4回足しても)long longを溢れない
// // #define rep(i,n) for(int i=0; i<n; i++)
// // #define sorti(x) sort(x.begin(), x.end())

// // int main() {
// //   int n,c,b,a;
// //   cin >> n >> a >> b >> c;

// //   // 1つの竹を作るのに使用できる最大数
// //   int use = n - 2;

// //   vector<ll> l(n);
// //   rep(i,n) {
// //     cin >> l[i];
// //   }

// //   ll ans = INF;

// //   // next_permutaionを使用するには対象のコンテナを昇順にソートしておく必要がある。
// //   sorti(l);
// //   do {
// //     int limitb, limitc;

// //     // 左からAに割り当てる竹を [1, N-2] の間で選ぶ
// //     for (int i = 0; i < use; ++i) {
// //       ll tmpa = 0, tmp = 0;
// //       ll a1 = l[0];

// //       // 2本以上あるときは合成魔法を使用するので cost += 10
// //       for (int t = 1; t <= i; ++t) {
// //         a1 += l[t];
// //         tmpa += 10;
// //       }

// //       // 延長 or 短縮魔法のコスト計算
// //       tmpa += abs(a - a1);

// //       // Bに使用できる竹の最大値計算
// //       limitb = (n - (i+1) == 2) ? 1 : (n - (i+1) - 1);
// //       for (int j = i + 1; j <= i + limitb; ++j) {
// //         ll b1 = l[i+1], tmpb = 0;
// //         for (int t = i+2; t <= j; ++t) {
// //           b1 += l[t];
// //           tmpb += 10;
// //         }

// //         tmpb += abs(b - b1);

// //         // Cに使用できる竹の最大値計算
// //         limitc = (n - (j + 1) == 1) ? 1 : n - (j + 1);
// //         for (int k = j+1; k <= j + limitc; ++k) {
// //           ll c1 = l[j+1], tmpc = 0;
// //           for (int t = j+2; t <= k; ++t) {
// //             c1 += l[t];
// //             tmpc += 10;
// //           }

// //           tmpc += abs(c - c1);

// //           // 小さかったら更新
// //           ans = min(ans,tmpa + tmpb + tmpc);
// //         }
// //       }
// //     }
// //   } while (next_permutation(l.begin(), l.end()));

// //   cout << ans << endl;
// // }

// 用D语言进行竞争
// 2019 - 02 - 25
// C-Synthetic Kadomatsu
// ABC119  ABC  全搜索 solve  四元 位全搜索

// atcoder.jp

// 就个人而言，我认为这个问题在过去很难与ABC-C竞争。简而言之，“我只是探索整个事情”，但我觉得整个搜索的方式是独特的，或者它需要一些意识。

// 其中一个问题是“即使扩展，缩短和组合操作的顺序自由改变，最终状态和总成本也不会改变”。很明显，延伸和缩短的操作可以互换，也可以“延伸竹X后与竹Y结合”，也可以作为“合成竹X和Y后延伸竹子”的延伸和组成我知道我说它是一样的。缩短和合成也是如此。

// 有时会说“操作是可交换的”，“操作的顺序可以随意改变”。在竞争专业人士中，经常存在一个问题，即操作是针对某些事情（一系列数字，图形等）重复的，但“给定的操作是否可交换？” 。

// 延伸，缩短和构图中最复杂的操作是构图。事实证明，我认为操作是可交换的，并且思考“首先进行所有合成，扩展和缩短剩余的竹子以制作A，B，C”。（当然我认为有一种方法可以将复杂的操作放在最后，并且可能存在使问题更容易思考的问题。......这是临时性的，所以至少这次是在综合之前我认为如果你尝试做一些类似工作的事情会更容易）

// 所以我会先考虑作文。组合的顺序也是无关紧要的，因此通过用以下操作替换它可能更容易理解。

// 合成：选择一个或多个竹子并制作竹子，并将它们全部连接起来。如果这个成本选择k bambo，它将是10 （k - 1 ）
// 这样，可以理解，“合成竹子”可以用单一合成代替，因此不必考虑合成合成竹子。（请注意，只选择一种竹子作为合成竹子）

// 下一个重点是“显然不使用合成竹子是一种损失”。在这里，“不使用合成竹子”意味着你不要为你想要的A，B，C分配。这也是显而易见的，如果你决定不使用它，如果你不使用它，它显然会更便宜。

// 从这些考虑因素来看，所有竹子都应被视为一种综合方法

// 用于A的合成
// 用于B的组合物中
// 用于C的合成
// 什么都不做
// 事实证明，考虑所有四种情况就足够了。

// 这是我考虑构图的原因。在那之后，

// （用于A的竹子长度和A长度的绝对值之和）+（用于B的竹子长度和B长度的绝对值之和）+（C竹子长度的总和（C长度的绝对值）

// 显然是延长和缩短的最低成本。

// 最后，考虑计算量。

// 每种竹子有4种选择，所以如果你尝试所有的情况4ñ这是街道。虽然指数时间通常已被认为是慢，它是这个时间和壳体Ñ ≤ 8因为它很小，即使在最大的情况下48= 216= 65536事实证明它可以计算得足够多。

// 我想有很多人可以理解你到目前为止是否理解“ 4ñ你怎么做一整个搜索 我想有很多人。有三种方法可以做到这一点

// 深度优先搜索（solve）
// 全部以四元符号搜索
// 比特去搜索（二分搜索）
// 是的 我按照推荐顺序订购了它。

// 深度优先搜索
// 我认为最直接的是这个solve解决方案。该应用程序不仅在这样的每个点的分支如k的情况下有效，而且在执行更复杂的分支的情况下也是有效的。正如chokudai先生在广播中所说，它应该能够自由写作，因为它是如此多才多艺。

// 部分代码如下所示：

// // idx是你现在看到的竹子的数量，gc是到目前为止使用的竹子的数量
// int solve（int idx，int la，int lb，int lc，int gc）{
//      if（idx == n）{
//          if（la == 0 || lb == 0 || lc == 0）{
//              //当没有用于A，B，C复合竹子的竹子时，这不是一个有效答案
//             //在这种情况下返回足够大的值，以便答案不会影响
//             返回 inf3;
//         }
//         否则 {
//              返回 abs（la-a）+ abs（lb-b）+ abs（lc-c）+ 10 *（gc- 3）;
//         }
//     }
//     int res = inf3;
//      //如果idx th bamboo用于合成A
//     res = min（res，solve（idx + 1，la + l [idx]，lb，lc，gc + 1））;
//      / /如果idx th bamboo用于合成B
//     res = min（res，solve（id x + 1，la，lb + l [id x]，lc，g c + 1））;
//      // id x th bamboo当用于合成C
//     res = min（res，solve（idx + 1，la，lb，lc + l [idx]，gc + 1））;
//      //如果idx th bamboo未使用
//     res = min （res，solve（idx + 1，la，lb，lc，gc））;
//      return res;
// }
// 全部以四元符号搜索
// 接下来是四元表示法的完整搜索。这有点技术性的印象，但只是通过转动for循环而不编写像solve这样的函数来快速编写是一个点吗？如果您知道位完全搜索，您会发现很容易想出这个解决方案。

// 以下代码与（0->未使用，1->用于A，2->用于B，3->用于C）相关联。其他部分与solve的解决方案相同。

// int ans = inf3;

// foreach（s; 0 .. 4 ^ ^ n）{
//      int la，lb，lc;
//      int gc;

//     foreach（i; 0 .. n）{
//          if（s％4 == 1）{
//             la + = l [i];
//             gc ++
//         }
//         否则 if（s％4 == 2）{
//             lb + = l [i];
//             gc ++
//         }
//         否则 if（s％4 == 3）{
//             lc + = l [i];
//             gc ++;
//         }
//         s / = 4 ;
//     }

//     if（la == 0 || lb == 0 || lc == 0）继续 ;
//     ans = min（ans，abs（la-a）+ abs（lb-b）+ abs（lc-c）+ 10 *（gc- 3））;
// }
// 通过比特全搜索操纵
// 这是一个不能被强烈推荐的解决方案，因为与上述两者相比，它既不聪明也不自然。不过，我写了为什么这是我在比赛期间写的方式......

// 我不太说话，所以我希望你能得到这种氛围。23 n这需要很长时间，是不是很糟糕？我想我的，其实，这是因为考虑周全和S，T，每一位代表u的数量也最多只有一个4ñ这是一个适合（也许）的人

// （19.01.02.26后记）我以为是4ñ请随意使用它，因为它是你适合的谎言

// long ans = inf6;

// foreach（s; 1 .. 1 << n）{
//      long tmp;

//     int la;
//      foreach（j; 0 .. n）{
//          if（s＆（1 << j））{
//             la + = l [j];
//             tmp + = 10 ;
//         }
//     }
//     tmp- = 10 ;

//     foreach（t; 1 .. 1 << n）{
//          auto ttmp = tmp;
//          int lb;
//          if（s＆t）continue ;
//          foreach（k; 0 .. n）{
//              if（t＆（1 << k）） {
//                 lb + = l [k];
//                 ttmp + = 10 ;
//             }
//         }
//         ttmp- = 10 ;

//         foreach（u; 1 ... 1 << n）{
//              if（（s | t）＆u）continue ;
//              auto tttmp = ttmp;
//              int lc;
//              foreach（e; 0 .. n）{
//                  if（u＆（1 < <e））{
//                     lc + = l [e];
//                     tttmp + = 10 ;
//                 }
//             }
//             tttmp- = 10 ;
//             tttmp + = abs（la-a）+ abs（lb-b）+ abs（lc-c）;
//             ans = min（ans，tttmp）;
//         }
//     }
// }
// 最后
// 分かっているように書きましたが、実際コンテスト中は難しすぎてテンパってしまい、いろいろと最悪でした。一番下のコードになった理由も「合成する竹としない竹で分ければいいのか」→「いや、A,B,Cの3つに分ければいいのか」→「いや、使わなくていい竹もあるんじゃん」となってネストがどんどん深くなってしまったからです（しかも計算量は何となく大丈夫でしょみたいな感じで本当に適当だった）

// いろいろと反省すべき点が多いコンテストでした。ABC-Cでも難しく感じたら焦らずに、考察はじっくりやらないとダメですね。

// nanae1914 28日前

// Add StarKoyanagiHitoshi

//  Tweet

// 関連記事
// 2018-01-25
// ABC056/D - No Need
// https://beta.atcoder.jp/contests/abc056/tasks/arc070_b 考察…
// 2017-08-08
// Educational Codeforces Round 26
// 久しぶりにブログを書きます。 ４完でした。D問題のDPを通せた…
// 2017-06-18
// Educational Codeforces Round 23
// 参加しました、３完でした。Cはもうちょっと早く解けたかったな…
// 2017-05-02
// GCJ Qual.2017 - B
// GCJのRound1が全て終わりました。私はR1B, R1Cに参加しましたが…
// 2017-04-13
// GCJ Qual.2017 - A
// Google Code Jam Qualification Round 2017 に参加しました。 …
// No.794 チーム戦 »
// プロフィール
//  id:nanae1914
// id:nanae1914
// 読者になる 5
// 検索
// 記事を検索
// 最新記事
// C - Synthetic Kadomatsu
// No.794 チーム戦
// 競技プログラミング初めて2年経ちました
// D - Various Sushi
// 競プロでやりがちなミス集
// カテゴリー
// 4進数 (1)
// bit全探索 (1)
// 全探索 (1)
// ABC119 (1)
// ABC (3)
// solve (1)
// 数え上げ (1)
// yukicoder (8)
// 競プロ (2)
// その他 (7)
// 貪欲 (1)
// tips (1)
// 平方分割 (1)
// クエリ (1)
// 累積和 (1)
// 数学 (2)
// 包除原理 (1)
// Atcoder (14)
// LIS (1)
// codeforces (17)
// Google Code Jam (2)
// オンサイト (1)
// RCO_procon (1)
// 马拉松（2）
// MUJIN编程竞赛（1）
// chokudai比赛（1）
// ARC（2）
// 算法（1）
// bitDP（1）
// AGC（2）
// NJPC（1）
// 每月存档
// ▼ 2019（4）
// 2019/2（2）
// 2019/1（2）
// ▶ 2018年（9）
// ▶ 2017（39）
// 让我们开始Hatena博客吧！
// nanae1914在Hatena上使用博客。你想开一个博客吗？

// 启动Hatena博客（免费）
// 随着Hatena博客
//  D言語で競プロ 用D语言进行竞争
// 由Hatena博客提供支持 | 举报博客
