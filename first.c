int main()
{
    *(unsigned int*)0x04000000 = 0x0403;

    ((unsigned short*)0x06000000)[120+80*240] = 0x001F;
    ((unsigned short*)0x06000000)[136+80*240] = 0x03E0;
    ((unsigned short*)0x06000000)[120+96*240] = 0x7C00;

    ((unsigned short*)0x06000000)[136+96*240] = 0x001F;
    ((unsigned short*)0x06000000)[140+96*240] = 0x001F;

    

    while(1);





    return 0;
}
