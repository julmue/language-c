volatile int x, x1, y, y2, z, z1;

int main(int argc, char **argv)
{
  x1 = __builtin_bswap16(x);
  y2 = __builtin_bswap32(y);
  z1 = __builtin_bswap64(z);
}
