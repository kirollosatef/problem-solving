#include <bits/stdc++.h>
#define pb push_back
#define sz(v) (v).size()
#define vi vector<int>
#define vs vector<string>
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
typedef long long ll;

const int WIDTH = 80;
const int HEIGHT = 22;

int main()
{
  float A = 0, B = 0;
  float i, j;
  int k;
  float z[HEIGHT][WIDTH];
  char b[HEIGHT][WIDTH];
  printf("\x1b[2J");
  for (;;)
  {
    memset(b, 32, sizeof(b));
    memset(z, 0, sizeof(z));
    for (j = 0; j < 6.28; j += 0.07)
    {
      for (i = 0; i < 6.28; i += 0.02)
      {
        float c = sin(i);
        float d = cos(j);
        float e = sin(A);
        float f = sin(j);
        float g = cos(A);
        float h = d + 2;
        float D = 1 / (c * h * e + f * g + 5);
        float l = cos(i);
        float m = cos(B);
        float n = sin(B);
        float t = c * h * g - f * e;
        int x = 40 + 30 * D * (l * h * m - t * n);
        int y = 12 + 15 * D * (l * h * n + t * m);
        int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
        if (y >= 0 && y < HEIGHT && x >= 0 && x < WIDTH && D > z[y][x])
        {
          z[y][x] = D;
          b[y][x] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
        }
      }
    }
    printf("\x1b[H");
    for (int y = 0; y < HEIGHT; y++)
    {
      for (int x = 0; x < WIDTH; x++)
      {
        putchar(b[y][x]);
      }
      putchar('\n');
    }
    A += 0.04;
    B += 0.02;
    usleep(30000);  // Add a small delay to control the animation speed
  }
  return 0;
}