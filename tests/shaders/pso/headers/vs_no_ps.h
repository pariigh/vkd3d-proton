static const DWORD vs_no_ps_code_dxbc[] =
{
    0x43425844, 0xecd820c8, 0x89ee4b40, 0xb73efa73, 0x4ed91573, 0x00000001, 0x000000d4, 0x00000003,
    0x0000002c, 0x00000058, 0x0000008c, 0x4e475349, 0x00000024, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000f0f, 0xabab0041, 0x4e47534f, 0x0000002c,
    0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f,
    0x505f5653, 0x7469736f, 0x006e6f69, 0x58454853, 0x00000040, 0x00010050, 0x00000010, 0x0100086a,
    0x0300005f, 0x001010f2, 0x00000000, 0x04000067, 0x001020f2, 0x00000000, 0x00000001, 0x05000036,
    0x001020f2, 0x00000000, 0x00101e46, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE vs_no_ps_dxbc = { vs_no_ps_code_dxbc, sizeof(vs_no_ps_code_dxbc) };
#undef UNUSED_ARRAY_ATTR