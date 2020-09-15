typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct FingerMSDeathNotifier FingerMSDeathNotifier, *PFingerMSDeathNotifier;

struct FingerMSDeathNotifier { // PlaceHolder Class Structure
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct bad_alloc bad_alloc, *Pbad_alloc;

struct bad_alloc { // PlaceHolder Class Structure
};

typedef struct bad_exception bad_exception, *Pbad_exception;

struct bad_exception { // PlaceHolder Class Structure
};

typedef struct RefBase RefBase, *PRefBase;

struct RefBase { // PlaceHolder Class Structure
};

typedef struct Parcel Parcel, *PParcel;

struct Parcel { // PlaceHolder Class Structure
};

typedef struct sp<android--GxFpDevice> sp<android--GxFpDevice>, *Psp<android--GxFpDevice>;

struct sp<android--GxFpDevice> { // PlaceHolder Class Structure
};

typedef struct BBinder BBinder, *PBBinder;

struct BBinder { // PlaceHolder Class Structure
};

typedef struct sp<FingerMSDeathNotifier> sp<FingerMSDeathNotifier>, *Psp<FingerMSDeathNotifier>;

struct sp<FingerMSDeathNotifier> { // PlaceHolder Class Structure
};

typedef struct sp<android--IBinder> sp<android--IBinder>, *Psp<android--IBinder>;

struct sp<android--IBinder> { // PlaceHolder Class Structure
};

typedef struct GxFpDevice GxFpDevice, *PGxFpDevice;

struct GxFpDevice { // PlaceHolder Class Structure
};

typedef int __clockid_t;

typedef __clockid_t clockid_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

typedef union sem_t sem_t, *Psem_t;

union sem_t {
    char __size[32];
    long __align;
};

typedef struct __foreign_exception __foreign_exception, *P__foreign_exception;

struct __foreign_exception { // PlaceHolder Class Structure
};

typedef struct __forced_unwind __forced_unwind, *P__forced_unwind;

struct __forced_unwind { // PlaceHolder Class Structure
};

typedef struct __si_class_type_info __si_class_type_info, *P__si_class_type_info;

struct __si_class_type_info { // PlaceHolder Class Structure
};

typedef struct _IO_FILE FILE;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef uint __mode_t;

typedef uint __useconds_t;

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef union pthread_mutex_t pthread_mutex_t, *Ppthread_mutex_t;

typedef struct __pthread_mutex_s __pthread_mutex_s, *P__pthread_mutex_s;

typedef struct __pthread_internal_list __pthread_internal_list, *P__pthread_internal_list;

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_internal_list {
    struct __pthread_internal_list * __prev;
    struct __pthread_internal_list * __next;
};

struct __pthread_mutex_s {
    int __lock;
    uint __count;
    int __owner;
    uint __nusers;
    int __kind;
    int __spins;
    __pthread_list_t __list;
};

union pthread_mutex_t {
    struct __pthread_mutex_s __data;
    char __size[40];
    long __align;
};

typedef union pthread_condattr_t pthread_condattr_t, *Ppthread_condattr_t;

union pthread_condattr_t {
    char __size[4];
    int __align;
};

typedef union pthread_mutexattr_t pthread_mutexattr_t, *Ppthread_mutexattr_t;

union pthread_mutexattr_t {
    char __size[4];
    int __align;
};

typedef int pthread_once_t;

typedef union pthread_cond_t pthread_cond_t, *Ppthread_cond_t;

typedef struct _struct_16 _struct_16, *P_struct_16;

struct _struct_16 {
    int __lock;
    uint __futex;
    ulonglong __total_seq;
    ulonglong __wakeup_seq;
    ulonglong __woken_seq;
    void * __mutex;
    uint __nwaiters;
    uint __broadcast_seq;
};

union pthread_cond_t {
    struct _struct_16 __data;
    char __size[48];
    longlong __align;
};

typedef ulong pthread_t;

typedef uint pthread_key_t;

typedef union pthread_attr_t pthread_attr_t, *Ppthread_attr_t;

union pthread_attr_t {
    char __size[56];
    long __align;
};

typedef struct st_fingerprint_hal_device_t st_fingerprint_hal_device_t, *Pst_fingerprint_hal_device_t;

struct st_fingerprint_hal_device_t { // PlaceHolder Structure
};

typedef struct __class_type_info __class_type_info, *P__class_type_info;

struct __class_type_info { // PlaceHolder Structure
};

typedef struct __dyncast_result __dyncast_result, *P__dyncast_result;

struct __dyncast_result { // PlaceHolder Structure
};

typedef dword __sub_kind;

typedef struct __upcast_result __upcast_result, *P__upcast_result;

struct __upcast_result { // PlaceHolder Structure
};

typedef struct type_info type_info, *Ptype_info;

struct type_info { // PlaceHolder Structure
};

typedef struct sp sp, *Psp;

struct sp { // PlaceHolder Structure
};

typedef struct wp wp, *Pwp;

struct wp { // PlaceHolder Structure
};

typedef dword FpClientType;

typedef struct String16 String16, *PString16;

struct String16 { // PlaceHolder Structure
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_AARCH64_ARCHEXT=1879048192,
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_AARCH64_ATTRIBUTES=1879048195,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};




void FUN_00107860(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeString16(String16 *param_1)

{
  writeString16(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_Match(void *param_1)

{
  gx_Match(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readInt32(int *param_1)

{
  readInt32(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_destroy(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeInterfaceToken(String16 *param_1)

{
  writeInterfaceToken(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int usleep(__useconds_t __useconds)

{
  int iVar1;
  
  iVar1 = usleep(__useconds);
  return iVar1;
}



void __thiscall Parcel(Parcel *this)

{
  Parcel(this);
  return;
}



void __thiscall String16(String16 *this,char *param_1)

{
  String16(this,param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void defaultServiceManager(void)

{
  defaultServiceManager();
  return;
}



void __thiscall _Parcel(Parcel *this)

{
  _Parcel(this);
  return;
}



void __thiscall _RefBase(RefBase *this)

{
  _RefBase(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeInt32(int param_1)

{
  writeInt32(param_1);
  return;
}



void __system_property_get(void)

{
  __system_property_get();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = pthread_join(__th,__thread_return);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onLastWeakRef(void *param_1)

{
  onLastWeakRef(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = clock_gettime(__clock_id,__tp);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_set_fpdb_to_ta(char *param_1)

{
  gx_set_fpdb_to_ta(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void dataSize(void)

{
  dataSize();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(__key);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkdir(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_gfCmdM(int param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,int *param_6)

{
  gx_gfCmdM(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_UnRegister(int param_1)

{
  gx_UnRegister(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sprintf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = sprintf(__s,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_post(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int rand(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(__key,__pointer);
  return iVar1;
}



void __thiscall RefBase(RefBase *this)

{
  RefBase(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = pthread_once(__once_control,__init_routine);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void decStrong(void *param_1)

{
  decStrong(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_getFpTemplateList(uint *param_1,uint *param_2,char **param_3)

{
  gx_getFpTemplateList(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_set_user_id(ulong param_1)

{
  gx_set_user_id(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputc(__c,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readDouble(double *param_1)

{
  readDouble(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_attr_setdetachstate(pthread_attr_t *__attr,int __detachstate)

{
  int iVar1;
  
  iVar1 = pthread_attr_setdetachstate(__attr,__detachstate);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void writeStrongBinder(sp *param_1)

{
  writeStrongBinder(param_1);
  return;
}



void __android_log_print(void)

{
  __android_log_print();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void remote(void)

{
  remote();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int remove(char *__filename)

{
  int iVar1;
  
  iVar1 = remove(__filename);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void connect(FpClientType param_1)

{
  connect(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onIncStrongAttempted(uint param_1,void *param_2)

{
  onIncStrongAttempted(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(__cond,__mutex);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_Register(void)

{
  gx_Register();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_EngTest(int param_1)

{
  gx_EngTest(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void pthread_exit(void *__retval)

{
                    // WARNING: Subroutine does not return
  pthread_exit(__retval);
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_RegisterSave(int param_1)

{
  gx_RegisterSave(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_setSafeClass(uint param_1)

{
  gx_setSafeClass(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_MatchCancel(void)

{
  gx_MatchCancel();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(__mutex,__mutexattr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void setListener(sp *param_1)

{
  setListener(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = pthread_cond_signal(__cond);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = sem_init(__sem,__pshared,__value);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(__key);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void abort(void)

{
                    // WARNING: Subroutine does not return
  abort();
}



void property_get_int32(void)

{
  property_get_int32();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_load_all_fpdata(void *param_1)

{
  gx_load_all_fpdata(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = write(__fd,__buf,__n);
  return sVar1;
}



void __errno(void)

{
  __errno();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_RegisterCancel(void)

{
  gx_RegisterCancel();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = sem_wait(__sem);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onLastStrongRef(void *param_1)

{
  onLastStrongRef(param_1);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_enableFingerScreenUnlock(void)

{
  gx_enableFingerScreenUnlock();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(__mutex);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void __thiscall _String16(String16 *this)

{
  _String16(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = pthread_key_create(__key,__destr_function);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readString16(void)

{
  readString16();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void onFirstRef(void)

{
  onFirstRef();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void readExceptionCode(void)

{
  readExceptionCode();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_attr_init(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = pthread_attr_init(__attr);
  return iVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_disableFingerScreenUnlock(void)

{
  gx_disableFingerScreenUnlock();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = fputs(__s,__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = pthread_cond_init(__cond,__cond_attr);
  return iVar1;
}



void __thiscall BBinder(BBinder *this)

{
  BBinder(this);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void incStrong(void *param_1)

{
  incStrong(param_1);
  return;
}



void dl_iterate_phdr(void)

{
  dl_iterate_phdr();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void gx_delFpTemplates(uint *param_1,uint param_2)

{
  gx_delFpTemplates(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



void entry(void)

{
  __cxa_finalize(&DAT_0013b000);
  return;
}



void FUN_00107fac(void)

{
  int iVar1;
  
  DAT_0014d334 = false;
  iVar1 = pthread_key_create(&DAT_0014d330,(__destr_function *)&LAB_00110558);
  DAT_0014d334 = iVar1 == 0;
  __cxa_atexit(&LAB_0011053c,&DAT_0014d330,&DAT_0013b000);
  return;
}



void FUN_0010800c(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



undefined8 FUN_0010807c(longlong param_1)

{
  __android_log_print(3,"FingerGoodix","post_enroll");
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return 0;
}



undefined8 FUN_001080b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *__s;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  undefined4 local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_open(), merged");
  if (param_3 == (undefined8 *)0x0) {
    __android_log_print(6,"FingerGoodix","NULL device on open");
    uVar3 = 0xffffffea;
  }
  else {
    __android_log_print(3,"FingerGoodix","fingerprint open");
    __s = (undefined4 *)malloc(0x210);
    memset(__s,0,0x210);
    *(undefined8 *)(__s + 2) = param_1;
    *__s = 0x48574454;
    __s[1] = 0x200;
    *(undefined8 *)(__s + 0x1c) = 0x1089f4;
    *(undefined8 *)(__s + 0x22) = 0x108974;
    *(undefined8 *)(__s + 0x26) = 0x10807c;
    *(undefined8 *)(__s + 0x24) = 0x108808;
    *(undefined8 *)(__s + 0x76) = 0xdeadbeef;
    *(undefined8 *)(__s + 0x28) = 0x10803c;
    local_18 = 0;
    *(undefined8 *)(__s + 0x30) = 0x1087a0;
    local_10 = 0;
    *(undefined8 *)(__s + 0x32) = 0x108610;
    *(undefined8 *)(__s + 0x2a) = 0x10858c;
    *(undefined8 *)(__s + 0x2c) = 0x10846c;
    *(undefined8 *)(__s + 0x2e) = 0x1083e0;
    *(undefined8 *)(__s + 0x20) = 0x108364;
    *(undefined8 *)(__s + 0x34) = 0x1082d4;
    local_68 = 0;
    uStack96 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_48 = 0;
    uStack64 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uStack32 = 0;
    iVar1 = __system_property_get("ro.template.count",&local_68);
    if (iVar1 < 1) {
      uVar2 = 8;
    }
    else {
      uVar2 = atoi((char *)&local_68);
      if ((int)uVar2 < 1) {
        uVar2 = 8;
      }
    }
    __s[0x6c] = uVar2;
    __android_log_print(3,"FingerGoodix","Max fp number: %d",(ulonglong)uVar2);
    pthread_mutex_init((pthread_mutex_t *)(__s + 0x79),(pthread_mutexattr_t *)0x0);
    __s[0x4b] = 3;
    createListenerThread(__s);
    goodix_sensor_set_active_group(__s,0,"/data/system/users/0/fpdata/");
    *(undefined4 **)param_3 = __s;
    uVar3 = 0;
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
FUN_001082d4(undefined8 param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
            ulonglong param_6)

{
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_gxCmd(%d, %d, %d, %p, %d)",
                      (ulonglong)param_2,(ulonglong)param_3,(ulonglong)param_4,param_5,
                      param_6 & 0xffffffff);
  loadFingerPrintPlatformDataIfNeed(param_1);
  goodix_sensor_fp_gxCmd((ulonglong)param_2,(ulonglong)param_3,(ulonglong)param_4,param_5,param_6);
  return 0;
}



undefined8 FUN_00108364(longlong param_1,undefined8 param_2)

{
  __android_log_print(3,"FingerGoodix","set_notify");
  __android_log_print(3,"FingerGoodix","fpcode, set_notify_callback(%p, %p)",param_1,param_2);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1e4));
  *(undefined8 *)(param_1 + 0x78) = param_2;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1e4));
  return 0;
}



ulonglong FUN_001083e0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  loadFingerPrintPlatformDataIfNeed();
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b140);
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_remove(%p, %d, %d)",param_1,
                      param_2 & 0xffffffff,param_3 & 0xffffffff);
  loadFingerPrintPlatformDataIfNeed(param_1);
  uVar1 = goodix_sensor_fp_remove(param_1,param_3 & 0xffffffff,param_2 & 0xffffffff);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
  return uVar1 & 0xffffffff;
}



undefined8 FUN_0010846c(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint local_34;
  undefined4 local_30 [10];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_enumerate(%p, %p, %d)",param_1,param_2,
                      (ulonglong)*param_3);
  if (*param_3 == 0) {
    uVar4 = 0xfffffff4;
  }
  else {
    local_34 = 0x28;
    uVar4 = goodix_sensor_fp_enumerate(local_30,&local_34);
    if (((int)uVar4 == 0) && (local_34 != 0)) {
      uVar3 = local_34 >> 3;
      if (uVar3 != 0) {
        puVar6 = local_30 + 1;
        puVar5 = (undefined4 *)(param_2 + 4);
        uVar7 = 0;
        do {
          uVar2 = puVar6[-1];
          *puVar5 = *puVar6;
          puVar5[-1] = uVar2;
          uVar1 = (int)uVar7 + 1;
          puVar6 = puVar6 + 2;
          __android_log_print(3,"FingerGoodix",
                              "fpcode, fingerprint_enumerate:count=%d,fid=%d,gid=%d",uVar7);
          puVar5 = puVar5 + 2;
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 != uVar3);
      }
      *param_3 = uVar3;
      uVar4 = 0;
    }
    else {
      *param_3 = 0;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 FUN_0010858c(longlong param_1)

{
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_cancel()");
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b140);
  __android_log_print(3,"FingerGoodix","fingerprint_cancel");
  goodix_sensor_fp_cancel((ulonglong)*(uint *)(param_1 + 300));
  setListenerState(param_1,3);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
  return 0;
}



undefined8 FUN_00108610(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined local_50;
  undefined7 uStack79;
  undefined uStack72;
  undefined7 uStack71;
  undefined local_40;
  undefined7 uStack63;
  undefined uStack56;
  undefined4 local_37;
  undefined3 uStack51;
  undefined8 local_30;
  undefined8 uStack40;
  undefined8 local_20;
  undefined8 uStack24;
  undefined4 local_10;
  undefined local_c;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix",
                      "fpcode, fingerprint_authenticate(%p, operation_id=%lud, gid=%d)",param_1,
                      param_2,param_3 & 0xffffffff);
  iVar1 = goodix_sensor_init();
  if (iVar1 < 0) {
    __android_log_print(6,"FingerGoodix","Init goodix sensor failed!");
    uVar2 = 0xffffffea;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b140);
    __android_log_print(3,"FingerGoodix","fingerprint_authenticate");
    set_fpdb_to_ta();
    loadFingerPrintPlatformDataIfNeed(param_1);
    checkConsistence(param_1);
    if (*(int *)(param_1 + 0x1a0) < 1) {
      __android_log_print(3,"FingerGoodix","no fingerprint, can not authenticate");
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
      uVar2 = 0;
    }
    else {
      goodix_sensor_fp_cancel((ulonglong)*(uint *)(param_1 + 300));
      setListenerState(param_1,3);
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1e4));
      *(undefined8 *)(param_1 + 0x1b8) = param_2;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1e4));
      setListenerState(param_1,2);
      local_10 = 0;
      uStack51 = 0;
      local_50 = 0;
      local_37 = 0x2000000;
      uStack79 = (undefined7)*(undefined8 *)(param_1 + 0x1b8);
      uStack72 = (undefined)((ulonglong)*(undefined8 *)(param_1 + 0x1b8) >> 0x38);
      uStack63 = (undefined7)*(undefined8 *)(param_1 + 0x1d8);
      uStack56 = (undefined)((ulonglong)*(undefined8 *)(param_1 + 0x1d8) >> 0x38);
      uStack71 = (undefined7)*(undefined8 *)(param_1 + 0x1c8);
      local_40 = (undefined)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x38);
      local_30 = 0;
      uStack40 = 0;
      local_20 = 0;
      uStack24 = 0;
      local_c = 0;
      goodix_sensor_fp_match(&local_50);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
      uVar2 = 0;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_001087a0(longlong param_1,uint param_2,undefined8 param_3)

{
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_set_active_group(%p, %d, %s)",param_1,
                      (ulonglong)param_2,param_3);
  *(ulonglong *)(param_1 + 0x1d0) = (ulonglong)param_2;
  clear_check_when_set_active_group();
  goodix_sensor_set_active_group(param_1,(ulonglong)param_2,param_3);
  return;
}



undefined8 FUN_00108808(longlong param_1,char *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"FingerGoodix",
                      "fpcode, fingerprint_enroll(%p, hat=%p, gid=%d, timeout_sec=%d)",param_1,
                      param_2,param_3 & 0xffffffff,param_4 & 0xffffffff);
  iVar1 = goodix_sensor_init();
  if (iVar1 < 0) {
    __android_log_print(6,"FingerGoodix","Init goodix sensor failed!");
    uVar2 = 0xffffffea;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b140);
    __android_log_print(3,"FingerGoodix","fingerprint_enroll");
    loadFingerPrintPlatformDataIfNeed(param_1);
    goodix_sensor_fp_cancel((ulonglong)*(uint *)(param_1 + 300));
    setListenerState(param_1,3);
    if (((param_2 == (char *)0x0) || (*(longlong *)(param_2 + 1) == 0)) ||
       (*(longlong *)(param_2 + 1) != *(longlong *)(param_1 + 0x1c0))) {
      __android_log_print(6,"FingerGoodix","%s: invalid or null auth token","fingerprint_enroll");
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 9);
    }
    if (*param_2 == '\0') {
      if ((*(longlong *)(param_2 + 1) == *(longlong *)(param_1 + 0x1c0)) ||
         ((*(uint *)(param_2 + 0x19) >> 1 & 1) != 0)) {
        goodix_sensor_fp_set_user_id(*(undefined8 *)(param_1 + 0x1c8));
        setListenerState(param_1,1);
        do {
          iVar1 = rand();
        } while (iVar1 < 1);
        goodix_sensor_fp_enroll();
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
        uVar2 = 0;
      }
      else {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
        uVar2 = 0xffffffff;
      }
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b140);
      uVar2 = 0xffffffa3;
    }
  }
  return uVar2;
}



undefined8 FUN_001089f4(void *param_1)

{
  undefined8 uVar1;
  
  __android_log_print(3,"FingerGoodix","fpcode, fingerprint_close(%p)",param_1);
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    destroyListenerThread(param_1);
    free(param_1);
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_00108a4c(longlong param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  
  __android_log_print(3,"FingerGoodix","--------------------------------");
  if (param_1 != 0) {
    __android_log_print(3,"FingerGoodix","%s: (len: 0x%04x, %d)",param_1,(ulonglong)param_3,
                        (ulonglong)param_3);
  }
  uVar4 = param_3 + 0xf;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  iVar2 = (int)uVar4 >> 4;
  if (iVar2 < 1) {
    iVar10 = 0;
  }
  else {
    pbVar9 = param_2;
    do {
      pbVar1 = pbVar9 + 0x10;
      __android_log_print(3,"FingerGoodix",
                                                    
                          " %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x"
                          ,(ulonglong)*pbVar9,(ulonglong)pbVar9[1],(ulonglong)pbVar9[2],
                          (ulonglong)pbVar9[3],(ulonglong)pbVar9[4],(uint)pbVar9[5]);
      pbVar9 = pbVar1;
    } while (pbVar1 != param_2 + ((ulonglong)(iVar2 - 1) + 1) * 0x10);
    iVar10 = iVar2 * -0x10;
    param_2 = param_2 + ((ulonglong)(iVar2 - 1) + 1) * 0x10;
  }
  iVar10 = param_3 + iVar10;
  if (iVar10 < 1) goto LAB_00108c68;
  if (iVar10 == 1) {
    uVar5 = 0;
LAB_00108c98:
    uVar6 = 0;
LAB_00108c9c:
    uVar7 = 0;
LAB_00108ca0:
    uVar8 = 0;
LAB_00108ca4:
    uVar4 = 0;
  }
  else {
    uVar5 = (ulonglong)param_2[1];
    if (iVar10 == 2) goto LAB_00108c98;
    uVar6 = (ulonglong)param_2[2];
    if (iVar10 == 3) goto LAB_00108c9c;
    uVar7 = (ulonglong)param_2[3];
    if (iVar10 == 4) goto LAB_00108ca0;
    uVar8 = (ulonglong)param_2[4];
    if (iVar10 == 5) goto LAB_00108ca4;
    bVar3 = param_2[5];
    uVar4 = (uint)bVar3;
    if (((((iVar10 != 6) && (uVar4 = (uint)bVar3, iVar10 != 7)) &&
         (uVar4 = (uint)bVar3, iVar10 != 8)) &&
        ((uVar4 = (uint)bVar3, iVar10 != 9 && (uVar4 = (uint)bVar3, iVar10 != 10)))) &&
       ((uVar4 = (uint)bVar3, iVar10 != 0xb &&
        ((uVar4 = (uint)bVar3, iVar10 != 0xc && (uVar4 = (uint)bVar3, iVar10 != 0xd)))))) {
      uVar4 = (uint)bVar3;
    }
  }
  __android_log_print(3,"FingerGoodix",
                      " %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x",
                      (ulonglong)*param_2,uVar5,uVar6,uVar7,uVar8,uVar4);
LAB_00108c68:
  __android_log_print(3,"FingerGoodix","--------------------------------");
  return;
}



void FUN_00108cdc(longlong param_1,uint param_2)

{
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined8 uStack56;
  undefined8 local_30;
  undefined8 uStack40;
  undefined8 local_20;
  undefined8 uStack24;
  undefined8 local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","notify acquired message:%d",(ulonglong)param_2);
  local_10 = 0;
  local_58 = (ulonglong)param_2;
  local_50 = 0;
  uStack72 = 0;
  local_40 = 0;
  uStack56 = 0;
  local_30 = 0;
  uStack40 = 0;
  local_20 = 0;
  uStack24 = 0;
  local_60 = 1;
  (**(code **)(param_1 + 0x78))(&local_60);
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00108d74(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b170);
  while (0 < DAT_0013b198) {
    __android_log_print(3,"FingerGoodix","fpcode, wait fp channel finish the last task.");
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
    usleep(10000);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b170);
  }
  return;
}



ulonglong get_64bit_rand(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = rand();
  iVar2 = rand();
  uVar3 = (longlong)iVar2 | (ulonglong)uVar1 << 0x20;
  __android_log_print(3,"FingerGoodix","fpcode, get_64bit_rand()=%lu",uVar3);
  return uVar3;
}



ulonglong get_all_fingerprint_ids(int *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = DAT_0013b1a0;
  if (DAT_0013b1a0 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(DAT_0013b1a0 + 0x138);
    if (iVar1 != 0) {
      *param_1 = iVar1;
    }
    uVar3 = (uint)(iVar1 != 0);
    if (uVar3 < param_2) {
      if (*(int *)(lVar2 + 0x13c) != 0) {
        param_1[(int)uVar3] = *(int *)(lVar2 + 0x13c);
        uVar3 = uVar3 + 1;
        if (param_2 <= uVar3) goto LAB_00108ec0;
      }
      if (*(int *)(lVar2 + 0x140) != 0) {
        param_1[(int)uVar3] = *(int *)(lVar2 + 0x140);
        uVar3 = uVar3 + 1;
        if (param_2 <= uVar3) goto LAB_00108ec0;
      }
      if (*(int *)(lVar2 + 0x144) != 0) {
        param_1[(int)uVar3] = *(int *)(lVar2 + 0x144);
        uVar3 = uVar3 + 1;
        if (param_2 <= uVar3) goto LAB_00108ec0;
      }
      if (*(int *)(lVar2 + 0x148) != 0) {
        param_1[(int)uVar3] = *(int *)(lVar2 + 0x148);
        uVar3 = uVar3 + 1;
      }
    }
  }
LAB_00108ec0:
  return (ulonglong)uVar3;
}



ulonglong get_max_fp_num(void)

{
  if (DAT_0013b1a0 != 0) {
    return (ulonglong)*(uint *)(DAT_0013b1a0 + 0x1b0);
  }
  return 0;
}



ulonglong setListenerState(longlong param_1,uint param_2)

{
  uint uVar1;
  
  __android_log_print(3,"FingerGoodix","fpcode, setListenerState(%p, %d)",param_1,(ulonglong)param_2
                     );
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x100));
  *(uint *)(param_1 + 300) = param_2;
  gSensorState = param_2;
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x100));
  return (ulonglong)uVar1;
}



undefined8 remove_fpdb_file(void)

{
  int iVar1;
  undefined8 uVar2;
  FILE *__stream;
  
  if (gFPExtDataFilePath[0] == '\0') {
    uVar2 = __android_log_print(6,"FingerGoodix",
                                "fpcode, remove_fpdb_file(), gFPExtDataFilePath need init first!");
    return uVar2;
  }
  iVar1 = remove(gFPExtDataFilePath);
  if (iVar1 != 0) {
    return 0;
  }
  __stream = fopen(gFPExtDataFilePath,"a");
  fclose(__stream);
  return 1;
}



undefined8 set_fpdb_to_ta(void)

{
  size_t sVar1;
  size_t sVar2;
  FILE *__stream;
  char acStack2056 [2048];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","set_fpdb_to_ta,gFPExtDataFilePath:%s",gFPExtDataFilePath);
  __stream = fopen(gFPExtDataFilePath,"r");
  memset(acStack2056,0,0x800);
  set_fpdb_path(gFPExtDataFilePath);
  __android_log_print(3,"FingerGoodix","set_fpdb_to_ta,fp_stored:begin");
  DAT_0013b1a8 = 1;
  if (__stream != (FILE *)0x0) {
    __android_log_print(3,"FingerGoodix","set_fpdb_to_ta,fp_stored:%d");
    sVar1 = fread(acStack2056,1,0x800,__stream);
    sVar2 = strlen(acStack2056);
    __android_log_print(3,"FingerGoodix","set_fpdb_to_ta,count:%d",(ulonglong)sVar2);
    if ((int)sVar1 < 1) {
      __android_log_print(3,"FingerGoodix","ss count <= 0");
      remove(gFPExtDataFilePath);
    }
    else {
      goodix_set_fpdb_to_ta(acStack2056);
      remove(gFPExtDataFilePath);
      fclose(__stream);
      DAT_0013b1ac = 0;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void loadFingerPrintPlatformDataIfNeed(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack112;
  undefined8 local_68;
  undefined8 uStack96;
  undefined8 local_58;
  undefined8 uStack80;
  undefined8 local_48;
  undefined8 uStack64;
  undefined8 local_38;
  undefined8 uStack48;
  undefined8 local_28;
  undefined8 uStack32;
  undefined8 local_18;
  ulonglong local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if (((param_1 != 0) && (DAT_0013b1ac == 0)) && (DAT_0013b1a8 != 0)) {
    puVar5 = &local_88;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack112 = 0;
    local_68 = 0;
    uStack96 = 0;
    local_58 = 0;
    uStack80 = 0;
    local_48 = 0;
    uStack64 = 0;
    local_38 = 0;
    uStack48 = 0;
    local_28 = 0;
    uStack32 = 0;
    local_18 = 0;
    local_10 = 0;
    iVar2 = load_all_fpdata(puVar5);
    if (iVar2 != -1) {
      puVar7 = (undefined8 *)(param_1 + 0x150);
      __android_log_print(3,"FingerGoodix","loadFingerPrintPlatformDataIfNeed-->current_num:%d",
                          local_10 & 0xffffffff);
      puVar6 = (undefined8 *)(param_1 + 0x138);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b1b0);
      *puVar6 = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      do {
        __android_log_print(3,"FingerGoodix","loadFingerPrintPlatformDataIfNeed:%d,%llu,%llu\n",
                            (ulonglong)*(uint *)puVar5,puVar5[1],puVar5[2]);
        uVar1 = *(uint *)puVar5;
        if ((int)uVar1 < 1) {
          *(undefined4 *)puVar6 = 0;
          *puVar7 = 0;
          puVar7[5] = 0;
        }
        else {
          *(uint *)puVar6 = uVar1;
          uVar3 = puVar5[1];
          iVar2 = *(int *)(param_1 + 0x1a0);
          uVar4 = puVar5[2];
          *puVar7 = uVar3;
          puVar7[5] = uVar4;
          *(undefined8 *)(param_1 + 0x1d8) = uVar4;
          *(undefined8 *)(param_1 + 0x1c8) = uVar3;
          *(uint *)(param_1 + 0x130) = uVar1;
          *(int *)(param_1 + 0x1a0) = iVar2 + 1;
        }
        puVar6 = (undefined8 *)((longlong)puVar6 + 4);
        puVar5 = puVar5 + 3;
        puVar7 = puVar7 + 1;
      } while (puVar6 != (undefined8 *)(param_1 + 0x14c));
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b1b0);
      DAT_0013b1ac = 1;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 set_active_group_to_channel(uint param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  DIR *pDVar3;
  __mode_t __mode;
  
  if (param_2 == (char *)0x0) {
    __android_log_print(6,"FingerGoodix","fpcode, The dir for the new FP group is invalid!");
    return 0xffffffff;
  }
  if (((param_1 == gCurrentActiveGroup) && (gPlatformFPDataDirPath[0] != '\0')) &&
     (iVar2 = strcmp(gPlatformFPDataDirPath,param_2), iVar2 == 0)) {
    __android_log_print(3,"FingerGoodix","fpcode, the group %d has already been actived.",
                        (ulonglong)param_1);
    return 1;
  }
  DAT_0013b1ac = 0;
  DAT_0013b1a8 = 0;
  __android_log_print(3,"FingerGoodix","fpcode, set_active_group_to_channel(%d, \'%s\')",
                      (ulonglong)param_1,param_2);
  gPlatformFPDataDirPath._0_8_ = 0;
  gPlatformFPDataDirPath._8_8_ = 0;
  gPlatformFPDataDirPath._16_8_ = 0;
  gPlatformFPDataDirPath._24_8_ = 0;
  gPlatformFPDataDirPath._32_8_ = 0;
  gPlatformFPDataDirPath._40_8_ = 0;
  gPlatformFPDataDirPath._48_8_ = 0;
  gPlatformFPDataDirPath._56_8_ = 0;
  gPlatformFPDataDirPath._64_8_ = 0;
  gPlatformFPDataDirPath._72_8_ = 0;
  gPlatformFPDataDirPath._80_8_ = 0;
  gPlatformFPDataDirPath._88_8_ = 0;
  gPlatformFPDataDirPath._96_8_ = 0;
  gPlatformFPDataDirPath._104_8_ = 0;
  gPlatformFPDataDirPath._112_8_ = 0;
  gPlatformFPDataDirPath._120_8_ = 0;
  gCurrentActiveGroup = param_1;
  snprintf(gPlatformFPDataDirPath,0x80,"%s",param_2);
  sVar1 = strlen(gPlatformFPDataDirPath);
  if (gPlatformFPDataDirPath[(int)(sVar1 - 1)] == '/') {
    gPlatformFPDataDirPath[(int)(sVar1 - 1)] = 0;
    pDVar3 = opendir(gPlatformFPDataDirPath);
  }
  else {
    pDVar3 = opendir(gPlatformFPDataDirPath);
  }
  if (pDVar3 == (DIR *)0x0) {
    __android_log_print(3,"FingerGoodix","fpcode, data dir exist.");
    closedir((DIR *)0x0);
  }
  else {
    __mode = 0x121ac0;
    __android_log_print(3,"FingerGoodix","fpcode, create data dir.");
    mkdir(gPlatformFPDataDirPath,__mode);
  }
  snprintf(gFPExtDataFilePath,0x80,"%s/%s",gPlatformFPDataDirPath,&DAT_00122988);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013b1b0);
  if (*(FILE **)(DAT_0013b1a0 + 0x1a8) != (FILE *)0x0) {
    fclose(*(FILE **)(DAT_0013b1a0 + 0x1a8));
    *(undefined8 *)(DAT_0013b1a0 + 0x1a8) = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b1b0);
  return 0;
}



ulonglong createListenerThread(void *param_1)

{
  uint uVar1;
  
  __android_log_print(3,"FingerGoodix","createListenerThread");
  DAT_0013b1ac = 0;
  DAT_0013b1a8 = 0;
  pthread_mutex_init((pthread_mutex_t *)((longlong)param_1 + 0x100),(pthread_mutexattr_t *)0x0);
  uVar1 = pthread_create((pthread_t *)((longlong)param_1 + 0xf8),(pthread_attr_t *)0x0,
                         (__start_routine *)&LAB_001092f4,param_1);
  DAT_0013b1a0 = param_1;
  return (ulonglong)uVar1;
}



undefined8
send_fp_gx_cmd_exed(uint param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_gx_cmd_exed(%d, %d, %d, %p, %d ...)",
                      (ulonglong)param_1,(ulonglong)param_2,(ulonglong)param_3,param_4,
                      (ulonglong)param_5);
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  gSensorNotifyData._0_4_ = 7;
  gSensorNotifyData._4_4_ = 1000;
  gSensorNotifyData._8_4_ = param_1;
  gSensorNotifyData._12_4_ = param_5;
  gSensorNotifyData._16_4_ = param_2;
  gSensorNotifyData._20_4_ = param_3;
  gSensorNotifyData._24_8_ = param_4;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



undefined8
send_fp_scan_on(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined8 param_6)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_scan_on(%d, %d, %d, %d, %d ...)",
                      (ulonglong)param_1,(ulonglong)param_2,(ulonglong)param_3,(ulonglong)param_4,
                      (ulonglong)param_5);
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  gSensorNotifyData._0_4_ = 3;
  sFingerId = param_2;
  gSensorNotifyData._4_4_ = param_1;
  gSensorNotifyData._8_4_ = param_2;
  gSensorNotifyData._12_4_ = param_3;
  gSensorNotifyData._16_4_ = param_4;
  gSensorNotifyData._20_4_ = param_5;
  gSensorNotifyData._24_8_ = param_6;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



undefined8 send_fp_scan_off(undefined4 param_1)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_scan_off()");
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  sFingerId = 0;
  gSensorNotifyData._0_4_ = 4;
  gSensorNotifyData._4_4_ = param_1;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



undefined8 send_fp_touch(void)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_touch()");
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  sFingerId = 0;
  gSensorNotifyData._0_4_ = 1;
  gSensorNotifyData._4_4_ = 1;
  gSensorNotifyData._16_4_ = 0x44e;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



ulonglong destroyListenerThread(longlong param_1)

{
  uint uVar1;
  
  __android_log_print(3,"FingerGoodix","destroyListenerThread");
  DAT_0013b1a0 = 0;
  send_fp_touch();
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    pthread_join((pthread_t)*(longlong *)(param_1 + 0xf8),(void **)0x0);
  }
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return (ulonglong)uVar1;
}



undefined8 send_fp_untouch(void)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_untouch()");
  FUN_00108d74();
  sFingerId = 0;
  gSensorNotifyData._0_4_ = 2;
  DAT_0013b198 = DAT_0013b198 + 1;
  gSensorNotifyData._4_4_ = 1;
  gSensorNotifyData._16_4_ = 0x44f;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



undefined8 send_fp_error(uint param_1,uint param_2,uint param_3,uint param_4)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_error(%d, %d, %d, %d...)",(ulonglong)param_1
                      ,(ulonglong)param_2,(ulonglong)param_3,(ulonglong)param_4);
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  gSensorNotifyData._0_4_ = 6;
  gSensorNotifyData._4_4_ = 0xffffffff;
  gSensorNotifyData._24_8_ = 0;
  sFingerId = param_1;
  gSensorNotifyData._8_4_ = param_1;
  gSensorNotifyData._12_4_ = param_2;
  gSensorNotifyData._16_4_ = param_3;
  gSensorNotifyData._20_4_ = param_4;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



undefined8 send_fp_removed(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  __android_log_print(3,"FingerGoodix","fpcode, send_fp_removed(%d, %d, %d, %d, %d...)",
                      (ulonglong)param_1,(ulonglong)param_2,(ulonglong)param_3,(ulonglong)param_4,
                      (ulonglong)param_5);
  FUN_00108d74();
  DAT_0013b198 = DAT_0013b198 + 1;
  gSensorNotifyData._0_4_ = 5;
  gSensorNotifyData._24_8_ = 0;
  sFingerId = param_2;
  gSensorNotifyData._4_4_ = param_1;
  gSensorNotifyData._8_4_ = param_2;
  gSensorNotifyData._12_4_ = param_3;
  gSensorNotifyData._16_4_ = param_4;
  gSensorNotifyData._20_4_ = param_5;
  pthread_cond_signal((pthread_cond_t *)&DAT_0013b1d8);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013b170);
  return 0;
}



// android::fpMGxCmd_send_int(void*, int, int)

ulonglong fpMGxCmd_send_int(void *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  lVar1 = __stack_chk_guard;
  if (param_1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    incStrong((void *)((longlong)param_1 + *(longlong *)(*(longlong *)param_1 + -0x18)));
    iVar2 = (int)param_1;
  }
  uVar3 = gx_gfCmdM(iVar2,(uchar *)(ulonglong)(uint)param_2,(int)register0x00000008 + -0x24,
                    (uchar *)0x4,0,(int *)0x0);
  if (param_1 != (void *)0x0) {
    decStrong((void *)((longlong)param_1 + *(longlong *)(*(longlong *)param_1 + -0x18)));
  }
  if (lVar1 == __stack_chk_guard) {
    return uVar3 & 0xffffffff;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::sp<android::GxFpDevice>::~sp()

void __thiscall _sp(sp_android__GxFpDevice_ *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
    return;
  }
  return;
}



// android::GxFpDevice::notify(int, int, int)

void __thiscall notify(GxFpDevice *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  lVar2 = __stack_chk_guard;
  uVar1 = sFingerId;
  uVar9 = (ulonglong)(uint)param_2;
  uVar7 = (ulonglong)(uint)param_3;
  __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notify(), fingerid = %d",
                      (ulonglong)sFingerId);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  plVar4 = *(longlong **)(this + 8);
  if (plVar4 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notify(), msgType=%d, ext1=%d, ext2=%d",
                      (ulonglong)(uint)param_1,uVar9,uVar7);
  if (param_1 == 0x1f) {
    __android_log_print(6,"FingerGoodix",
                        "fpcode, GxFpDevice::notify(), FINGERPRINT_ERROR_NO_SPACE!!!");
    send_fp_error(1,uVar7,0,4);
    goto LAB_0010a8ac;
  }
  if (param_1 < 0x20) {
    if (param_1 == 0x15) {
      uVar10 = 3;
    }
    else {
      if (param_1 < 0x16) {
        if (param_1 == 0x11) {
          uVar10 = 0;
        }
        else {
          if (param_1 < 0x12) {
            if (param_1 == 1) {
              if (gSensorState == 2) {
                send_fp_touch();
              }
              goto LAB_0010a8ac;
            }
            if (param_1 == 2) {
              if (gSensorState == 2) {
                send_fp_untouch();
              }
              goto LAB_0010a8ac;
            }
            goto LAB_0010a7c8;
          }
          if (param_1 == 0x13) {
            uVar10 = 5;
          }
          else {
            uVar10 = 2;
            if (param_1 < 0x14) {
              uVar10 = 1;
            }
          }
        }
      }
      else {
        if (param_1 == 0x18) {
          __android_log_print(3,"FingerGoodix",
                              "fpcode, GxFpDevice::notify(), register, MSG_TYPE_REGISTER_COMPLETE");
          goto LAB_0010a8ac;
        }
        if (param_1 < 0x19) {
          if (param_1 != 0x16) {
            if (param_1 == 0x17) {
              __android_log_print(6,"FingerGoodix",
                                  "fpcode, GxFpDevice::notify(), MSG_TYPE_REGISTER_TIMEOUT!!!");
              send_fp_error(1,uVar7,0,3);
              goto LAB_0010a8ac;
            }
            goto LAB_0010a7c8;
          }
          uVar10 = 1;
        }
        else {
          if (param_1 == 0x1c) {
            uVar10 = 0x451;
            __android_log_print(6,"FingerGoodix",
                                "fpcode, GxFpDevice::notify(), this fingerprint is already exist.");
          }
          else {
            if (param_1 != 0x1e) {
              if (param_1 == 0x19) goto LAB_0010a8ac;
              goto LAB_0010a7c8;
            }
            uVar10 = 0x401;
          }
        }
      }
    }
LAB_0010a808:
    iVar3 = get_max_fp_num();
    uVar6 = ((100 - param_2) * iVar3) / 100;
    __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notify(), register, arg = %d",
                        (ulonglong)uVar6);
    if (param_2 < 100) {
      if ((int)uVar6 < 1) {
        uVar6 = 1;
      }
    }
    else {
      uVar9 = gx_RegisterSave((int)plVar4);
      __android_log_print(3,"FingerGoodix",
                          "fpcode, GxFpDevice::notify(), got result_fp_id:=%d, ext2=%d",
                          uVar9 & 0xffffffff,uVar7);
      uVar8 = (uint)(uVar9 & 0xffffffff);
      if ((int)uVar8 < 1) {
        gx_RegisterCancel();
        send_fp_error(0,0,0,5);
        goto LAB_0010a8ac;
      }
      if (param_3 < 1) {
        param_3 = uVar8;
      }
      uVar7 = (ulonglong)(uint)param_3;
    }
    if ((int)DAT_0013b350 < (int)uVar6) {
      DAT_0013b350 = get_max_fp_num();
    }
    if (uVar10 == 0) {
      __android_log_print(3,"FingerGoodix","fpcode, register progress increase %d",
                          (ulonglong)(DAT_0013b350 - uVar6));
      send_fp_scan_on(3,(ulonglong)uVar1,uVar7,(ulonglong)uVar6,0,0);
      DAT_0013b350 = uVar6;
    }
    else {
      send_fp_scan_on(1,(ulonglong)uVar1,uVar7,(ulonglong)uVar6,(ulonglong)uVar10,0);
      DAT_0013b350 = uVar6;
    }
  }
  else {
    if (param_1 == 0x104) {
      uVar5 = 3;
    }
    else {
      if (param_1 < 0x105) {
        if (param_1 != 0x22) {
          if (param_1 < 0x23) {
            if (param_1 == 0x20) goto LAB_0010aa18;
            uVar10 = 2;
            if (param_1 == 0x21) goto LAB_0010a808;
          }
          else {
            if (param_1 == 0x102) {
              __android_log_print(6,"FingerGoodix",
                                  "fpcode, GxFpDevice::notify(), MSG_TYPE_RECONGNIZE_TIMEOUT!!!");
              send_fp_error(1,uVar7,uVar9,3);
              goto LAB_0010a8ac;
            }
            if (0x102 < param_1) {
              send_fp_scan_on(5,0,0,0,0,0);
              goto LAB_0010a8ac;
            }
            if (param_1 == 0x101) {
              __android_log_print(3,"FingerGoodix",
                                  "fpcode, GxFpDevice::notify(), match, MSG_TYPE_RECONGNIZE_SUCCESS"
                                 );
              __android_log_print(3,"FingerGoodix","fpcode, send authentication success message");
              send_fp_scan_on(5,uVar7,uVar7,uVar9,0,0);
              gx_MatchCancel();
              goto LAB_0010a8ac;
            }
          }
LAB_0010a7c8:
          __android_log_print(6,"FingerGoodix","fpcode, GxFpDevice::notify(), msgType is invalid!");
          goto LAB_0010a8ac;
        }
LAB_0010aa18:
        uVar10 = 2;
        goto LAB_0010a808;
      }
      if (param_1 == 0x10d) {
        uVar5 = 5;
      }
      else {
        if (0x10d < param_1) {
          if (param_1 == 0x1002) {
            __android_log_print(6,"FingerGoodix",
                                                                
                                "fpcode, GxFpDevice::notify(), the fingerprint is not existed, can not remove!"
                               );
            send_fp_removed(0xffffffff,uVar7,uVar7,uVar9,2);
            goto LAB_0010a8ac;
          }
          if (param_1 == 0x1003) {
            __android_log_print(6,"FingerGoodix",
                                "fpcode, GxFpDevice::notify(), MSG_TYPE_DELETE_TIMEOUT!!!");
            send_fp_removed(0xffffffff,uVar7,uVar7,uVar9,3);
            goto LAB_0010a8ac;
          }
          if (param_1 == 0x1001) {
            __android_log_print(3,"FingerGoodix",
                                "fpcode, GxFpDevice::notify(), fingerprint has been removed.");
            send_fp_removed(4,uVar7,uVar7,uVar9,0);
            goto LAB_0010a8ac;
          }
          goto LAB_0010a7c8;
        }
        if (param_1 == 0x10b) {
          uVar5 = 2;
        }
        else {
          if (param_1 < 0x10c) {
            uVar5 = 3;
            if (param_1 != 0x105) goto LAB_0010a7c8;
          }
          else {
            uVar5 = 1;
          }
        }
      }
    }
    __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notify(), match, arg = %d",0);
    send_fp_scan_on(1,uVar7,uVar7,uVar9,uVar5,0);
  }
LAB_0010a8ac:
  if (plVar4 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// android::GxFpDevice::notifyData(int, int, char*)

void __thiscall notifyData(GxFpDevice *this,int param_1,int param_2,char *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notifyData(), fingerId = %d",
                      (ulonglong)sFingerId);
  pthread_mutex_lock((pthread_mutex_t *)(this + 0x10));
  plVar2 = *(longlong **)(this + 8);
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10));
  __android_log_print(3,"FingerGoodix",
                      "fpcode, GxFpDevice::notifyData(), msgType=%d, length=%d, data:%p",
                      (ulonglong)(uint)param_1,(ulonglong)(uint)param_2,param_3);
  if (param_1 == 0x18) {
    __android_log_print(3,"FingerGoodix",
                        "fpcode, GxFpDevice::notify(), register, MSG_TYPE_REGISTER_COMPLETE");
    goto joined_r0x0010ae28;
  }
  if (param_1 < 0x19) {
    if (param_1 == 2) {
      if (gSensorState == 2) {
        send_fp_untouch();
      }
      goto joined_r0x0010ae28;
    }
    if (param_1 < 3) {
      if (param_1 == 1) {
        if (gSensorState == 2) {
          send_fp_touch();
        }
        goto joined_r0x0010ae28;
      }
    }
    else {
      if (param_1 - 0x11U < 6) {
        __android_log_print(3,"FingerGoodix","fpcode, GxFpDevice::notifyData(), register");
        goto joined_r0x0010ae28;
      }
    }
  }
  else {
    if (param_1 == 0x103) {
      send_fp_scan_on(5,0,0,0,0,0);
      goto joined_r0x0010ae28;
    }
    if (0x103 < param_1) {
      if (param_1 == 0x104) {
        uVar3 = 2;
      }
      else {
        uVar3 = 3;
        if (param_1 != 0x105) goto LAB_0010af44;
      }
      __android_log_print(3,"FingerGoodix",
                          "fpcode, GxFpDevice::notifyData(), matching, error msg: %d",
                          (ulonglong)(uint)param_1);
      send_fp_scan_on(1,0,0,0,uVar3,0);
      goto joined_r0x0010ae28;
    }
    if (param_1 == 0x101) {
      __android_log_print(3,"FingerGoodix",
                          "fpcode, GxFpDevice::notifyData(), matched, MSG_TYPE_RECONGNIZE_SUCCESS");
      if (param_3 != (char *)0x0) {
        __android_log_print(3,"FingerGoodix",
                                                        
                            "fpcode, GxFpDevice::notifyData(), matched, verifyIndex=%d, verifyScore=%d, verifyID=%d"
                            ,(ulonglong)*(uint *)param_3,(ulonglong)*(uint *)(param_3 + 4),
                            (ulonglong)*(uint *)(param_3 + 0x10));
        __android_log_print(3,"FingerGoodix","fpcode, send authentication success message");
        send_fp_scan_on(5,(ulonglong)*(uint *)(param_3 + 0x10),(ulonglong)*(uint *)(param_3 + 0x10),
                        (ulonglong)*(uint *)(param_3 + 4),(ulonglong)(uint)param_2,param_3);
        gx_MatchCancel();
      }
      goto joined_r0x0010ae28;
    }
    if (param_1 == 0x102) {
      __android_log_print(6,"FingerGoodix",
                          "fpcode, GxFpDevice::notifyData(), MSG_TYPE_REGISTER_TIMEOUT!!!");
      send_fp_error(1,0,0,3);
      goto joined_r0x0010ae28;
    }
  }
LAB_0010af44:
  __android_log_print(6,"FingerGoodix","fpcode, GxFpDevice::notifyData(), msgType is invalid!");
joined_r0x0010ae28:
  if (plVar2 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  if (lVar1 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// android::GxFpDevice::GxFpDevice(android::sp<android::Fp> const&)

void __thiscall GxFpDevice(GxFpDevice *this,sp *param_1)

{
  longlong *plVar1;
  longlong **in_x2;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)this = lVar2;
  *(undefined8 *)(this + *(longlong *)(lVar2 + -0x18)) = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)param_1;
  *(longlong *)this = lVar2;
  *(undefined8 *)(this + *(longlong *)(lVar2 + -0x18)) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 8) = 0;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  plVar3 = *in_x2;
  if (plVar3 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  plVar1 = *(longlong **)(this + 8);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)(this + 8) = plVar3;
  return;
}



// android::GxFpDevice::GxFpDevice(android::sp<android::Fp> const&)

void __thiscall GxFpDevice(GxFpDevice *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  RefBase((RefBase *)(this + 0x38));
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0x13a4a8;
  *(undefined8 *)(this + 0x38) = 0x13a500;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  plVar1 = *(longlong **)(this + 8);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)(this + 8) = plVar2;
  return;
}



// android::GxFpDevice::release()

void release(void)

{
  return;
}



// android::GxFpDevice::~GxFpDevice()

void __thiscall _GxFpDevice(GxFpDevice *this)

{
  longlong *plVar1;
  
  *(undefined8 *)this = 0x13a4a8;
  *(undefined8 *)(this + 0x38) = 0x13a500;
  release();
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  plVar1 = *(longlong **)(this + 8);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(undefined8 *)(this + 0x38) = 0x13a440;
  _RefBase((RefBase *)(this + 0x38));
  return;
}



// virtual thunk to android::GxFpDevice::~GxFpDevice()

void __thiscall _GxFpDevice(GxFpDevice *this)

{
  _GxFpDevice(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::GxFpDevice::~GxFpDevice()

void __thiscall _GxFpDevice(GxFpDevice *this)

{
  longlong *plVar1;
  
  *(undefined8 *)this = 0x13a4a8;
  *(undefined8 *)(this + 0x38) = 0x13a500;
  release();
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x10));
  plVar1 = *(longlong **)(this + 8);
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(undefined8 *)(this + 0x38) = 0x13a440;
  _RefBase((RefBase *)(this + 0x38));
  _ZdlPv(this);
  return;
}



// virtual thunk to android::GxFpDevice::~GxFpDevice()

void __thiscall _GxFpDevice(GxFpDevice *this)

{
  _GxFpDevice(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



void FUN_0010b1c8(uint **param_1)

{
  longlong lVar1;
  
  lVar1 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","init, g_need_clean_fp_data=%d",
                      (ulonglong)g_need_clean_fp_data);
  if (g_need_clean_fp_data != 0) {
    gx_delFpTemplates(*param_1,(int)register0x00000008 - 0x20);
    g_need_clean_fp_data = 0;
  }
  if (lVar1 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulonglong goodix_sensor_init(void)

{
  pthread_mutex_t *__mutex;
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *local_18;
  longlong *local_10;
  longlong local_8;
  
  plVar1 = sGxFpDevice;
  local_8 = __stack_chk_guard;
  if (sGxFpDevice != (longlong *)0x0) {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 2);
    pthread_mutex_lock(__mutex);
    local_18 = (longlong *)plVar1[1];
    if (local_18 != (longlong *)0x0) {
      incStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (local_18 != (longlong *)0x0) {
      remote();
      if (local_10 != (longlong *)0x0) {
        __android_log_print(3,"FingerGoodix","fpcode, goodix sensor has already been inited!");
        if (local_10 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
        }
        if (local_18 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
        }
        uVar3 = 0;
        goto LAB_0010b340;
      }
      if (local_18 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
      }
    }
  }
  __android_log_print(3,"FingerGoodix","fpcode, goodix sensor need to init. merged");
  connect(0);
  if (local_18 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
    __android_log_print(3,"FingerGoodix","fpcode, goodix_sensor_init(), Fp::connect failed!");
  }
  else {
    uVar3 = (ulonglong)*(uint *)(local_18 + 6);
    if (*(uint *)(local_18 + 6) == 0) {
      __android_log_print(3,"FingerGoodix","fpcode, goodix_sensor_init() ok!");
      local_10 = (longlong *)operator_new(0x48);
      GxFpDevice((GxFpDevice *)local_10,(sp *)&local_18);
      incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      if (sGxFpDevice != (longlong *)0x0) {
        decStrong((void *)((longlong)sGxFpDevice + *(longlong *)(*sGxFpDevice + -0x18)));
      }
      plVar1 = local_18;
      sGxFpDevice = local_10;
      incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      setListener((sp *)plVar1);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      local_10 = local_18;
      if (local_18 == (longlong *)0x0) {
        iVar2 = 0;
      }
      else {
        incStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
        iVar2 = (int)local_10;
      }
      gx_gfCmdM(iVar2,(uchar *)0x1,(int)register0x00000008 + -0x20,(uchar *)0x4,0,(int *)0x0);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      gx_EngTest((int)local_18);
      local_10 = local_18;
      if (local_18 != (longlong *)0x0) {
        incStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
      }
      FUN_0010b1c8(&local_10);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
    }
    else {
      uVar3 = 0xffffffff;
      __android_log_print(3,"FingerGoodix","FpService initialization failed");
    }
  }
  if (local_18 != (longlong *)0x0) {
    decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
  }
LAB_0010b340:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



ulonglong load_all_fpdata(void)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar2 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","load_all_fpdata");
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 == (longlong *)0x0) {
      uVar4 = 0xfffffffe;
      __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
    }
    else {
      uVar4 = gx_load_all_fpdata(plVar3);
      uVar4 = uVar4 & 0xffffffff;
      decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



ulonglong goodix_sensor_fp_set_user_id(void)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar2 = __stack_chk_guard;
  lVar1 = sGxFpDevice;
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  pthread_mutex_lock(__mutex);
  plVar3 = *(longlong **)(lVar1 + 8);
  if (plVar3 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0xfffffffe;
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
  }
  else {
    uVar4 = gx_set_user_id((ulong)plVar3);
    uVar4 = uVar4 & 0xffffffff;
    decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



ulonglong goodix_set_fpdb_to_ta(void)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar2 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","goodix_set_fpdb_to_ta");
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 == (longlong *)0x0) {
      uVar4 = 0xfffffffe;
      __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
    }
    else {
      uVar4 = gx_set_fpdb_to_ta((char *)plVar3);
      uVar4 = uVar4 & 0xffffffff;
      decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



ulonglong goodix_sensor_set_active_group(undefined8 param_1,ulonglong param_2,longlong param_3)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if (param_3 == 0) {
    uVar4 = 0xffffffff;
    __android_log_print(6,"FingerGoodix","fpcode, The dir for the new FP group is invalid!");
  }
  else {
    uVar2 = set_active_group_to_channel(param_2 & 0xffffffff,param_3);
    uVar4 = uVar2 & 0xffffffff;
    if ((int)uVar2 == 0) {
      uVar2 = goodix_sensor_init();
      lVar1 = sGxFpDevice;
      uVar4 = uVar2 & 0xffffffff;
      if ((int)uVar2 == 0) {
        __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
        pthread_mutex_lock(__mutex);
        plVar3 = *(longlong **)(lVar1 + 8);
        if (plVar3 != (longlong *)0x0) {
          incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
        }
        pthread_mutex_unlock(__mutex);
        if (plVar3 == (longlong *)0x0) {
          uVar4 = 0xffffffff;
          __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
        }
        else {
          local_10 = plVar3;
          incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
          gx_gfCmdM((int)local_10,(uchar *)0x1,(int)register0x00000008 + -0x20,(uchar *)0x4,0,
                    (int *)0x0);
          if (local_10 != (longlong *)0x0) {
            decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
          }
          loadFingerPrintPlatformDataIfNeed(param_1);
          local_10 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
          }
          FUN_0010b1c8(&local_10);
          if (local_10 != (longlong *)0x0) {
            decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
          }
        }
        if (plVar3 != (longlong *)0x0) {
          decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
        }
      }
      else {
        uVar4 = 0xffffffff;
        __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice has not been inited");
      }
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Removing unreachable block (ram,0x0010bb94)

ulonglong goodix_sensor_fill_auth_token_hmac(longlong param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = __stack_chk_guard;
  if (param_1 == 0) {
    uVar6 = 0xffffffff;
    __android_log_print(6,"FingerGoodix","fpcode, params are invalid!");
  }
  else {
    iVar3 = goodix_sensor_init();
    lVar1 = sGxFpDevice;
    if (iVar3 == 0) {
      __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
      pthread_mutex_lock(__mutex);
      plVar4 = *(longlong **)(lVar1 + 8);
      if (plVar4 != (longlong *)0x0) {
        incStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
      }
      pthread_mutex_unlock(__mutex);
      if (plVar4 == (longlong *)0x0) {
        uVar6 = 0xffffffff;
        __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
      }
      else {
        incStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
        uVar5 = gx_gfCmdM((int)plVar4,(uchar *)0x3,(int)param_1,(uchar *)0x45,
                          (int)register0x00000008 + -0x50,(int *)0x45);
        uVar6 = uVar5 & 0xffffffff;
        if ((int)uVar5 == 0) {
          uVar6 = 0xfffffffe;
        }
        if (plVar4 != (longlong *)0x0) {
          decStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
        }
        __android_log_print(3,"FingerGoodix","fill hmac ret: %d");
      }
      if (plVar4 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
      }
    }
    else {
      uVar6 = 0xffffffff;
      __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice has not been inited");
    }
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar6;
}



ulonglong goodix_sensor_fp_enroll_verify(int param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  lVar2 = __stack_chk_guard;
  lVar1 = sGxFpDevice;
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  pthread_mutex_lock(__mutex);
  plVar3 = *(longlong **)(lVar1 + 8);
  if (plVar3 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0xfffffffe;
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
  }
  else {
    uVar4 = gx_gfCmdM((int)plVar3,(uchar *)0x4,param_1,(uchar *)0x45,0,(int *)0x0);
    uVar4 = uVar4 & 0xffffffff;
    decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



ulonglong goodix_sensor_fp_enroll(uint param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, goodix_sensor_fp_enroll(), fingerId = %d",
                      (ulonglong)param_1);
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar3 = 0xffffffff;
    goto LAB_0010be80;
  }
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  sFingerId = param_1;
  pthread_mutex_lock(__mutex);
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0xfffffffe;
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
LAB_0010bef8:
    if (plVar2 == (longlong *)0x0) goto LAB_0010be80;
  }
  else {
    if (DAT_0013b10c != 0) {
      local_10 = plVar2;
      incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
      FUN_0010b1c8(&local_10);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      uVar3 = gx_Register();
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_0010bef8;
    }
    uVar3 = 0xfffffffd;
  }
  decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
LAB_0010be80:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void goodix_sensor_fp_clear_enroll_env(void)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, clear_enroll_env");
  lVar1 = sGxFpDevice;
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  pthread_mutex_lock(__mutex);
  plVar3 = *(longlong **)(lVar1 + 8);
  if (plVar3 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar3 == (longlong *)0x0) {
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
  }
  gx_EngTest((int)plVar3);
  if (plVar3 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
  }
  if (lVar2 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Removing unreachable block (ram,0x0010c120)

ulonglong goodix_sensor_fp_set_session_id(void)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar2 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, set session id.");
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 == (longlong *)0x0) {
      uVar4 = 0xfffffffe;
      __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
    }
    else {
      uVar4 = 0xfffffffd;
      if (DAT_0013b10c != 0) {
        uVar4 = 0;
      }
      decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
  }
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (ulonglong)uVar4;
}



ulonglong goodix_sensor_fp_match(longlong param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","fpcode, goodix_sensor_fp_match(), operation_id = %lud",
                      (ulonglong)*(uint *)(param_1 + 1));
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar3 = 0xffffffff;
    goto LAB_0010c1e8;
  }
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  pthread_mutex_lock(__mutex);
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0xfffffffe;
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
LAB_0010c264:
    if (plVar2 == (longlong *)0x0) goto LAB_0010c1e8;
  }
  else {
    if (DAT_0013b10c != 0) {
      local_10 = plVar2;
      incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
      FUN_0010b1c8(&local_10);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      uVar3 = gx_Match(plVar2);
      uVar3 = uVar3 & 0xffffffff;
      goto LAB_0010c264;
    }
    uVar3 = 0xfffffffd;
  }
  decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
LAB_0010c1e8:
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 goodix_sensor_fp_cancel(int param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = __stack_chk_guard;
  lVar1 = sGxFpDevice;
  if (sGxFpDevice != 0) {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 != (longlong *)0x0) {
      __android_log_print(3,"FingerGoodix","fpcode, fp cancel!");
      if (param_1 == 1) {
        gx_RegisterCancel();
      }
      else {
        if (param_1 == 2) {
          gx_MatchCancel();
        }
      }
      uVar4 = 0;
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
      goto LAB_0010c358;
    }
  }
  uVar4 = 0xffffffff;
LAB_0010c358:
  if (lVar2 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// goodix_sensor_fp_save(int)

undefined8 goodix_sensor_fp_save(int param_1)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar2 = __stack_chk_guard;
  lVar1 = sGxFpDevice;
  if (sGxFpDevice != 0) {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = 0;
      gx_RegisterSave((int)plVar3);
      if (plVar3 != (longlong *)0x0) {
        decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      }
      goto LAB_0010c448;
    }
  }
  uVar4 = 0xffffffff;
LAB_0010c448:
  if (lVar2 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 goodix_sensor_fp_get_fp_list(uint *param_1,char **param_2)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *local_10;
  longlong local_8;
  
  lVar1 = sGxFpDevice;
  local_8 = __stack_chk_guard;
  if (sGxFpDevice != 0) {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar2 = *(longlong **)(lVar1 + 8);
    if (plVar2 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar2 != (longlong *)0x0) {
      local_10 = plVar2;
      incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
      FUN_0010b1c8(&local_10);
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      gx_getFpTemplateList((uint *)plVar2,param_1,param_2);
      if (plVar2 == (longlong *)0x0) {
        uVar3 = 0;
      }
      else {
        decStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
        uVar3 = 0;
      }
      goto LAB_0010c578;
    }
  }
  uVar3 = 0xffffffff;
LAB_0010c578:
  if (local_8 == __stack_chk_guard) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 goodix_sensor_fp_remove(longlong param_1,uint param_2,int param_3)

{
  pthread_mutex_t *__mutex;
  code **ppcVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  
  lVar2 = __stack_chk_guard;
  ppcVar1 = sGxFpDevice;
  if (sGxFpDevice == (code **)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 2);
    pthread_mutex_lock(__mutex);
    plVar3 = (longlong *)ppcVar1[1];
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 == (longlong *)0x0) {
      uVar5 = 0xfffffffe;
    }
    else {
      if (DAT_0013b10c == 0) {
        uVar5 = 0xfffffffd;
      }
      else {
        if ((param_2 == 0) && (param_3 == 0)) {
          puVar6 = (uint *)(param_1 + 0x138);
          incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
          __android_log_print(3,"FingerGoodix","init, clean_fp_data_if_need_from_settings");
          uVar4 = gx_delFpTemplates((uint *)plVar3,(int)register0x00000008 - 0x20);
          if ((int)uVar4 == 0) {
            do {
              if (0 < (int)*puVar6) {
                __android_log_print(3,"FingerGoodix",
                                    "clean_fp_data_if_need_from_settings:remove up-->%d\n");
                (**(code **)*sGxFpDevice)(sGxFpDevice,0x1001,0,(ulonglong)*puVar6);
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != (uint *)(param_1 + 0x14c));
          }
          loadFingerPrintPlatformDataIfNeed(param_1);
          __android_log_print(3,"FingerGoodix",
                              "init, clean_fp_data_if_need_from_settings,result:%d\n",
                              uVar4 & 0xffffffff);
          if (plVar3 != (longlong *)0x0) {
            decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
          }
        }
        else {
          uVar4 = gx_UnRegister((int)plVar3);
          __android_log_print(3,"FingerGoodix","fpcode, UnRegister result:%d",uVar4 & 0xffffffff);
          (**(code **)*sGxFpDevice)(sGxFpDevice,0x1001,0,(ulonglong)param_2);
        }
        uVar5 = 0;
        if (plVar3 == (longlong *)0x0) goto LAB_0010c76c;
      }
      decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
  }
LAB_0010c76c:
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar5;
}



ulonglong goodix_sensor_fp_gxCmd
                    (uint param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *local_18;
  undefined4 local_10 [2];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,0,"goodix_sensor_fp_gxCmd(%d, %d, %d, %p, %d)",(ulonglong)param_1,
                      (ulonglong)param_2,(ulonglong)param_3,param_4,param_5);
  lVar1 = sGxFpDevice;
  if (sGxFpDevice != 0) {
    __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
    pthread_mutex_lock(__mutex);
    plVar3 = *(longlong **)(lVar1 + 8);
    if (plVar3 != (longlong *)0x0) {
      incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
    }
    pthread_mutex_unlock(__mutex);
    if (plVar3 != (longlong *)0x0) {
      if (param_1 < 0xb) {
        local_18 = plVar3;
        incStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
        FUN_0010b1c8(&local_18);
        if (local_18 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_18 + *(longlong *)(*local_18 + -0x18)));
        }
        uVar4 = 0xfffffffd;
        if (param_1 - 1 < 7) {
          uVar2 = (uint)plVar3;
          switch(param_1) {
          case 1:
            uVar4 = 0;
            gx_EngTest(uVar2);
            break;
          case 2:
            if (param_2 - 1 < 3) {
              DAT_0013b110 = *(undefined4 *)(&DAT_00123100 + (ulonglong)(param_2 - 1) * 4);
            }
            else {
              DAT_0013b110 = 0xffffffff;
            }
            uVar4 = 0;
            gx_EngTest(uVar2);
            break;
          case 3:
            uVar4 = 0;
            gx_enableFingerScreenUnlock();
            DAT_0013b10c = 1;
            break;
          case 4:
            uVar4 = 0;
            DAT_0013b10c = 0;
            gx_disableFingerScreenUnlock();
            break;
          case 5:
            uVar4 = 0;
            gx_MatchCancel();
            gx_EngTest(uVar2);
            break;
          case 6:
            uVar4 = 0;
            gx_EngTest(uVar2);
            break;
          case 7:
            uVar4 = gx_setSafeClass(uVar2);
            uVar4 = uVar4 & 0xffffffff;
          }
        }
        local_10[0] = (undefined4)uVar4;
        send_fp_gx_cmd_exed((ulonglong)param_1,(ulonglong)param_2,(ulonglong)param_3,local_10,4);
        if (plVar3 == (longlong *)0x0) goto LAB_0010c8cc;
      }
      else {
        uVar4 = 0xfffffffe;
      }
      decStrong((void *)((longlong)plVar3 + *(longlong *)(*plVar3 + -0x18)));
      goto LAB_0010c8cc;
    }
  }
  uVar4 = 0xffffffff;
LAB_0010c8cc:
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulonglong goodix_sensor_fp_enumerate(int param_1,uint *param_2)

{
  pthread_mutex_t *__mutex;
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar2 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","goodix_sensor_fp_enumerate");
  lVar1 = sGxFpDevice;
  if (sGxFpDevice == 0) {
    uVar5 = 0xffffffff;
    goto LAB_0010cb80;
  }
  __mutex = (pthread_mutex_t *)(sGxFpDevice + 0x10);
  pthread_mutex_lock(__mutex);
  plVar4 = *(longlong **)(lVar1 + 8);
  if (plVar4 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
  }
  pthread_mutex_unlock(__mutex);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0xfffffffe;
    __android_log_print(6,"FingerGoodix","fpcode, sGxFpDevice->getFp(), return NULL!");
LAB_0010cbd8:
    if (plVar4 == (longlong *)0x0) goto LAB_0010cb80;
  }
  else {
    uVar5 = 0xfffffffd;
    if (DAT_0013b10c != 0) {
      uVar3 = gx_gfCmdM((int)plVar4,(uchar *)0xa,0,(uchar *)0x0,param_1,(int *)(ulonglong)*param_2);
      if (uVar3 == 0) {
        uVar5 = 0;
        *param_2 = 0;
      }
      else {
        *param_2 = 0;
        uVar5 = (ulonglong)uVar3;
      }
      goto LAB_0010cbd8;
    }
  }
  decStrong((void *)((longlong)plVar4 + *(longlong *)(*plVar4 + -0x18)));
LAB_0010cb80:
  if (lVar2 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar5;
}



// fido_disptach_command(android::sp<android::Fp>, int, int, int, unsigned char const*, long)

undefined8
fido_disptach_command(sp param_1,int param_2,int param_3,int param_4,uchar *param_5,long param_6)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint local_98;
  undefined auStack144 [128];
  int local_10;
  int local_c;
  longlong local_8;
  
  uVar3 = (ulonglong)(uint)param_2;
  local_8 = __stack_chk_guard;
  if (param_2 == 8) {
    uVar4 = 1;
    __android_log_print(3,"FingerGoodix",
                                                
                        "FINGERPRINT_GX_CMD_FIDO_START, aaid_len = %d, chanllege_len = %d, reqLen=%d"
                        ,(ulonglong)(uint)param_3,(ulonglong)(uint)param_4);
    local_10 = param_4;
    local_c = param_3;
    pvVar2 = memcpy(auStack144,param_5,param_6);
    uVar1 = gx_gfCmdM((int)*(undefined8 *)(ulonglong)(byte)param_1,(uchar *)0x96,(int)pvVar2,
                      (uchar *)0x88,(int)register0x00000008 + -0x98,(int *)0x4);
    __android_log_print(3,"FingerGoodix","gx_gfCmdM ret:%d, cmd:%d, command execute status:%d",
                        uVar1 & 0xffffffff,uVar3,(ulonglong)local_98);
    DAT_0013b368 = -(uint)(local_98 != 0);
  }
  else {
    if (param_2 == 9) {
      memset(&DAT_0013b370,0,0x208);
      DAT_0013b574 = 0xfffffffe;
      uVar1 = gx_gfCmdM((int)*(undefined8 *)(ulonglong)(byte)param_1,(uchar *)0x97,
                        (int)register0x00000008 + -0x98,(uchar *)0x4,0x13b370,(int *)0x208);
      __android_log_print(3,"FingerGoodix","SendCmd ret:%d, cmd:%d, command execute status:%d",
                          uVar1 & 0xffffffff,uVar3,(ulonglong)DAT_0013b574);
      if (DAT_0013b574 == 0) {
        __android_log_print(3,"FingerGoodix","fido_uvt_len:%d",(ulonglong)DAT_0013b370);
        send_fp_gx_cmd_exed(uVar3,0,0,&DAT_0013b374,(longlong)(int)DAT_0013b370);
        uVar4 = 1;
        goto LAB_0010cc90;
      }
      uVar4 = 1;
      DAT_0013b368 = -1;
    }
    else {
      uVar4 = 0;
    }
  }
  send_fp_gx_cmd_exed(uVar3,(ulonglong)(uint)param_3,(ulonglong)(uint)param_4,&DAT_0013b368,4);
LAB_0010cc90:
  if (local_8 == __stack_chk_guard) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// FingerMSDeathNotifier::~FingerMSDeathNotifier()

void __thiscall _FingerMSDeathNotifier(FingerMSDeathNotifier *this)

{
  _RefBase((RefBase *)(this + 8));
  return;
}



// virtual thunk to FingerMSDeathNotifier::~FingerMSDeathNotifier()

void __thiscall _FingerMSDeathNotifier(FingerMSDeathNotifier *this)

{
  _FingerMSDeathNotifier(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// FingerMSDeathNotifier::~FingerMSDeathNotifier()

void __thiscall _FingerMSDeathNotifier(FingerMSDeathNotifier *this)

{
  _RefBase((RefBase *)(this + 8));
  _ZdlPv(this);
  return;
}



// virtual thunk to FingerMSDeathNotifier::~FingerMSDeathNotifier()

void __thiscall _FingerMSDeathNotifier(FingerMSDeathNotifier *this)

{
  _FingerMSDeathNotifier(this + *(longlong *)(*(longlong *)this + -0x18));
  return;
}



// android::sp<android::IBinder>::~sp()

void __thiscall _sp(sp_android__IBinder_ *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
    return;
  }
  return;
}



// android::sp<FingerMSDeathNotifier>::~sp()

void __thiscall _sp(sp_FingerMSDeathNotifier_ *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
    return;
  }
  return;
}



// FingerMSDeathNotifier::binderDied(android::wp<android::IBinder> const&)

void binderDied(wp *param_1)

{
  __android_log_print(3,"FingerGoodix","FingerMSDeathNotifier binderDied");
  if (gFingerPrintMSBinder != (longlong *)0x0) {
    decStrong((void *)((longlong)gFingerPrintMSBinder + *(longlong *)(*gFingerPrintMSBinder + -0x18)
                      ));
  }
  gFingerPrintMSBinder = (longlong *)0x0;
  __android_log_print(3,"FingerGoodix","Fp server died!");
  return;
}



void FUN_0010cf34(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong **in_x8;
  int iVar3;
  code *pcVar4;
  longlong *local_20;
  String16 aSStack24 [8];
  longlong *local_10;
  longlong local_8;
  
  plVar1 = gFingerPrintMSBinder;
  local_8 = __stack_chk_guard;
  if (gFingerPrintMSBinder == (longlong *)0x0) {
    iVar3 = 0x1f;
    defaultServiceManager();
    while( true ) {
      pcVar4 = *(code **)(*local_20 + 0x28);
      String16(aSStack24,"fingerprint");
      (*pcVar4)(local_20,aSStack24);
      plVar1 = local_10;
      if (local_10 != (longlong *)0x0) {
        incStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      if (gFingerPrintMSBinder != (longlong *)0x0) {
        decStrong((void *)((longlong)gFingerPrintMSBinder +
                          *(longlong *)(*gFingerPrintMSBinder + -0x18)));
      }
      gFingerPrintMSBinder = plVar1;
      if (local_10 != (longlong *)0x0) {
        decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
      }
      _String16(aSStack24);
      if (gFingerPrintMSBinder != (longlong *)0x0) {
        __android_log_print(3,"FingerGoodix","get FingerPrintService ,gFingerPrintMSBinder:%d.",1);
        if (gFingerMSDeathNotifier == (longlong *)0x0) {
          plVar1 = (longlong *)operator_new(0x18);
          RefBase((RefBase *)(plVar1 + 1));
          *plVar1 = 0x13a608;
          plVar1[1] = 0x13a658;
          incStrong(plVar1 + 1);
          if (gFingerMSDeathNotifier != (longlong *)0x0) {
            decStrong((void *)((longlong)gFingerMSDeathNotifier +
                              *(longlong *)(*gFingerMSDeathNotifier + -0x18)));
          }
          pcVar4 = *(code **)(*gFingerPrintMSBinder + 0x30);
          gFingerMSDeathNotifier = plVar1;
        }
        else {
          pcVar4 = *(code **)(*gFingerPrintMSBinder + 0x30);
        }
        plVar1 = gFingerPrintMSBinder;
        local_10 = gFingerMSDeathNotifier;
        incStrong((void *)((longlong)gFingerMSDeathNotifier +
                          *(longlong *)(*gFingerMSDeathNotifier + -0x18)));
        (*pcVar4)(plVar1,&local_10,0,0);
        if (local_10 != (longlong *)0x0) {
          decStrong((void *)((longlong)local_10 + *(longlong *)(*local_10 + -0x18)));
        }
        plVar1 = gFingerPrintMSBinder;
        *in_x8 = gFingerPrintMSBinder;
        if (plVar1 != (longlong *)0x0) {
          incStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
        }
        goto LAB_0010d134;
      }
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      usleep(500000);
    }
    __android_log_print(6,"FingerGoodix","get FingerPrintService ,failed:%d.",0x1f);
    *in_x8 = (longlong *)0x0;
LAB_0010d134:
    if (local_20 != (longlong *)0x0) {
      decStrong((void *)((longlong)local_20 + *(longlong *)(*local_20 + -0x18)));
    }
  }
  else {
    lVar2 = *gFingerPrintMSBinder;
    *in_x8 = gFingerPrintMSBinder;
    incStrong((void *)((longlong)plVar1 + *(longlong *)(lVar2 + -0x18)));
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// check_file_can_read()

undefined8 check_file_can_read(void)

{
  FILE *__stream;
  uint *puVar1;
  
  if (gFpdbPath[0] != '\0') {
    __stream = fopen(gFpdbPath,"r");
    puVar1 = (uint *)__errno();
    __android_log_print(3,"FingerGoodix","check_file_can_read errno:%d",(ulonglong)*puVar1);
    if (__stream != (FILE *)0x0) {
      __android_log_print(3,"FingerGoodix","check_file_can_read OK");
      fclose(__stream);
      return 0;
    }
  }
  return 0xffffffff;
}



undefined8 set_fpdb_path(char *param_1)

{
  size_t sVar1;
  ulonglong uVar2;
  
  sVar1 = strlen(param_1);
  __android_log_print(3,"FingerGoodix","set_fpdb_path source path: %s",param_1);
  memset(gFpdbPath,0,0x100);
  memcpy(gFpdbPath,param_1,sVar1 - 0xb);
  sVar1 = strlen(gFpdbPath);
  uVar2 = (ulonglong)sVar1;
  *(undefined8 *)(gFpdbPath + uVar2 + 0x10) = 0x6c6d782e746e6972;
  gFpdbPath[uVar2 + 0x18] = '\0';
  *(undefined8 *)(gFpdbPath + uVar2) = 0x73676e6974746573;
  *(undefined8 *)(gFpdbPath + uVar2 + 8) = 0x707265676e69665f;
  __android_log_print(3,"FingerGoodix","set_fpdb_path %s",gFpdbPath);
  return 0;
}



void wait_for_boot_complete(void)

{
  ulonglong uVar1;
  
  __android_log_print(3,"FingerGoodix","wait_for_boot_complete,%d",(ulonglong)gIsBootCompleted);
  if (gIsBootCompleted != 1) {
    while( true ) {
      uVar1 = property_get_int32("sys.boot_completed",0);
      __android_log_print(3,"FingerGoodix","wait_for_boot_complete,boot_complete_value:%d",
                          uVar1 & 0xffffffff);
      if ((int)uVar1 == 1) break;
      usleep(1000000);
    }
    __android_log_print(3,"FingerGoodix","wait_for_boot_complete OK");
    gIsBootCompleted = 1;
  }
  return;
}



undefined8 clear_check_when_set_active_group(void)

{
  DAT_0013b580 = 0;
  return 0;
}



void checkConsistence(void *param_1)

{
  pthread_t local_48 [2];
  byte abStack64 [56];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","gCheckFingerprintidsConsistence:%d",(ulonglong)DAT_0013b580)
  ;
  if (DAT_0013b580 != 1) {
    pthread_attr_init((pthread_attr_t *)abStack64);
    pthread_attr_setdetachstate((pthread_attr_t *)abStack64,1);
    pthread_create(local_48,(pthread_attr_t *)abStack64,deleteThread,param_1);
    pthread_join(local_48[0],(void **)0x0);
  }
  if (local_8 == __stack_chk_guard) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// android::sp<android::IBinder>::operator=(android::sp<android::IBinder> const&)

sp_android__IBinder_ * __thiscall operator_(sp_android__IBinder_ *this,sp *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)param_1;
  if (plVar2 != (longlong *)0x0) {
    incStrong((void *)((longlong)plVar2 + *(longlong *)(*plVar2 + -0x18)));
  }
  plVar1 = *(longlong **)this;
  if (plVar1 != (longlong *)0x0) {
    decStrong((void *)((longlong)plVar1 + *(longlong *)(*plVar1 + -0x18)));
  }
  *(longlong **)this = plVar2;
  return this;
}



// WARNING: Removing unreachable block (ram,0x0010d6b0)
// WARNING: Removing unreachable block (ram,0x0010d6bc)
// getFrameworkFingerID(int*, int)

ulonglong getFrameworkFingerID(int *param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  String16 aSStack224 [8];
  Parcel aPStack216 [104];
  longlong *local_70 [13];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if (gPmsBinder == (longlong *)0x0) {
    FUN_0010cf34();
    operator_((sp_android__IBinder_ *)&gPmsBinder,(sp *)local_70);
    if (local_70[0] != (longlong *)0x0) {
      decStrong((void *)((longlong)local_70[0] + *(longlong *)(*local_70[0] + -0x18)));
    }
  }
  if (gFingerPrintMSBinder == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    __android_log_print(3,"FingerGoodix","Check finger print");
    Parcel(aPStack216);
    Parcel((Parcel *)local_70);
    String16(aSStack224,"android.hardware.fingerprint.IFingerprintService");
    writeInterfaceToken((String16 *)aPStack216);
    _String16(aSStack224);
    writeInt32((int)aPStack216);
    String16(aSStack224,"com.android.settings");
    writeString16((String16 *)aPStack216);
    _String16(aSStack224);
    (**(code **)(*gPmsBinder + 0x28))(gPmsBinder,7,aPStack216,local_70,0);
    uVar1 = dataSize();
    __android_log_print(3,"FingerGoodix","getFrameworkFingerID reply size: %d",uVar1);
    uVar2 = readExceptionCode();
    uVar2 = uVar2 & 0xffffffff;
    __android_log_print(3,"FingerGoodix","getFrameworkFingerID ret: %d",uVar2);
    if ((int)uVar2 != 0) {
      readString16();
      _String16(aSStack224);
    }
    readInt32((int *)local_70);
    __android_log_print(3,"FingerGoodix","final finger state: %d",uVar2);
    _Parcel((Parcel *)local_70);
    _Parcel(aPStack216);
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Could not reconcile some variable overlaps
// removeSettingFingerprintId(int, int)

undefined8 removeSettingFingerprintId(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  String16 aSStack248 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  Parcel aPStack216 [104];
  longlong *local_70 [13];
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (gPmsBinder == (longlong *)0x0) {
    FUN_0010cf34();
    operator_((sp_android__IBinder_ *)&gPmsBinder,(sp *)local_70);
    if (local_70[0] != (longlong *)0x0) {
      decStrong((void *)((longlong)local_70[0] + *(longlong *)(*local_70[0] + -0x18)));
    }
  }
  if (gFingerPrintMSBinder != 0) {
    __android_log_print(3,"FingerGoodix","removeSettingFingerprintId");
    iVar2 = 4;
    Parcel(aPStack216);
    Parcel((Parcel *)local_70);
    String16(aSStack248,"android.hardware.fingerprint.IFingerprintService");
    writeInterfaceToken((String16 *)aPStack216);
    _String16(aSStack248);
    writeStrongBinder((sp *)aPStack216);
    iVar1 = (int)aPStack216;
    writeInt32(iVar1);
    writeInt32(iVar1);
    writeInt32(iVar1);
    (**(code **)(*gPmsBinder + 0x28))(gPmsBinder,5,aPStack216,local_70,0);
    do {
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      iVar1 = getFrameworkFingerID((int *)&local_f0,gCurrentActiveGroup);
      if (iVar1 != -1) {
        if (((((int)local_f0 != param_1) && (local_f0._4_4_ != param_1)) &&
            ((int)local_e8 != param_1)) && ((local_e8._4_4_ != param_1 && (local_e0 != param_1)))) {
          __android_log_print(3,"FingerGoodix","removeSettingFingerprintId delete sucess");
          break;
        }
        __android_log_print(3,"FingerGoodix","removeSettingFingerprintId delete continue:%d",
                            (ulonglong)(uint)param_1);
      }
      usleep(500000);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _Parcel((Parcel *)local_70);
    _Parcel(aPStack216);
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return 0;
}



// checkFrameworkToHal(st_fingerprint_hal_device_t*)

ulonglong checkFrameworkToHal(st_fingerprint_hal_device_t *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  gCurrentFingeridsNum = *(uint *)(param_1 + 0x1a0);
  lVar3 = 0;
  DAT_0013b580 = 1;
  __android_log_print(3,"FingerGoodix","checkFrameworkToHal,check_consistence-->current_num:%d",
                      (ulonglong)gCurrentFingeridsNum);
  do {
    uVar1 = *(uint *)(gIds + lVar3);
    __android_log_print(3,"FingerGoodix","checkFrameworkToHal,check_consistence:%d\n",
                        (ulonglong)uVar1);
    uVar2 = *(uint *)(gIds + lVar3);
    if (uVar2 == 0) break;
    if ((((((uVar1 == *(uint *)(param_1 + 0x138)) && (*(uint *)(param_1 + 0x138) != 0)) ||
          ((uVar1 == *(uint *)(param_1 + 0x13c) && (*(uint *)(param_1 + 0x13c) != 0)))) ||
         ((uVar1 == *(uint *)(param_1 + 0x140) && (*(uint *)(param_1 + 0x140) != 0)))) ||
        ((uVar1 == *(uint *)(param_1 + 0x144) && (*(uint *)(param_1 + 0x144) != 0)))) ||
       ((uVar1 == *(uint *)(param_1 + 0x148) && (*(uint *)(param_1 + 0x148) != 0)))) {
      gIsConsistence = 1;
    }
    __android_log_print(3,"FingerGoodix","checkFrameworkToHal,is_consistence:%d",
                        (ulonglong)gIsConsistence);
    uVar2 = gIsConsistence;
    if (gIsConsistence == 0) {
      removeSettingFingerprintId(uVar1,gCurrentActiveGroup);
      uVar2 = usleep(500000);
    }
    lVar3 = lVar3 + 4;
    gIsConsistence = 0;
  } while (lVar3 != 0x14);
  return (ulonglong)uVar2;
}



// checkHalToFramework(st_fingerprint_hal_device_t*)

ulonglong checkHalToFramework(st_fingerprint_hal_device_t *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  DAT_0013b580 = 1;
  gIds._0_8_ = 0;
  gIds._8_8_ = 0;
  gIds._16_4_ = 0;
  uVar2 = getFrameworkFingerID((int *)gIds,gCurrentActiveGroup);
  if ((int)uVar2 != -1) {
    gCurrentFingeridsNum = *(uint *)(param_1 + 0x1a0);
    puVar3 = (uint *)(param_1 + 0x138);
    __android_log_print(3,"FingerGoodix","checkHalToFramework,check_consistence-->current_num:%d",
                        (ulonglong)gCurrentFingeridsNum);
    do {
      uVar1 = *puVar3;
      uVar2 = __android_log_print(3,"FingerGoodix","checkHalToFramework,check_consistence:%d\n",
                                  (ulonglong)uVar1);
      if (uVar1 != 0) {
        if ((((((uVar1 == gIds._0_4_) && (gIds._0_4_ != 0)) ||
              ((uVar1 == gIds._4_4_ && (gIds._4_4_ != 0)))) ||
             ((uVar1 == gIds._8_4_ && (gIds._8_4_ != 0)))) ||
            ((uVar1 == gIds._12_4_ && (gIds._12_4_ != 0)))) ||
           ((uVar1 == gIds._16_4_ && (gIds._16_4_ != 0)))) {
          gIsConsistence = 1;
        }
        __android_log_print(3,"FingerGoodix","checkHalToFramework,is_consistence:%d",
                            (ulonglong)gIsConsistence);
        if (gIsConsistence == 0) {
          removeSettingFingerprintId(uVar1,gCurrentActiveGroup);
          gIsConsistence = usleep(500000);
        }
        uVar2 = (ulonglong)gIsConsistence;
        gIsConsistence = 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (uint *)(param_1 + 0x14c));
  }
  return uVar2;
}



// deleteThread(void*)

undefined8 deleteThread(void *param_1)

{
  int iVar1;
  
  __android_log_print(3,"FingerGoodix","createDeleteThread");
  wait_for_boot_complete();
  iVar1 = getFrameworkFingerID((int *)gIds,gCurrentActiveGroup);
  if (iVar1 != -1) {
    checkFrameworkToHal((st_fingerprint_hal_device_t *)param_1);
    checkHalToFramework((st_fingerprint_hal_device_t *)param_1);
    __android_log_print(3,"FingerGoodix","check_consistence:end");
    return 0;
  }
  DAT_0013b580 = 1;
  return 0;
}



undefined8 msgqueue_open(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  __android_log_print(3,"FingerGoodix","%s:start message queue open","msgqueue_open");
  puVar1 = (undefined8 *)malloc(0x58);
  if (puVar1 == (undefined8 *)0x0) {
    __android_log_print(6,"FingerGoodix","%s:alloc message manage queue struct error",
                        "msgqueue_open");
    uVar2 = 0xfffffff4;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    pthread_mutex_init((pthread_mutex_t *)((longlong)puVar1 + 4),(pthread_mutexattr_t *)0x0);
    sem_init((sem_t *)((longlong)puVar1 + 0x2c),0,0);
    *(undefined8 **)param_1 = puVar1;
    *(undefined4 *)puVar1 = 0x4d414751;
    uVar2 = 0;
    puVar1[8] = 0;
    *(undefined8 **)(puVar1 + 9) = puVar1 + 8;
  }
  return uVar2;
}



undefined8 msg_send(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4,size_t param_5)

{
  undefined4 *__ptr;
  void *__dest;
  longlong lVar1;
  void **ppvVar2;
  
  if ((0 < (int)param_5 && param_4 == (void *)0x0) || ((int)param_5 < 0)) {
    __android_log_print(6,"FingerGoodix","%s:message parameter error","msg_send");
    return 0xfffffff2;
  }
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d414751)) {
    __android_log_print(6,"FingerGoodix","%s:message queue handle = %p error","msg_send",param_1);
    return 0xfffffff2;
  }
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    __android_log_print(6,"FingerGoodix","%s:malloc message item error","msg_send");
    return 0xfffffff4;
  }
  *__ptr = param_2;
  __ptr[1] = param_3;
  if (param_5 == 0) {
    *(undefined8 *)(__ptr + 2) = 0;
    __ptr[4] = 0;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  else {
    __dest = malloc(param_5);
    if (__dest == (void *)0x0) {
      __android_log_print(6,"FingerGoodix","%s:malloc message buffer error","msg_send");
      free(__ptr);
      return 0xfffffff4;
    }
    memcpy(__dest,param_4,param_5);
    *(void **)(__ptr + 2) = __dest;
    __ptr[4] = param_5;
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 1));
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(__ptr + 6) = 0;
    *(undefined4 **)(param_1 + 0x12) = __ptr + 6;
    *(undefined4 **)(param_1 + 0x10) = __ptr;
    *(int **)(__ptr + 8) = param_1 + 0x10;
  }
  else {
    do {
      if (*(int *)(lVar1 + 4) < (int)__ptr[1]) {
        *(undefined8 *)(__ptr + 8) = *(undefined8 *)(lVar1 + 0x20);
        *(longlong *)(__ptr + 6) = lVar1;
        *(undefined4 **)*(void ***)(lVar1 + 0x20) = __ptr;
        *(undefined4 **)(lVar1 + 0x20) = __ptr + 6;
        goto LAB_0010dfe0;
      }
      lVar1 = *(longlong *)(lVar1 + 0x18);
    } while (lVar1 != 0);
    ppvVar2 = *(void ***)(param_1 + 0x12);
    *(undefined8 *)(__ptr + 6) = 0;
    *(void ***)(__ptr + 8) = ppvVar2;
    *(undefined4 **)ppvVar2 = __ptr;
    *(undefined4 **)(param_1 + 0x12) = __ptr + 6;
  }
LAB_0010dfe0:
  __android_log_print(3,"FingerGoodix","%s:add a message item to message queue","msg_send");
  param_1[0x14] = param_1[0x14] + 1;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 1));
  sem_post((sem_t *)(param_1 + 0xb));
  return 0;
}



ulonglong msg_receive(int *param_1,undefined4 *param_2,void *param_3,uint param_4)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined4 *__ptr;
  
  if ((param_3 == (void *)0x0) || (param_4 != 0)) {
    if (param_2 != (undefined4 *)0x0) {
      if ((param_1 == (int *)0x0) || (*param_1 != 0x4d414751)) {
        __android_log_print(6,"FingerGoodix","%s:message queue handle = %p error","msg_receive",
                            param_1);
        return 0xfffffff2;
      }
      __mutex = (pthread_mutex_t *)(param_1 + 1);
      __android_log_print(3,"FingerGoodix","%s:wait a message","msg_receive");
      sem_wait((sem_t *)(param_1 + 0xb));
      pthread_mutex_lock(__mutex);
      iVar1 = param_1[0x14];
      if ((0 < iVar1) && (__ptr = *(undefined4 **)(param_1 + 0x10), __ptr != (undefined4 *)0x0)) {
        lVar2 = *(longlong *)(__ptr + 6);
        plVar3 = *(longlong **)(__ptr + 8);
        if (lVar2 == 0) {
          *(longlong **)(param_1 + 0x12) = plVar3;
        }
        else {
          *(longlong **)(lVar2 + 0x20) = plVar3;
          plVar3 = *(longlong **)(__ptr + 8);
        }
        *plVar3 = lVar2;
        param_1[0x14] = iVar1 + -1;
        pthread_mutex_unlock(__mutex);
        __android_log_print(3,"FingerGoodix","%s:receive a message item from queue","msg_receive");
        if ((int)__ptr[4] < (int)param_4) {
          param_4 = __ptr[4];
        }
        __android_log_print(3,"FingerGoodix","%s:message copy length = %d","msg_receive",
                            (ulonglong)param_4);
        if ((0 < (int)param_4) && (param_3 != (void *)0x0)) {
          memcpy(param_3,*(void **)(__ptr + 2),param_4);
        }
        if (*(void **)(__ptr + 2) != (void *)0x0) {
          free(*(void **)(__ptr + 2));
        }
        *param_2 = *__ptr;
        free(__ptr);
        return (ulonglong)param_4;
      }
      __android_log_print(6,"FingerGoodix","%s:message queue error","msg_receive");
      pthread_mutex_unlock(__mutex);
      return 0xfffffff0;
    }
    pcVar4 = "%s:message type point is null";
  }
  else {
    pcVar4 = "%s:message buffer parameter error";
  }
  __android_log_print(6,"FingerGoodix",pcVar4,"msg_receive");
  return 0xfffffff2;
}



undefined8 msgqueue_close(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *__ptr;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x4d414751)) {
    while (__ptr = *(void **)(param_1 + 0x10), __ptr != (void *)0x0) {
      lVar2 = *(longlong *)((longlong)__ptr + 0x18);
      plVar3 = *(longlong **)((longlong)__ptr + 0x20);
      if (lVar2 == 0) {
        *(longlong **)(param_1 + 0x12) = plVar3;
      }
      else {
        *(longlong **)(lVar2 + 0x20) = plVar3;
        plVar3 = *(longlong **)((longlong)__ptr + 0x20);
      }
      iVar1 = *(int *)((longlong)__ptr + 0x10);
      *plVar3 = lVar2;
      if ((iVar1 != 0) && (*(void **)((longlong)__ptr + 8) != (void *)0x0)) {
        free(*(void **)((longlong)__ptr + 8));
      }
      free(__ptr);
    }
    sem_destroy((sem_t *)(param_1 + 0xb));
    pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
    free(param_1);
    return 0;
  }
  __android_log_print(6,"FingerGoodix","%s:message queue handle = %p error","msgqueue_close",param_1
                     );
  return 0xfffffff2;
}



undefined8 dump_msgqueue(int *param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d414751)) {
    __android_log_print(6,"FingerGoodix","%s:message queue handle = %p error","dump_msgqueue",
                        param_1);
    uVar1 = 0xfffffff2;
  }
  else {
    uVar1 = __android_log_print(3,"FingerGoodix","%s:message queue item num is %d\n","dump_msgqueue"
                                ,(ulonglong)(uint)param_1[0x14]);
    puVar2 = *(uint **)(param_1 + 0x10);
    if (puVar2 != (uint *)0x0) {
      do {
        __android_log_print(3,"FingerGoodix","%s:message  item addre =  %p\n","dump_msgqueue",puVar2
                           );
        __android_log_print(3,"FingerGoodix","%s:message  msg_type =  %d\n","dump_msgqueue",
                            (ulonglong)*puVar2);
        __android_log_print(3,"FingerGoodix","%s:message  msg_prio =  %d\n","dump_msgqueue",
                            (ulonglong)puVar2[1]);
        __android_log_print(3,"FingerGoodix","%s:message  msg_param =  %p\n","dump_msgqueue",
                            *(undefined8 *)(puVar2 + 2));
        uVar1 = __android_log_print(3,"FingerGoodix","%s:message  param_size =  %d\n",
                                    "dump_msgqueue",(ulonglong)puVar2[4]);
        puVar2 = *(uint **)(puVar2 + 6);
      } while (puVar2 != (uint *)0x0);
      return uVar1;
    }
  }
  return uVar1;
}



undefined8 FUN_0010e5c0(int *param_1)

{
  ulonglong uVar1;
  undefined auStack28 [4];
  longlong local_18;
  code *local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x574f524b)) {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar1 = msg_receive(*(undefined8 *)(param_1 + 2),auStack28,&local_18,0x10);
          uVar1 = uVar1 & 0xffffffff;
          __android_log_print(3,"FingerGoodix","%s:receive a message msg_len = %d",
                              "worker_thread_loop",uVar1);
          if ((int)uVar1 == 0x10) break;
          __android_log_print(6,"FingerGoodix","%s:receive message error msg_len = %d",
                              "worker_thread_loop",uVar1);
        }
        if (local_10 == (code *)0x0) break;
        uVar1 = (*local_10)(local_18);
        __android_log_print(3,"FingerGoodix","%s:callback func %p return value = %d",
                            "worker_thread_loop",local_10,uVar1 & 0xffffffff);
      }
      if (local_18 == 0x45584954) break;
      __android_log_print(3,"FingerGoodix","%s:exec func is null","worker_thread_loop");
    }
    __android_log_print(3,"FingerGoodix","%s:worker thread exit","worker_thread_loop");
    msgqueue_close(*(undefined8 *)(param_1 + 2));
    free(param_1);
                    // WARNING: Subroutine does not return
    pthread_exit((void *)0x0);
  }
  __android_log_print(6,"FingerGoodix","%s:worker handle error,worker thread exit",
                      "worker_thread_loop");
  if (local_8 == __stack_chk_guard) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulonglong gf_worker_thread_create(undefined8 *param_1)

{
  uint uVar1;
  undefined4 *__ptr;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  __android_log_print(3,"FingerGoodix","%s:start worker thread create","gf_worker_thread_create");
  __ptr = (undefined4 *)malloc(0x18);
  if (__ptr == (undefined4 *)0x0) {
    __android_log_print(6,"FingerGoodix","%s:alloc worker  handle struct error",
                        "gf_worker_thread_create");
    uVar2 = 0xfffffff4;
  }
  else {
    *__ptr = 0x574f524b;
    uVar2 = msgqueue_open(&local_18);
    uVar2 = uVar2 & 0xffffffff;
    if ((int)uVar2 < 0) {
      __android_log_print(6,"FingerGoodix","%s:creat message queue error %d",
                          "gf_worker_thread_create",uVar2);
      free(__ptr);
    }
    else {
      uVar1 = pthread_create((pthread_t *)&local_10,(pthread_attr_t *)0x0,FUN_0010e5c0,__ptr);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        uVar2 = 0;
        *(undefined8 *)(__ptr + 2) = local_18;
        *(undefined8 *)(__ptr + 4) = local_10;
        *(undefined4 **)param_1 = __ptr;
      }
      else {
        __android_log_print(6,"FingerGoodix","%s:Failed to create handle message loop thread.",
                            "gf_worker_thread_create");
        msgqueue_close(local_18);
        free(__ptr);
      }
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulonglong gf_send_callback_msg(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x574f524b)) {
    __android_log_print(6,"FingerGoodix","%s:worker thread not init,or worker thread is closed",
                        "gf_send_callback_msg");
    uVar2 = 0xffffffff;
  }
  else {
    __android_log_print(3,"FingerGoodix","%s:param = %p,callback_func = %p\n","gf_send_callback_msg"
                        ,param_2,param_3);
    local_18 = param_2;
    local_10 = param_3;
    uVar1 = msg_send(*(undefined8 *)(param_1 + 2),0,0,&local_18,0x10);
    uVar2 = 0;
    if (uVar1 != 0) {
      __android_log_print(6,"FingerGoodix","%s:send exec message error\n","gf_send_callback_msg");
      uVar2 = (ulonglong)uVar1;
    }
  }
  if (local_8 == __stack_chk_guard) {
    return uVar2;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulonglong gf_worker_thread_destroy(int *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 local_18;
  undefined8 local_10;
  longlong local_8;
  
  local_8 = __stack_chk_guard;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x574f524b)) {
    __android_log_print(6,"FingerGoodix","%s:worker thread not init,or worker thread is closed",
                        "gf_worker_thread_destroy");
    uVar2 = 0xffffffff;
  }
  else {
    local_10 = 0;
    local_18 = 0x45584954;
    uVar1 = msg_send(*(undefined8 *)(param_1 + 2),0,1,&local_18,0x10);
    uVar2 = uVar1 & 0xffffffff;
    if ((int)uVar1 != 0) {
      __android_log_print(6,"FingerGoodix","%s:send exec message error\n","gf_worker_thread_destroy"
                         );
    }
    __android_log_print(3,"FingerGoodix","%s:worker_thread exit ok\n","gf_worker_thread_destroy");
  }
  if (local_8 != __stack_chk_guard) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void _ZdlPv(void *__ptr)

{
  free(__ptr);
  return;
}



// operator new(unsigned long)

void * operator_new(ulong param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    pcVar2 = (code *)get_new_handler();
    if (pcVar2 == (code *)0x0) break;
    (*pcVar2)();
    pvVar1 = malloc(param_1);
  }
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = 0x13a6c0;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar3,&typeinfo,_bad_alloc);
}



void __cxa_pure_virtual(void)

{
  write(2,"pure virtual method called\n",0x1b);
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_deleted_virtual(void)

{
  write(2,"deleted virtual method called\n",0x1e);
                    // WARNING: Subroutine does not return
  terminate();
}



// std::bad_alloc::what() const

char * what(void)

{
  return "std::bad_alloc";
}



// std::bad_alloc::~bad_alloc()

void __thiscall _bad_alloc(bad_alloc *this)

{
  *(undefined8 *)this = 0x13a6c0;
  _exception((exception *)this);
  return;
}



// std::bad_alloc::~bad_alloc()

void __thiscall _bad_alloc(bad_alloc *this)

{
  _bad_alloc(this);
  _ZdlPv(this);
  return;
}



void FUN_0010ec94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = 0x1397c0;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_0013a6e0,&LAB_0010ec14);
}



void FUN_0010ecc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = 0x1397f0;
                    // WARNING: Subroutine does not return
  __cxa_throw(puVar1,&PTR_PTR____si_class_type_info_0013a6f8,&LAB_0010ec24);
}



undefined8 * __cxa_allocate_exception(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar4 = (undefined8 *)malloc((size_t)(param_1 + 0x80U));
  if (puVar4 != (undefined8 *)0x0) {
LAB_0010ed18:
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    return puVar4 + 0x10;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0013d2f0);
  if (iVar2 == 0) {
    if (param_1 + 0x80U < 0x401) {
      uVar5 = 0;
      uVar3 = DAT_0014d320;
      do {
        if ((uVar3 & 1) == 0) {
          uVar3 = 1 << (uVar5 & 0x3f) | DAT_0014d320;
          puVar4 = &DAT_0013d320 + uVar5 * 0x80;
          DAT_0014d320 = uVar3;
          iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013d2f0);
          if (iVar2 == 0) goto LAB_0010ed18;
          FUN_0010ecc4();
          if (uVar3 != 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
            _Unwind_Resume();
          }
          goto LAB_0010ede4;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar1;
        uVar3 = uVar3 >> 1;
      } while (uVar1 != 0x40);
    }
                    // WARNING: Subroutine does not return
    terminate();
  }
  FUN_0010ec94();
LAB_0010ede4:
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected();
}



void FUN_0010ede8(undefined8 param_1,longlong param_2)

{
  if (param_2 != -1) {
                    // WARNING: Subroutine does not return
    _Unwind_Resume();
  }
                    // WARNING: Subroutine does not return
  __cxa_call_unexpected();
}



// WARNING: Removing unreachable block (ram,0x0010ee78)

void __cxa_free_exception(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_0013d320;
  if ((param_1 < &DAT_0013d320) || ((undefined8 *)0x14d31f < param_1)) {
    free(param_1 + -0x10);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0013d2f0);
  if (iVar1 == 0) {
    puVar2 = DAT_0014d320;
    DAT_0014d320 = (undefined8 *)
                   ((ulonglong)DAT_0014d320 &
                   (1 << ((ulonglong)(param_1 + -0x27a64) >> 10 & 0x3f) ^ 0xffffffffffffffffU));
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013d2f0);
    if (iVar1 == 0) {
      return;
    }
    FUN_0010ecc4();
  }
  else {
    FUN_0010ec94();
  }
  if (puVar2 == (undefined8 *)0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



undefined8 * __cxa_allocate_dependent_exception(undefined8 param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)malloc(0x70);
  if (puVar4 != (undefined8 *)0x0) {
LAB_0010eed4:
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    return puVar4;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0013d2f0);
  if (iVar2 == 0) {
    param_2 = 0;
    uVar3 = DAT_0013b6e0;
    while ((uVar3 & 1) != 0) {
      uVar1 = (int)param_2 + 1;
      param_2 = (ulonglong)uVar1;
      uVar3 = uVar3 >> 1;
      if (uVar1 == 0x40) {
                    // WARNING: Subroutine does not return
        terminate();
      }
    }
    DAT_0013b6e0 = 1 << (param_2 & 0x3f) | DAT_0013b6e0;
    puVar4 = &DAT_0013b6f0 + param_2 * 0xe;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013d2f0);
    if (iVar2 == 0) goto LAB_0010eed4;
    FUN_0010ecc4();
  }
  FUN_0010ec94();
  if (param_2 == 0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// WARNING: Removing unreachable block (ram,0x0010f040)

void __cxa_free_dependent_exception(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 < &DAT_0013b6f0) || ((undefined8 *)0x13d2ef < param_1)) {
    free(param_1);
    return;
  }
  pcVar2 = pthread_create;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0013d2f0);
  if (iVar1 == 0) {
    pcVar2 = DAT_0013b6e0;
    DAT_0013b6e0 = (code *)((ulonglong)DAT_0013b6e0 &
                           (1 << (SUB168(ZEXT416((int)param_1 - 0x13b6f0U >> 4) *
                                         ZEXT816(0x2492492492492494) >> 0x40,0) & 0x3f) ^
                           0xffffffffffffffffU));
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013d2f0);
    if (iVar1 == 0) {
      return;
    }
    FUN_0010ecc4();
  }
  else {
    FUN_0010ec94();
  }
  if (pcVar2 == (code *)0xffffffffffffffff) {
                    // WARNING: Subroutine does not return
    __cxa_call_unexpected();
  }
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



// std::exception::~exception()

void __thiscall _exception(exception *this)

{
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall _bad_exception(bad_exception *this)

{
  *(undefined8 *)this = 0x13a7a0;
  _exception((exception *)this);
  return;
}



// std::exception::what() const

char * what(void)

{
  return "std::exception";
}



// std::bad_exception::what() const

char * what(void)

{
  return "std::bad_exception";
}



// std::exception::~exception()

void __thiscall _exception(exception *this)

{
  _exception(this);
  _ZdlPv(this);
  return;
}



// std::bad_exception::~bad_exception()

void __thiscall _bad_exception(bad_exception *this)

{
  _bad_exception(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall ___forced_unwind(__forced_unwind *this)

{
  return;
}



// __cxxabiv1::__forced_unwind::~__forced_unwind()

void __thiscall ___forced_unwind(__forced_unwind *this)

{
  ___forced_unwind(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall ___foreign_exception(__foreign_exception *this)

{
  return;
}



// __cxxabiv1::__foreign_exception::~__foreign_exception()

void __thiscall ___foreign_exception(__foreign_exception *this)

{
  ___foreign_exception(this);
  _ZdlPv(this);
  return;
}



void FUN_0010f148(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar4 & 0x3f;
    uVar1 = (int)uVar4 + 7;
    uVar4 = (ulonglong)uVar1;
    uVar5 = uVar5 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar5 = -1 << (uVar4 & 0x3f) | uVar5;
  }
  *param_2 = uVar5;
  return;
}



ulonglong * FUN_0010f188(byte param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *local_8;
  
  if (param_1 != 0x50) {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      puVar3 = param_3 + 1;
      local_8 = (ulonglong *)*param_3;
      break;
    case 1:
      local_8 = (ulonglong *)0x0;
      uVar5 = 0;
      puVar4 = param_3;
      do {
        puVar3 = (ulonglong *)((longlong)puVar4 + 1);
        bVar1 = *(byte *)puVar4;
        uVar2 = uVar5 & 0x3f;
        uVar5 = (ulonglong)((int)uVar5 + 7);
        local_8 = (ulonglong *)((ulonglong)local_8 | ((ulonglong)bVar1 & 0x7f) << uVar2);
        puVar4 = puVar3;
      } while ((char)bVar1 < '\0');
      break;
    case 2:
      puVar3 = (ulonglong *)((longlong)param_3 + 2);
      local_8 = (ulonglong *)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      puVar3 = (ulonglong *)((longlong)param_3 + 4);
      local_8 = (ulonglong *)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      puVar3 = (ulonglong *)FUN_0010f148(param_3,&local_8);
      break;
    case 10:
      puVar3 = (ulonglong *)((longlong)param_3 + 2);
      local_8 = (ulonglong *)(longlong)*(short *)param_3;
      break;
    case 0xb:
      puVar3 = (ulonglong *)((longlong)param_3 + 4);
      local_8 = (ulonglong *)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong *)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong *)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong *)*local_8;
      }
    }
    *(ulonglong **)param_4 = local_8;
    return puVar3;
  }
  puVar3 = (ulonglong *)((longlong)param_3 + 7U & 0xfffffffffffffff8);
  *param_4 = *puVar3;
  return puVar3 + 1;
}



undefined8 FUN_0010f298(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 == 0xff) {
    return 0;
  }
  bVar1 = param_1 & 0x70;
  if (bVar1 == 0x20) {
    uVar2 = _Unwind_GetTextRelBase(param_2);
    return uVar2;
  }
  if (bVar1 < 0x21) {
    if ((param_1 & 0x70) == 0) {
      return 0;
    }
    if (bVar1 == 0x10) {
      return 0;
    }
  }
  else {
    if (bVar1 == 0x40) {
      uVar2 = _Unwind_GetRegionStart(param_2);
      return uVar2;
    }
    if (bVar1 == 0x50) {
      return 0;
    }
    if (bVar1 == 0x30) {
      uVar2 = _Unwind_GetDataRelBase(param_2);
      return uVar2;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_0010f314(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _Unwind_GetRegionStart();
  }
  *param_3 = uVar3;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    param_3[1] = uVar3;
    pbVar4 = param_2 + 2;
    bVar1 = param_2[1];
    *(byte *)(param_3 + 5) = bVar1;
  }
  else {
    uVar3 = FUN_0010f298((ulonglong)bVar1,param_1);
    pbVar5 = (byte *)FUN_0010f188((ulonglong)bVar1,uVar3,param_2 + 1,param_3 + 1);
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    *(byte *)(param_3 + 5) = bVar1;
  }
  if (bVar1 == 0xff) {
    param_3[3] = 0;
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    pbVar5 = pbVar4;
    do {
      pbVar4 = pbVar5 + 1;
      bVar1 = *pbVar5;
      uVar2 = uVar6 & 0x3f;
      uVar6 = (ulonglong)((int)uVar6 + 7);
      uVar7 = uVar7 | ((ulonglong)bVar1 & 0x7f) << uVar2;
      pbVar5 = pbVar4;
    } while ((char)bVar1 < '\0');
    *(byte **)(param_3 + 3) = pbVar4 + uVar7;
  }
  uVar7 = 0;
  *(byte *)((longlong)param_3 + 0x29) = *pbVar4;
  uVar6 = 0;
  pbVar4 = pbVar4 + 1;
  do {
    pbVar5 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulonglong)((int)uVar6 + 7);
    uVar7 = uVar7 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    pbVar4 = pbVar5;
  } while ((char)bVar1 < '\0');
  *(byte **)(param_3 + 4) = pbVar5 + uVar7;
  return;
}



ulonglong FUN_0010f420(longlong param_1,longlong *param_2,longlong **param_3,ulonglong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong **pplVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong **local_8;
  
  pbVar8 = (byte *)(*(longlong *)(param_1 + 0x18) + ~param_4);
  do {
    uVar6 = 0;
    uVar5 = 0;
    pbVar8 = pbVar8;
    do {
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
      uVar2 = uVar5 & 0x3f;
      uVar5 = (ulonglong)((int)uVar5 + 7);
      uVar6 = uVar6 | ((ulonglong)bVar1 & 0x7f) << uVar2;
      pbVar8 = pbVar8;
    } while ((char)bVar1 < '\0');
    if (uVar6 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == 0xff) {
      lVar7 = 0;
    }
    else {
      switch((uint)bVar1 & 7) {
      case 0:
      case 4:
        lVar7 = uVar6 * -8;
        break;
      default:
                    // WARNING: Subroutine does not return
        abort();
      case 2:
        lVar7 = uVar6 * -2;
        break;
      case 3:
        lVar7 = uVar6 * -4;
      }
    }
    FUN_0010f188((ulonglong)bVar1,*(undefined8 *)(param_1 + 0x10),
                 *(longlong *)(param_1 + 0x18) + lVar7,&local_8);
    pplVar3 = local_8;
    local_8 = param_3;
    uVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if ((uVar4 & 0xff) != 0) {
      local_8 = (longlong **)*local_8;
    }
    uVar5 = (*(code *)(*pplVar3)[4])(pplVar3,param_2,&local_8,1);
  } while ((int)(uVar5 & 0xff) == 0);
  return uVar5 & 0xff;
}



undefined8
__gxx_personality_v0
          (int param_1,uint param_2,longlong param_3,ulonglong *param_4,undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FuncDef11 *pFVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined auStack288 [16];
  undefined8 uStack272;
  ulonglong **local_88;
  undefined *local_80;
  uint local_78;
  int local_74;
  undefined **local_70;
  ulonglong **local_68;
  ulonglong local_60;
  byte *local_58;
  int local_4c;
  int local_48;
  undefined4 uStack68;
  longlong local_40;
  ulonglong **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  byte *local_10;
  byte local_8;
  byte local_7;
  
  local_4c = 0;
  if (param_1 != 1) {
    return 3;
  }
  bVar1 = 1 < param_3 + 0xb8b1aabcbcd4d500U;
  if ((param_2 == 6) <= bVar1) {
    local_60 = _Unwind_GetLanguageSpecificData(param_5);
    if (local_60 == 0) {
      return 8;
    }
    local_58 = (byte *)FUN_0010f314(param_5,local_60,&local_30);
    local_20 = FUN_0010f298((ulonglong)local_8,param_5);
    lVar6 = _Unwind_GetIPInfo(param_5,&local_4c);
    uVar15 = lVar6 - (ulonglong)(local_4c == 0);
    if (local_58 < local_10) {
      pbVar9 = local_58;
      do {
        uVar5 = (ulonglong)local_7;
        local_58 = pbVar9;
        uVar13 = FUN_0010f298(uVar5,0);
        local_58 = (byte *)FUN_0010f188(uVar5,uVar13,local_58,&local_48);
        uVar5 = (ulonglong)local_7;
        uVar13 = FUN_0010f298(uVar5,0);
        local_58 = (byte *)FUN_0010f188(uVar5,uVar13,local_58,&local_40);
        uVar5 = (ulonglong)local_7;
        uVar13 = FUN_0010f298(uVar5,0);
        pbVar9 = (byte *)FUN_0010f188(uVar5,uVar13,local_58,&local_38);
        uVar10 = 0;
        uVar5 = 0;
        do {
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar9;
          uVar11 = uVar5 & 0x3f;
          uVar5 = (ulonglong)((int)uVar5 + 7);
          uVar10 = uVar10 | ((ulonglong)bVar2 & 0x7f) << uVar11;
          pbVar9 = pbVar9;
        } while ((char)bVar2 < '\0');
        uVar5 = CONCAT44(uStack68,local_48) + local_30;
        if (uVar15 < uVar5) break;
        if (uVar15 < uVar5 + local_40) {
          if (local_38 == (ulonglong **)0x0) {
            return 8;
          }
          uVar15 = (longlong)local_38 + local_28;
          if (uVar10 == 0) {
            if (uVar15 == 0) {
              return 8;
            }
          }
          else {
            if (uVar15 == 0) {
              return 8;
            }
            local_10 = local_10 + (uVar10 - 1);
            if (local_10 != (byte *)0x0) {
              local_78 = param_2 & 8;
              if ((param_2 >> 3 & 1) == 0) {
                if (bVar1) {
                  local_68 = (ulonglong **)0x0;
                  local_70 = &typeinfo;
                }
                else {
                  local_68 = (ulonglong **)(param_4 + 4);
                  if ((*param_4 & 1) != 0) {
                    local_68 = (ulonglong **)param_4[-10];
                  }
                  local_70 = (undefined **)local_68[-0xe];
                }
              }
              else {
                local_68 = (ulonglong **)0x0;
                local_70 = &typeinfo;
              }
              local_74 = 0;
              local_80 = &DAT_0012411c;
              goto LAB_0010f8b8;
            }
          }
          iVar3 = 2;
          goto LAB_0010f7c4;
        }
      } while (pbVar9 < local_10);
    }
    uVar15 = 0;
    iVar3 = 1;
LAB_0010f7c4:
    local_68 = (ulonglong **)0x0;
    local_48 = 0;
    local_10 = (byte *)0x0;
    goto LAB_0010f7d0;
  }
  local_60 = param_4[-3];
  uVar15 = param_4[-2];
  local_48 = *(int *)((longlong)param_4 + -0x24);
  if (uVar15 == 0) {
    if ((param_2 >> 3 & 1) != 0) {
                    // WARNING: Subroutine does not return
      terminate();
    }
LAB_0010f5f8:
    FUN_00110394(param_4);
  }
  if ((param_2 >> 3 & 1) == 0) {
LAB_0010f664:
    if (local_48 < 0) {
      FUN_0010f314(param_5,local_60,&local_30);
      local_20 = FUN_0010f298((ulonglong)local_8,param_5);
      uVar5 = FUN_0010f298((ulonglong)local_8,param_5);
      param_4[-2] = uVar5;
    }
    goto LAB_0010f608;
  }
  goto LAB_0010f604;
LAB_0010f8b8:
  local_58 = (byte *)FUN_0010f148(local_10,&local_48);
  FUN_0010f148(local_58,&local_40);
  uVar5 = CONCAT44(uStack68,local_48);
  if (uVar5 == 0) {
    local_74 = 1;
  }
  else {
    if ((longlong)uVar5 < 1) {
      if (bVar1 < (local_70 != (undefined **)0x0 && local_78 == 0)) {
        uVar4 = FUN_0010f420(&local_30,local_70,local_68);
        uVar4 = uVar4 & 0xff ^ 1;
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        pbVar9 = (byte *)(local_18 + ~uVar5);
        do {
          bVar2 = *pbVar9;
          uVar5 = uVar10 & 0x3f;
          uVar10 = (ulonglong)((int)uVar10 + 7);
          uVar11 = uVar11 | ((ulonglong)bVar2 & 0x7f) << uVar5;
          pbVar9 = pbVar9 + 1;
        } while ((char)bVar2 < '\0');
        uVar4 = (uint)(uVar11 == 0);
      }
      if (uVar4 != 0) {
LAB_0010fa1c:
        iVar3 = 3;
        goto LAB_0010f7d0;
      }
    }
    else {
      if (local_8 != 0xff) {
        if (((uint)local_8 & 7) < 5) {
                    // WARNING: Could not recover jumptable at 0x0010f98c. Too many branches
                    // WARNING: Treating indirect jump as call
          uVar13 = (*(code *)(&UNK_0010f990 + (longlong)(char)local_80[(uint)local_8 & 7] * 4))();
          return uVar13;
        }
                    // WARNING: Subroutine does not return
        abort();
      }
      FUN_0010f188((ulonglong)local_8,local_20,local_18,&local_38);
      if (local_38 == (ulonglong **)0x0) goto LAB_0010fa1c;
      if (local_70 != (undefined **)0x0) {
        local_88 = local_38;
        local_38 = local_68;
        uVar4 = (**(code **)(*local_70 + 0x10))(local_70);
        if ((uVar4 & 0xff) != 0) {
          local_38 = (ulonglong **)*local_38;
        }
        uVar4 = (*(code *)(*local_88)[4])(local_88,local_70,&local_38,1);
        if ((uVar4 & 0xff) != 0) {
          local_68 = local_38;
          goto LAB_0010fa1c;
        }
      }
    }
  }
  if (local_40 == 0) goto LAB_0010fa70;
  local_10 = local_58 + local_40;
  goto LAB_0010f8b8;
LAB_0010fa70:
  if (local_74 == 0) {
    return 8;
  }
  local_48 = 0;
  iVar3 = 2;
LAB_0010f7d0:
  if ((param_2 & 1) != 0) {
    if (iVar3 == 2) {
      return 8;
    }
    if (!bVar1) {
      param_4[-3] = local_60;
      *(int *)((longlong)param_4 + -0x24) = local_48;
      *(byte **)(param_4 + -4) = local_10;
      *(ulonglong ***)(param_4 + -1) = local_68;
      param_4[-2] = uVar15;
      return 6;
    }
    return 6;
  }
  if (((param_2 >> 3 & 1) == 0) && (!bVar1)) {
    if (iVar3 == 1) goto LAB_0010f5f8;
    goto LAB_0010f664;
  }
  if (iVar3 == 1) {
                    // WARNING: Subroutine does not return
    terminate();
  }
LAB_0010f604:
  if (local_48 < 0) {
    lVar6 = unexpected();
    __cxa_begin_catch();
    uStack272 = *(undefined8 *)(lVar6 + -0x10);
    uVar13 = *(undefined8 *)(lVar6 + -0x18);
    iVar3 = *(int *)(lVar6 + -0x24);
    pFVar12 = *(FuncDef11 **)(lVar6 + -0x38);
    __unexpected(*(FuncDef13 **)(lVar6 + -0x40));
    __cxa_begin_catch();
    plVar7 = (longlong *)__cxa_get_globals_fast();
    puVar8 = (undefined8 *)*plVar7;
    puVar14 = puVar8 + 0xe;
    if ((puVar8[10] & 1) != 0) {
      puVar14 = (undefined8 *)*puVar8;
    }
    FUN_0010f314(0,uVar13,auStack288);
    uVar4 = FUN_0010f420(auStack288,puVar14[-0xe],puVar14,(longlong)iVar3);
    if ((uVar4 & 0xff) == 0) {
      uVar4 = FUN_0010f420(auStack288,&typeinfo,0,(longlong)iVar3);
      if ((uVar4 & 0xff) == 0) {
                    // WARNING: Subroutine does not return
        __terminate(pFVar12);
      }
      puVar14 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar14 = 0x13a7a0;
                    // WARNING: Subroutine does not return
      __cxa_throw(puVar14,&typeinfo,_bad_exception);
    }
    uVar13 = __cxa_rethrow();
    __cxa_end_catch();
    __cxa_end_catch();
                    // WARNING: Subroutine does not return
    _Unwind_Resume(uVar13);
  }
LAB_0010f608:
  _Unwind_SetGR(param_5,0,param_4);
  _Unwind_SetGR(param_5,1,(longlong)local_48);
  _Unwind_SetIP(param_5,uVar15);
  return 7;
}



void __cxa_call_unexpected(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  FuncDef11 *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined auStack48 [16];
  undefined8 local_20;
  
  __cxa_begin_catch();
  local_20 = *(undefined8 *)(param_1 + -0x10);
  uVar6 = *(undefined8 *)(param_1 + -0x18);
  iVar1 = *(int *)(param_1 + -0x24);
  pFVar5 = *(FuncDef11 **)(param_1 + -0x38);
  __unexpected(*(FuncDef13 **)(param_1 + -0x40));
  __cxa_begin_catch();
  plVar3 = (longlong *)__cxa_get_globals_fast();
  puVar4 = (undefined8 *)*plVar3;
  puVar7 = puVar4 + 0xe;
  if ((puVar4[10] & 1) != 0) {
    puVar7 = (undefined8 *)*puVar4;
  }
  FUN_0010f314(0,uVar6,auStack48);
  uVar2 = FUN_0010f420(auStack48,puVar7[-0xe],puVar7,(longlong)iVar1);
  if ((uVar2 & 0xff) != 0) {
    uVar6 = __cxa_rethrow();
    __cxa_end_catch();
    __cxa_end_catch();
                    // WARNING: Subroutine does not return
    _Unwind_Resume(uVar6);
  }
  uVar2 = FUN_0010f420(auStack48,&typeinfo,0,(longlong)iVar1);
  if ((uVar2 & 0xff) != 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = 0x13a7a0;
                    // WARNING: Subroutine does not return
    __cxa_throw(puVar7,&typeinfo,_bad_exception);
  }
                    // WARNING: Subroutine does not return
  __terminate(pFVar5);
}



// __cxxabiv1::__terminate(void (*)())

void __terminate(FuncDef11 *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  abort();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_terminate(void (*)())

undefined * set_terminate(FuncDef12 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __terminate_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__terminate_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __terminate_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_terminate()

undefined * get_terminate(void)

{
  return __terminate_handler;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::terminate()

void terminate(void)

{
  FuncDef11 *pFVar1;
  
  pFVar1 = (FuncDef11 *)get_terminate();
                    // WARNING: Subroutine does not return
  __terminate(pFVar1);
}



// __cxxabiv1::__unexpected(void (*)())

void __unexpected(FuncDef13 *param_1)

{
  (*param_1)();
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_unexpected(void (*)())

undefined * set_unexpected(FuncDef14 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  do {
    puVar3 = __unexpected_handler;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__unexpected_handler,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __unexpected_handler = param_1;
    }
  } while (cVar1 != '\0');
  return puVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_unexpected()

undefined * get_unexpected(void)

{
  return __unexpected_handler;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::unexpected()

void unexpected(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FuncDef13 *pFVar5;
  int *piVar6;
  longlong in_x1;
  
  pFVar5 = (FuncDef13 *)get_unexpected();
  uVar4 = __unexpected(pFVar5);
  if (1 < uVar4) {
                    // WARNING: Subroutine does not return
    __terminate(*(FuncDef11 **)(in_x1 + -0x38));
  }
  piVar6 = (int *)(in_x1 + -0x60);
  do {
    iVar1 = *piVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
    if (bVar3) {
      *piVar6 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (*(code **)(in_x1 + -0x48) != (code *)0x0) {
      (**(code **)(in_x1 + -0x48))(in_x1 + 0x20);
    }
    __cxa_free_exception(in_x1 + 0x20);
    return;
  }
  return;
}



void __cxa_throw(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __cxa_get_globals();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  *(undefined8 *)(param_1 + -0x68) = param_3;
  *(undefined8 *)(param_1 + -0x70) = param_2;
  *(undefined4 *)(param_1 + -0x80) = 1;
  uVar2 = get_unexpected();
  *(undefined8 *)(param_1 + -0x60) = uVar2;
  uVar2 = get_terminate();
  *(undefined8 *)(param_1 + -0x58) = uVar2;
  *(undefined8 *)(param_1 + -0x20) = 0x474e5543432b2b00;
  *(undefined8 *)(param_1 + -0x18) = 0x10fc50;
  _Unwind_RaiseException(param_1 + -0x20);
  __cxa_begin_catch(param_1 + -0x20);
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_rethrow(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)__cxa_get_globals();
  lVar2 = *plVar1;
  *(int *)(plVar1 + 1) = *(int *)(plVar1 + 1) + 1;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U < 2) {
      *(int *)(lVar2 + 0x28) = -*(int *)(lVar2 + 0x28);
    }
    else {
      *plVar1 = 0;
    }
    _Unwind_Resume_or_Rethrow(lVar2 + 0x50);
    __cxa_begin_catch(lVar2 + 0x50);
  }
                    // WARNING: Subroutine does not return
  terminate();
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::set_new_handler(void (*)())

FuncDef15 * set_new_handler(FuncDef15 *param_1)

{
  char cVar1;
  bool bVar2;
  FuncDef15 *pFVar3;
  
  do {
    pFVar3 = DAT_0014d328;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x14d328,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_0014d328 = param_1;
    }
  } while (cVar1 != '\0');
  return pFVar3;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::get_new_handler()

undefined8 get_new_handler(void)

{
  return DAT_0014d328;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall ___si_class_type_info(__si_class_type_info *this)

{
  *(undefined8 *)this = 0x13a850;
  ___class_type_info((__class_type_info *)this);
  return;
}



// __cxxabiv1::__si_class_type_info::~__si_class_type_info()

void __thiscall ___si_class_type_info(__si_class_type_info *this)

{
  ___si_class_type_info(this);
  _ZdlPv(this);
  return;
}



// WARNING: Removing unreachable block (ram,0x0010feec)
// WARNING: Removing unreachable block (ram,0x0010fef8)
// __cxxabiv1::__si_class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

ulonglong __thiscall
__do_dyncast(__si_class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
            void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if ((__s1 == *(char **)(param_3 + 8)) ||
     ((cVar1 = *__s1, cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_3 + 8)), iVar2 == 0))))
  {
    *(void **)param_7 = param_4;
    *(__sub_kind *)(param_7 + 8) = param_2;
    uVar4 = 6;
    if (param_6 != (void *)((longlong)param_4 + (ulonglong)(uint)param_1)) {
      uVar4 = 1;
    }
    *(undefined4 *)(param_7 + 0x10) = uVar4;
    return 0;
  }
  if ((param_4 == param_6) &&
     ((__s1 == *(char **)(param_5 + 8) ||
      ((cVar1 != '*' && (iVar2 = strcmp(__s1,*(char **)(param_5 + 8)), iVar2 == 0)))))) {
    *(__sub_kind *)(param_7 + 0xc) = param_2;
    return 0;
  }
  uVar3 = (**(code **)(**(longlong **)(this + 0x10) + 0x38))
                    (*(longlong **)(this + 0x10),(ulonglong)(uint)param_1,(ulonglong)param_2,param_3
                     ,param_4,param_5,param_6);
  return uVar3 & 0xff;
}



// __cxxabiv1::__si_class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

ulonglong __thiscall
__do_find_public_src
          (__si_class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  char *__s1;
  
  if (param_4 == param_2) {
    __s1 = *(char **)(this + 8);
    if (__s1 == *(char **)(param_3 + 8)) {
      return 6;
    }
    if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_3 + 8)), iVar1 == 0)) {
      return 6;
    }
  }
  uVar2 = (**(code **)(**(longlong **)(this + 0x10) + 0x40))
                    (*(longlong **)(this + 0x10),(ulonglong)(uint)param_1,param_2,param_3,param_4);
  return uVar2 & 0xffffffff;
}



// __cxxabiv1::__si_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

ulonglong __thiscall
__do_upcast(__si_class_type_info *this,__class_type_info *param_1,void *param_2,
           __upcast_result *param_3)

{
  ulonglong uVar1;
  
  uVar1 = __do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  uVar1 = uVar1 & 0xff;
  if ((int)uVar1 == 0) {
    uVar1 = (**(code **)(**(longlong **)(this + 0x10) + 0x30))
                      (*(longlong **)(this + 0x10),param_1,param_2,param_3);
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



ulonglong FUN_00110080(longlong param_1,longlong param_2)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(param_1 + 8);
  if (__s1 == *(char **)(param_2 + 8)) {
    return 1;
  }
  if (*__s1 != '*') {
    iVar1 = strcmp(__s1,*(char **)(param_2 + 8));
    return (ulonglong)(iVar1 == 0);
  }
  return 0;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const

ulonglong __thiscall __do_upcast(__class_type_info *this,__class_type_info *param_1,void **param_2)

{
  bool bVar1;
  void *local_18;
  uint local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  local_c = 0x10;
  local_8 = 0;
  (**(code **)(*(longlong *)this + 0x30))(this,param_1,*param_2,&local_18);
  bVar1 = (local_10 & 6) == 6;
  if (bVar1) {
    *param_2 = local_18;
  }
  return (ulonglong)bVar1;
}



// __cxxabiv1::__class_type_info::__do_find_public_src(long, void const*,
// __cxxabiv1::__class_type_info const*, void const*) const

ulonglong __thiscall
__do_find_public_src
          (__class_type_info *this,long param_1,void *param_2,__class_type_info *param_3,
          void *param_4)

{
  uint uVar1;
  
  uVar1 = 6;
  if (param_4 != param_2) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall ___class_type_info(__class_type_info *this)

{
  *(undefined8 *)this = 0x13a8e0;
  return;
}



// __cxxabiv1::__class_type_info::~__class_type_info()

void __thiscall ___class_type_info(__class_type_info *this)

{
  ___class_type_info(this);
  _ZdlPv(this);
  return;
}



// __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
// __cxxabiv1::__class_type_info::__upcast_result&) const

undefined8 __thiscall
__do_upcast(__class_type_info *this,__class_type_info *param_1,void *param_2,
           __upcast_result *param_3)

{
  int iVar1;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 != *(char **)(param_1 + 8)) {
    if (*__s1 != '*') {
      iVar1 = strcmp(__s1,*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_001101c4;
    }
    return 0;
  }
LAB_001101c4:
  *(void **)param_3 = param_2;
  *(undefined8 *)(param_3 + 0x10) = 0x10;
  *(undefined4 *)(param_3 + 8) = 6;
  return 1;
}



// __cxxabiv1::__class_type_info::__do_catch(std::type_info const*, void**, unsigned int) const

ulonglong __thiscall
__do_catch(__class_type_info *this,type_info *param_1,void **param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (__s1 == *(char **)(param_1 + 8)) {
    return 1;
  }
  if ((*__s1 != '*') && (iVar1 = strcmp(__s1,*(char **)(param_1 + 8)), iVar1 == 0)) {
    return 1;
  }
  if (3 < param_3) {
    return 0;
  }
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1,this,param_2);
  return uVar2 & 0xff;
}



// __cxxabiv1::__class_type_info::__do_dyncast(long, __cxxabiv1::__class_type_info::__sub_kind,
// __cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info const*, void
// const*, __cxxabiv1::__class_type_info::__dyncast_result&) const

undefined8 __thiscall
__do_dyncast(__class_type_info *this,long param_1,__sub_kind param_2,__class_type_info *param_3,
            void *param_4,__class_type_info *param_5,void *param_6,__dyncast_result *param_7)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  __s1 = *(char **)(this + 8);
  if (param_4 == param_6) {
    if (__s1 == *(char **)(param_5 + 8)) {
LAB_00110370:
      *(__sub_kind *)(param_7 + 0xc) = param_2;
      return 0;
    }
    if (*__s1 == '*') {
      if (__s1 != *(char **)(param_3 + 8)) {
        return 0;
      }
      goto LAB_00110350;
    }
    iVar1 = strcmp(__s1,*(char **)(param_5 + 8));
    if (iVar1 == 0) goto LAB_00110370;
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00110350;
  }
  else {
    __s2 = *(char **)(param_3 + 8);
    if (__s1 == __s2) goto LAB_00110350;
    if (*__s1 == '*') {
      return 0;
    }
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_00110350:
  *(void **)param_7 = param_4;
  *(__sub_kind *)(param_7 + 8) = param_2;
  *(undefined4 *)(param_7 + 0x10) = 1;
  return 0;
}



void FUN_00110394(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && (__cxa_begin_catch(), *param_1 + 0xb8b1aabcbcd4d500U < 2)) {
                    // WARNING: Subroutine does not return
    __terminate((FuncDef11 *)param_1[-7]);
  }
                    // WARNING: Subroutine does not return
  terminate();
}



undefined8 __cxa_get_exception_ptr(longlong param_1)

{
  return *(undefined8 *)(param_1 + -8);
}



longlong __cxa_begin_catch(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong **pplVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  pplVar3 = (longlong **)__cxa_get_globals();
  plVar5 = *pplVar3;
  plVar4 = param_1 + -10;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar2 = *(int *)(param_1 + -5);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    iVar1 = *(int *)(pplVar3 + 1);
    *(int *)(param_1 + -5) = iVar2 + 1;
    *(int *)(pplVar3 + 1) = iVar1 + -1;
    if (plVar5 != plVar4) {
      *(longlong **)(param_1 + -6) = plVar5;
      *pplVar3 = plVar4;
    }
    return param_1[-1];
  }
  if (plVar5 == (longlong *)0x0) {
    *pplVar3 = plVar4;
    return 0;
  }
                    // WARNING: Subroutine does not return
  terminate();
}



void __cxa_end_catch(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  plVar1 = (longlong *)__cxa_get_globals_fast();
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (1 < *(longlong *)(lVar2 + 0x50) + 0xb8b1aabcbcd4d500U) {
      *plVar1 = 0;
      _Unwind_DeleteException(lVar2 + 0x50);
      return;
    }
    iVar3 = *(int *)(lVar2 + 0x28);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
      if (iVar3 == 0) {
        *plVar1 = *(longlong *)(lVar2 + 0x20);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        return;
      }
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        *plVar1 = *(longlong *)(lVar2 + 0x20);
        _Unwind_DeleteException(lVar2 + 0x50);
        return;
      }
      if (iVar3 == -1) {
                    // WARNING: Subroutine does not return
        terminate();
      }
    }
    *(int *)(lVar2 + 0x28) = iVar3;
  }
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked
// std::uncaught_exception()

ulonglong uncaught_exception(void)

{
  longlong lVar1;
  
  lVar1 = __cxa_get_globals();
  return (ulonglong)(*(int *)(lVar1 + 8) != 0);
}



undefined * __cxa_get_globals_fast(void)

{
  void *pvVar1;
  
  if (DAT_0014d334 == '\0') {
    return &DAT_0014d338;
  }
  pvVar1 = pthread_getspecific(DAT_0014d330);
  return (undefined *)pvVar1;
}



undefined8 * __cxa_get_globals(void)

{
  int iVar1;
  undefined8 *__pointer;
  
  if (DAT_0014d334 == '\0') {
    __pointer = (undefined8 *)&DAT_0014d338;
  }
  else {
    __pointer = (undefined8 *)pthread_getspecific(DAT_0014d330);
    if (__pointer == (undefined8 *)0x0) {
      __pointer = (undefined8 *)malloc(0x10);
      if ((__pointer == (undefined8 *)0x0) ||
         (iVar1 = pthread_setspecific(DAT_0014d330,__pointer), iVar1 != 0)) {
                    // WARNING: Subroutine does not return
        terminate();
      }
      *__pointer = 0;
      *(undefined4 *)(__pointer + 1) = 0;
    }
  }
  return __pointer;
}



// WARNING: Removing unreachable block (ram,0x00110760)
// WARNING: Removing unreachable block (ram,0x001107f4)
// WARNING: Removing unreachable block (ram,0x00110774)
// __gnu_cxx::__verbose_terminate_handler()

void __verbose_terminate_handler(void)

{
  longlong lVar1;
  char *__s;
  char *__s_00;
  size_t __n;
  
  if (DAT_0014d348 == '\0') {
    DAT_0014d348 = '\x01';
    lVar1 = __cxa_current_exception_type();
    if (lVar1 != 0) {
      __s = *(char **)(lVar1 + 8);
      if (*__s == '*') {
        __s = __s + 1;
      }
      __s_00 = (char *)__cxa_demangle(__s,0,0);
      fwrite("terminate called after throwing an instance of \'",1,0x30,(FILE *)sem_init);
      fputs(__s,(FILE *)sem_init);
      do {
        fwrite(&DAT_001241f8,1,2,(FILE *)sem_init);
        __cxa_rethrow();
        fputs(__s_00,(FILE *)sem_init);
      } while( true );
    }
    __s = "terminate called without an active exception\n";
    __n = 0x2d;
  }
  else {
    __n = 0x1d;
    __s = "terminate called recursively\n";
  }
  fwrite(__s,1,__n,(FILE *)sem_init);
                    // WARNING: Subroutine does not return
  abort();
}



longlong FUN_00110800(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 0xb:
  case 0x21:
  case 0x2b:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x3f:
  case 0x4b:
  case 0x4c:
    if (param_3 == 0) {
      return 0;
    }
switchD_0011082c_caseD_2a:
    if ((param_4 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 < *(int *)(param_1 + 0x2c))) {
LAB_00110848:
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = param_2;
        *(longlong *)(lVar1 + 8) = param_3;
        *(longlong *)(lVar1 + 0x10) = param_4;
        return lVar1;
      }
    }
LAB_00110810:
    return 0;
  default:
    goto LAB_00110810;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x28:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x3b:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x48:
  case 0x49:
  case 0x4a:
    if (param_3 == 0) {
      return 0;
    }
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x29:
  case 0x2e:
  case 0x2f:
    iVar2 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar2) {
      return 0;
    }
    goto LAB_00110848;
  case 0x2a:
  case 0x30:
    goto switchD_0011082c_caseD_2a;
  }
}



longlong FUN_001108a0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
    if ((lVar1 != 0 && param_2 != 0) && (param_3 != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0;
      *(longlong *)(lVar1 + 8) = param_2;
      *(int *)(lVar1 + 0x10) = param_3;
      return lVar1;
    }
  }
  return 0;
}



int ** FUN_00110900(longlong param_1,int **param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  int **ppiVar6;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar3;
  ppiVar6 = param_2;
  do {
    if ((cVar2 == 'V') || (cVar2 == 'r')) {
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
      if (cVar2 != 'r') {
        if (cVar2 != 'V') goto LAB_00110964;
        uVar5 = 0x1d;
        if (param_3 == 0) {
          uVar5 = 0x1a;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
        goto LAB_00110978;
      }
      uVar5 = 0x1c;
      if (param_3 == 0) {
        uVar5 = 0x19;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
      piVar4 = (int *)FUN_00110800(param_1,(ulonglong)uVar5,0,0);
      *ppiVar6 = piVar4;
    }
    else {
      if (cVar2 != 'K') {
        if (((param_3 == 0) && (cVar2 == 'F')) && (param_2 != ppiVar6)) {
          do {
            piVar4 = *param_2;
            iVar1 = *piVar4;
            if (iVar1 == 0x1a) {
              *piVar4 = 0x1d;
            }
            else {
              if (iVar1 == 0x1b) {
                *piVar4 = 0x1e;
              }
              else {
                if (iVar1 == 0x19) {
                  *piVar4 = 0x1c;
                }
              }
            }
            param_2 = (int **)(piVar4 + 2);
          } while (param_2 != ppiVar6);
        }
        return ppiVar6;
      }
      *(char **)(param_1 + 0x18) = pcVar3 + 1;
LAB_00110964:
      uVar5 = 0x1e;
      if (param_3 == 0) {
        uVar5 = 0x1b;
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 6;
LAB_00110978:
      piVar4 = (int *)FUN_00110800(param_1,(ulonglong)uVar5,0,0);
      *ppiVar6 = piVar4;
    }
    if (piVar4 == (int *)0x0) {
      return (int **)0;
    }
    pcVar3 = *(char **)(param_1 + 0x18);
    ppiVar6 = (int **)(piVar4 + 2);
    cVar2 = *pcVar3;
  } while( true );
}



longlong FUN_00110ab0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'S') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  if (pcVar7[1] != '\0') {
    *(char **)(param_1 + 0x18) = pcVar7 + 2;
    bVar5 = pcVar7[1];
    uVar8 = (ulonglong)bVar5;
    uVar14 = (uint)bVar5 - 0x30;
    if (((uVar14 & 0xff) < 10) || (bVar5 == 0x5f)) {
      if (bVar5 == 0x5f) {
        uVar3 = 0;
        goto LAB_00110bec;
      }
    }
    else {
      if (0x19 < (byte)(bVar5 + 0xbf)) goto LAB_00110b7c;
    }
    uVar10 = 0;
    do {
      iVar6 = (int)uVar8;
      uVar3 = (uVar10 * 0x24 + iVar6) - 0x37;
      if ((uVar14 & 0xff) < 10) {
        uVar3 = (uVar10 * 0x24 + iVar6) - 0x30;
      }
      else {
        if (0x19 < (iVar6 - 0x41U & 0xff)) {
          return 0;
        }
      }
      uVar8 = 0;
      if (uVar3 < uVar10) {
        return 0;
      }
      pbVar12 = *(byte **)(param_1 + 0x18);
      if (*pbVar12 != 0) {
        *(byte **)(param_1 + 0x18) = pbVar12 + 1;
        uVar8 = (ulonglong)*pbVar12;
        if (*pbVar12 == 0x5f) goto LAB_00110be8;
      }
      uVar14 = (int)uVar8 - 0x30;
      uVar10 = uVar3;
    } while( true );
  }
  bVar5 = 0;
LAB_00110b7c:
  uVar14 = *(uint *)(param_1 + 0x10) >> 3 & 1;
  if (uVar14 < (param_2 != 0)) {
    uVar14 = (uint)((byte)(**(char **)(param_1 + 0x18) + 0xbdU) < 2);
  }
  if (bVar5 == 0x74) {
    lVar9 = 0x139c70;
  }
  else {
    if (bVar5 == 0x61) {
      lVar9 = 0x139ca8;
    }
    else {
      if (bVar5 == 0x62) {
        lVar9 = 0x139ce0;
      }
      else {
        if (bVar5 == 0x73) {
          lVar9 = 0x139d18;
        }
        else {
          if (bVar5 == 0x69) {
            lVar9 = 0x139d50;
          }
          else {
            if (bVar5 == 0x6f) {
              lVar9 = 0x139d88;
            }
            else {
              if (bVar5 != 100) {
                return 0;
              }
              lVar9 = 0x139dc0;
            }
          }
        }
      }
    }
  }
  lVar16 = *(longlong *)(lVar9 + 0x28);
  if (lVar16 == 0) {
    iVar15 = *(int *)(param_1 + 0x2c);
    iVar6 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x28);
    iVar15 = *(int *)(param_1 + 0x2c);
    uVar2 = *(undefined4 *)(lVar9 + 0x30);
    lVar17 = 0;
    if (iVar6 < iVar15) {
      lVar13 = (longlong)iVar6;
      iVar6 = iVar6 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      lVar1 = *(longlong *)(param_1 + 0x20) + lVar13 * 0x18;
      if (lVar1 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + lVar13 * 0x18) = 0x18;
        *(longlong *)(lVar1 + 8) = lVar16;
        *(undefined4 *)(lVar1 + 0x10) = uVar2;
        lVar17 = lVar1;
      }
    }
    *(longlong *)(param_1 + 0x48) = lVar17;
  }
  if (uVar14 == 0) {
    uVar4 = *(undefined8 *)(lVar9 + 8);
    iVar11 = *(int *)(lVar9 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(lVar9 + 0x18);
    iVar11 = *(int *)(lVar9 + 0x20);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
  if (iVar15 <= iVar6) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = iVar6 + 1;
  lVar9 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
  if (lVar9 != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 0x18;
    *(undefined8 *)(lVar9 + 8) = uVar4;
    *(int *)(lVar9 + 0x10) = iVar11;
    return lVar9;
  }
  return 0;
LAB_00110be8:
  uVar3 = uVar3 + 1;
LAB_00110bec:
  if (*(uint *)(param_1 + 0x38) <= uVar3) {
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar3 * 8);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return uVar4;
}



void FUN_00110d70(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (param_3 == (undefined4 *)0x0) {
switchD_00110dc4_caseD_5:
    return;
  }
  do {
    switch(*param_3) {
    case 1:
    case 2:
    case 3:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x42:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
switchD_00110dc4_caseD_1:
      piVar1 = *(int **)(param_3 + 2);
      break;
    case 4:
      *param_1 = *param_1 + 1;
      piVar1 = *(int **)(param_3 + 2);
      break;
    default:
      goto switchD_00110dc4_caseD_5;
    case 7:
    case 8:
    case 0x32:
      param_3 = *(undefined4 **)(param_3 + 4);
      goto joined_r0x00110de4;
    case 0x23:
    case 0x24:
      piVar1 = *(int **)(param_3 + 2);
      if (*piVar1 == 5) {
        *param_2 = *param_2 + 1;
        goto switchD_00110dc4_caseD_1;
      }
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
      param_3 = *(undefined4 **)(param_3 + 2);
      goto joined_r0x00110de4;
    }
    FUN_00110d70(param_1,param_2,piVar1);
    param_3 = *(undefined4 **)(param_3 + 4);
joined_r0x00110de4:
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}



void FUN_00110e3c(undefined *param_1,undefined param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (lVar1 != 0xff) {
    *(longlong *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x100) = 1;
  *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}



longlong FUN_00110eb4(byte **param_1)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pbVar3 = *param_1;
  bVar1 = *pbVar3;
  bVar2 = bVar1 == 0x6e;
  if (bVar2) {
    *param_1 = pbVar3 + 1;
    uVar6 = 0xffffffffffffffff;
    bVar1 = pbVar3[1];
  }
  else {
    uVar6 = 0;
  }
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar3 = *param_1;
    uVar4 = 0;
    do {
      pbVar3 = pbVar3 + 1;
      uVar5 = (ulonglong)bVar1;
      *param_1 = pbVar3;
      bVar1 = *pbVar3;
      uVar4 = (uVar4 * 10 + uVar5) - 0x30;
    } while ((byte)(bVar1 - 0x30) < 10);
  }
  else {
    uVar4 = 0;
  }
  return (uVar4 ^ uVar6) + (ulonglong)bVar2;
}



longlong FUN_00110f3c(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
  }
  else {
    piVar3 = *(int **)(*(longlong *)(lVar5 + 8) + 0x10);
    uVar2 = *param_2 & 0xffffffff;
    if ((piVar3 != (int *)0x0) && (*piVar3 == 0x2f)) {
      iVar4 = (int)*param_2;
      if (iVar4 < 1) {
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        do {
          piVar3 = *(int **)(piVar3 + 4);
          uVar1 = (int)uVar2 - 1;
          uVar2 = (ulonglong)uVar1;
          if ((piVar3 == (int *)0x0) || (*piVar3 != 0x2f)) goto LAB_00110f8c;
        } while (uVar1 != 0);
      }
      return *(undefined8 *)(piVar3 + 2);
    }
LAB_00110f8c:
    lVar5 = 0;
  }
  return lVar5;
}



int * FUN_00110fb8(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    do {
      switch(*param_2) {
      case 0:
      case 6:
      case 0x18:
      case 0x27:
      case 0x31:
      case 0x40:
      case 0x45:
      case 0x47:
      case 0x4a:
      case 0x4b:
        goto LAB_00111004;
      case 5:
        piVar2 = (int *)FUN_00110f3c(param_1,param_2 + 2);
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x2f)) {
          return piVar2;
        }
        goto LAB_00111004;
      case 7:
      case 8:
      case 0x32:
        goto switchD_00111020_caseD_7;
      }
      lVar1 = FUN_00110fb8(param_1,*(undefined8 *)(param_2 + 2));
      if (lVar1 != 0) {
        return (int *)lVar1;
      }
switchD_00111020_caseD_7:
      param_2 = *(undefined4 **)(param_2 + 4);
    } while (param_2 != (undefined4 *)0x0);
  }
LAB_00111004:
  return (int *)0;
}



void FUN_00111050(void *param_1,longlong param_2,void **param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_3[2];
  pvVar1 = (void *)((longlong)param_3[1] + param_2 + 1);
  if (pvVar2 < pvVar1) {
    if (*(int *)(param_3 + 3) != 0) {
      return;
    }
    if ((pvVar2 != (void *)0x0) || (pvVar2 = (void *)0x2, (void *)0x2 < pvVar1)) {
      do {
        pvVar2 = (void *)((longlong)pvVar2 * 2);
      } while (pvVar2 < pvVar1);
    }
    pvVar1 = realloc(*param_3,(size_t)pvVar2);
    if (pvVar1 == (void *)0x0) {
      free(*param_3);
      *param_3 = (void *)0x0;
      param_3[1] = (void *)0x0;
      param_3[2] = (void *)0x0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
    }
    *param_3 = pvVar1;
    param_3[2] = pvVar2;
  }
  if (*(int *)(param_3 + 3) != 0) {
    return;
  }
  memcpy((void *)((longlong)*param_3 + (longlong)param_3[1]),param_1,(size_t)param_2);
  *(undefined *)((longlong)*param_3 + param_2 + (longlong)param_3[1]) = 0;
  param_3[1] = (void *)((longlong)param_3[1] + param_2);
  return;
}



void FUN_00111140(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  size_t sVar3;
  longlong lVar4;
  
  sVar3 = strlen(param_2);
  if (sVar3 != 0) {
    pcVar1 = param_2 + sVar3;
    lVar4 = *(longlong *)(param_1 + 0x100);
    do {
      while (cVar2 = *param_2, lVar4 == 0xff) {
        param_2 = param_2 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = cVar2;
        param_1[0x108] = cVar2;
        lVar4 = 1;
        if (param_2 == pcVar1) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar4 + 1;
      param_2 = param_2 + 1;
      param_1[lVar4] = cVar2;
      param_1[0x108] = cVar2;
      lVar4 = lVar4 + 1;
    } while (param_2 != pcVar1);
  }
  return;
}



longlong FUN_001111f4(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *__s1;
  
  lVar4 = (longlong)param_2;
  __s1 = *(void **)(param_1 + 0x18);
  if (lVar4 <= *(longlong *)(param_1 + 8) - (longlong)__s1) {
    *(longlong *)(param_1 + 0x18) = (longlong)__s1 + lVar4;
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) && (*(char *)((longlong)__s1 + lVar4) == '$')) {
      *(longlong *)(param_1 + 0x18) = (longlong)__s1 + lVar4 + 1;
    }
    if ((((9 < param_2) && (iVar2 = memcmp(__s1,"_GLOBAL_",8), iVar2 == 0)) &&
        ((cVar1 = *(char *)((longlong)__s1 + 8), cVar1 == '_' || cVar1 == '.' || (cVar1 == '$'))))
       && (*(char *)((longlong)__s1 + 9) == 'N')) {
      *(int *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + 0x16) - param_2;
      uVar3 = FUN_001108a0(param_1,"(anonymous namespace)",0x15);
      return uVar3;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18;
      if ((param_2 != 0 && __s1 != (void *)0x0) && (lVar4 != 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0;
        *(void **)(lVar4 + 8) = __s1;
        *(int *)(lVar4 + 0x10) = param_2;
        return lVar4;
      }
    }
  }
  return 0;
}



void FUN_00111348(char *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  ulonglong uVar4;
  char local_20 [32];
  
  sprintf(local_20,"%ld",param_2);
  sVar2 = strlen(local_20);
  if (sVar2 != 0) {
    uVar4 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      while (cVar1 = local_20[uVar4], lVar3 == 0xff) {
        uVar4 = uVar4 + 1;
        param_1[0xff] = '\0';
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = cVar1;
        param_1[0x108] = cVar1;
        lVar3 = 1;
        if (uVar4 == (ulonglong)sVar2) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar3 + 1;
      uVar4 = uVar4 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar3 + 1;
    } while (uVar4 != (ulonglong)sVar2);
  }
  return;
}



undefined8 FUN_00111414(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  bVar2 = bVar1 == 0x6e;
  if (bVar2) {
    *(byte **)(param_1 + 0x18) = pbVar4 + 1;
    bVar1 = pbVar4[1];
  }
  if ((byte)(bVar1 - 0x30) < 10) {
    pbVar4 = *(byte **)(param_1 + 0x18);
    lVar5 = 0;
    do {
      pbVar4 = pbVar4 + 1;
      uVar6 = (ulonglong)bVar1;
      *(byte **)(param_1 + 0x18) = pbVar4;
      bVar1 = *pbVar4;
      lVar5 = lVar5 * 10 + uVar6 + -0x30;
    } while ((byte)(bVar1 - 0x30) < 10);
    if ((0 < lVar5) && (!bVar2)) {
      uVar3 = FUN_001111f4();
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      return uVar3;
    }
  }
  return 0;
}



longlong FUN_001114bc(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(param_1 + 0x18);
  bVar1 = *pbVar4;
  if (bVar1 != 0x5f) {
    if ((bVar1 != 0x6e) && ((byte)(bVar1 - 0x30) < 10)) {
      lVar2 = 0;
      do {
        pbVar4 = pbVar4 + 1;
        *(byte **)(param_1 + 0x18) = pbVar4;
        lVar3 = lVar2 * 10 + (ulonglong)bVar1;
        bVar1 = *pbVar4;
        lVar2 = lVar3 + -0x30;
      } while ((byte)(bVar1 - 0x30) < 10);
      lVar3 = lVar3 + -0x2f;
      if (bVar1 == 0x5f) goto LAB_00111538;
    }
    return 0xffffffffffffffff;
  }
  lVar3 = 0;
LAB_00111538:
  *(byte **)(param_1 + 0x18) = pbVar4 + 1;
  return lVar3;
}



ulonglong FUN_00111548(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  longlong lVar5;
  byte *pbVar6;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  if (*pcVar4 == '_') {
    pbVar6 = (byte *)(pcVar4 + 1);
    *(byte **)(param_1 + 0x18) = pbVar6;
    bVar2 = pcVar4[1];
    if (bVar2 == 0x6e) {
      pbVar6 = (byte *)(pcVar4 + 2);
      *(byte **)(param_1 + 0x18) = pbVar6;
      bVar2 = pcVar4[2];
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = true;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) {
        return 1;
      }
      bVar3 = false;
    }
    lVar5 = 0;
    do {
      pbVar6 = pbVar6 + 1;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar1 = lVar5 * 10 + (ulonglong)bVar2;
      bVar2 = *pbVar6;
      lVar5 = lVar1 + -0x30;
    } while ((byte)(bVar2 - 0x30) < 10);
    if (bVar3) {
      return lVar1 - 0x31U >> 0x3f;
    }
  }
  return 1;
}



longlong FUN_001115ec(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'T') {
    return 0;
  }
  pbVar6 = (byte *)(pcVar7 + 1);
  *(byte **)(param_1 + 0x18) = pbVar6;
  bVar2 = pcVar7[1];
  if (bVar2 == 0x5f) {
    lVar5 = 0;
  }
  else {
    if (bVar2 == 0x6e) {
      return 0;
    }
    if (9 < (byte)(bVar2 - 0x30)) {
      return 0;
    }
    lVar4 = 0;
    pbVar3 = (byte *)(pcVar7 + 2);
    do {
      pbVar6 = pbVar3;
      *(byte **)(param_1 + 0x18) = pbVar6;
      lVar5 = lVar4 * 10 + (ulonglong)bVar2;
      bVar2 = *pbVar6;
      lVar4 = lVar5 + -0x30;
      pbVar3 = pbVar6 + 1;
    } while ((byte)(bVar2 - 0x30) < 10);
    lVar5 = lVar5 + -0x2f;
    if (bVar2 != 0x5f) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte **)(param_1 + 0x18) = pbVar6 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    lVar4 = *(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18;
    if (lVar4 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 5;
      *(longlong *)(lVar4 + 8) = lVar5;
      return lVar4;
    }
  }
  return 0;
}



undefined8 FUN_001116d8(longlong param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_2 == 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (*pbVar1 == 0) {
      return 0;
    }
    *(byte **)(param_1 + 0x18) = pbVar1 + 1;
    param_2 = (uint)*pbVar1;
  }
  if (param_2 == 0x68) {
    pcVar3 = *(char **)(param_1 + 0x18);
    cVar4 = *pcVar3;
    pcVar2 = pcVar3;
    if (cVar4 == 'n') {
      pcVar2 = pcVar3 + 1;
      *(char **)(param_1 + 0x18) = pcVar2;
      cVar4 = pcVar3[1];
    }
    if ((byte)(cVar4 - 0x30U) < 10) {
      do {
        pcVar2 = pcVar2 + 1;
        *(char **)(param_1 + 0x18) = pcVar2;
        cVar4 = *pcVar2;
      } while ((byte)(cVar4 - 0x30U) < 10);
      goto LAB_00111758;
    }
  }
  else {
    if (param_2 != 0x76) {
      return 0;
    }
    FUN_00110eb4(param_1 + 0x18);
    if (**(char **)(param_1 + 0x18) != '_') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
    FUN_00110eb4(param_1 + 0x18);
    pcVar2 = *(char **)(param_1 + 0x18);
  }
  cVar4 = *pcVar2;
LAB_00111758:
  if (cVar4 != '_') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar2 + 1;
  return 1;
}



longlong FUN_001117c4(longlong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  char *__s1;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  char *pcVar15;
  char **ppcVar16;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (1 < (byte)(*__s1 + 0xb7U)) {
    return 0;
  }
  pcVar15 = __s1 + 1;
  *(char **)(param_1 + 0x18) = pcVar15;
  cVar3 = __s1[1];
  if (cVar3 == 'E') {
    *(char **)(param_1 + 0x18) = __s1 + 2;
    uVar12 = FUN_00110800(param_1,0x2f,0,0);
    return uVar12;
  }
  plVar11 = &local_8;
  local_8 = 0;
LAB_00111834:
  switch(cVar3) {
  case 'I':
  case 'J':
    lVar5 = FUN_001117c4(param_1);
    break;
  default:
    lVar5 = FUN_00113404(param_1);
    break;
  case 'L':
    lVar5 = FUN_00115fa4(param_1);
    break;
  case 'X':
    __s1 = pcVar15 + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(char **)(param_1 + 0x18) = __s1;
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar3 = pcVar15[1];
    if (cVar3 == 'L') {
      lVar5 = FUN_00115fa4(param_1);
      __s1 = *(char **)(param_1 + 0x18);
    }
    else {
      if (cVar3 == 'T') {
        lVar5 = FUN_001115ec(param_1);
        __s1 = *(char **)(param_1 + 0x18);
      }
      else {
        if (cVar3 == 's') {
          if (pcVar15[2] == 'r') {
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            uVar7 = FUN_00113404(param_1);
            uVar8 = FUN_00114db0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar9 = FUN_001117c4(param_1);
              uVar8 = FUN_00110800(param_1,4,uVar8,uVar9);
            }
            lVar5 = FUN_00110800(param_1,1,uVar7,uVar8);
            __s1 = *(char **)(param_1 + 0x18);
          }
          else {
            if (pcVar15[2] != 'p') goto LAB_00111920;
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            uVar7 = FUN_0011611c(param_1);
            lVar5 = FUN_00110800(param_1,0x4a,uVar7,0);
            __s1 = *(char **)(param_1 + 0x18);
          }
        }
        else {
          if (cVar3 == 'f') {
            if (pcVar15[2] != 'p') goto LAB_00111920;
            *(char **)(param_1 + 0x18) = pcVar15 + 3;
            if (pcVar15[3] == 'T') {
              lVar13 = 0;
              *(char **)(param_1 + 0x18) = pcVar15 + 4;
            }
            else {
              iVar4 = FUN_001114bc(param_1);
              lVar13 = (longlong)(iVar4 + 1);
              if (iVar4 + 1 == 0) {
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_00111a2c;
              }
            }
            iVar4 = *(int *)(param_1 + 0x28);
            if (iVar4 < *(int *)(param_1 + 0x2c)) {
              *(int *)(param_1 + 0x28) = iVar4 + 1;
              lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
              if (lVar5 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 6;
                *(longlong *)(lVar5 + 8) = lVar13;
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_001119cc;
              }
            }
            goto switchD_00111b60_caseD_4;
          }
          if ((byte)(cVar3 - 0x30U) < 10) {
LAB_001119ac:
            lVar5 = FUN_00114db0(param_1);
            __s1 = *(char **)(param_1 + 0x18);
            if (lVar5 != 0) {
              if (*__s1 == 'I') {
                uVar7 = FUN_001117c4(param_1);
                lVar5 = FUN_00110800(param_1,4,lVar5,uVar7);
                __s1 = *(char **)(param_1 + 0x18);
              }
              goto LAB_001119cc;
            }
          }
          else {
            if (cVar3 == 'o') {
              if (pcVar15[2] == 'n') {
                *(char **)(param_1 + 0x18) = pcVar15 + 3;
                goto LAB_001119ac;
              }
            }
            else {
              if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar15[2] == 'l')) {
                uVar7 = 0;
                if (cVar3 == 't') {
                  uVar7 = FUN_00113404(param_1);
                  __s1 = *(char **)(param_1 + 0x18);
                }
                *(char **)(param_1 + 0x18) = __s1 + 2;
                uVar8 = FUN_00112cb0(param_1,0x45);
                lVar5 = FUN_00110800(param_1,0x30,uVar7,uVar8);
                __s1 = *(char **)(param_1 + 0x18);
                goto LAB_001119cc;
              }
            }
LAB_00111920:
            piVar6 = (int *)FUN_00114bbc(param_1);
            if (piVar6 != (int *)0x0) {
              iVar4 = *piVar6;
              if (iVar4 == 0x31) {
                ppcVar16 = *(char ***)(piVar6 + 2);
                __s1 = *ppcVar16;
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                iVar4 = strcmp(__s1,"st");
                if (iVar4 == 0) {
                  uVar7 = FUN_00113404(param_1);
LAB_00111cfc:
                  lVar5 = FUN_00110800(param_1,0x36,piVar6,uVar7);
                  __s1 = *(char **)(param_1 + 0x18);
                  goto LAB_001119cc;
                }
                switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                case 1:
                  cVar3 = *__s1;
                  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar7 = FUN_0011611c(param_1);
                      uVar7 = FUN_00110800(param_1,0x38,uVar7,uVar7);
                      goto LAB_00111cfc;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_00111c88_caseD_1;
                case 3:
                  goto switchD_00111b60_caseD_3;
                case 2:
                  goto switchD_00111b60_caseD_2;
                case 0:
                  goto switchD_00111b60_caseD_0;
                }
              }
              else {
                if (iVar4 == 0x32) {
                  switch(piVar6[2]) {
                  case 0:
switchD_00111b60_caseD_0:
                    lVar5 = FUN_00110800(param_1,0x35,piVar6,0);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001119cc;
                  case 2:
                    __s1 = (char *)0x0;
switchD_00111b60_caseD_2:
                    if (((**(char ***)(piVar6 + 2))[1] == 'c') &&
                       ((cVar3 = ***(char ***)(piVar6 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                        ((byte)(cVar3 + 0x9dU) < 2)))) {
                      uVar7 = FUN_00113404(param_1);
                    }
                    else {
                      uVar7 = FUN_0011611c(param_1);
                    }
                    iVar4 = strcmp(__s1,"cl");
                    if (iVar4 == 0) {
                      uVar8 = FUN_00112cb0(param_1,0x45);
                    }
                    else {
                      iVar4 = strcmp(__s1,"dt");
                      if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                        uVar8 = FUN_00114db0(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar9 = FUN_001117c4(param_1);
                          uVar8 = FUN_00110800(param_1,4,uVar8,uVar9);
                        }
                      }
                      else {
                        uVar8 = FUN_0011611c(param_1);
                      }
                    }
                    uVar7 = FUN_00110800(param_1,0x38,uVar7,uVar8);
                    lVar5 = FUN_00110800(param_1,0x37,piVar6,uVar7);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001119cc;
                  case 3:
                    __s1 = (char *)0x0;
switchD_00111b60_caseD_3:
                    iVar4 = strcmp(__s1,"qu");
                    if (iVar4 == 0) {
                      local_18 = FUN_0011611c(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar3 = *__s1;
                      if (cVar3 == 'L') {
                        piVar14 = (int *)FUN_00115fa4(param_1);
                        __s1 = *(char **)(param_1 + 0x18);
                        cVar3 = *__s1;
LAB_00111fbc:
                        if (cVar3 == 'L') {
                          lVar5 = FUN_00115fa4(param_1);
                        }
                        else {
                          if (cVar3 == 'T') {
                            lVar5 = FUN_001115ec(param_1);
                          }
                          else {
                            if (cVar3 == 's') {
                              if (__s1[1] == 'r') {
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar7 = FUN_00113404(param_1);
                                uVar8 = FUN_00114db0(param_1);
                                if (**(char **)(param_1 + 0x18) == 'I') {
                                  uVar9 = FUN_001117c4(param_1);
                                  uVar8 = FUN_00110800(param_1,4,uVar8,uVar9);
                                }
                                lVar5 = FUN_00110800(param_1,1,uVar7,uVar8);
                              }
                              else {
                                if (__s1[1] != 'p') goto LAB_00112014;
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar7 = FUN_0011611c(param_1);
                                lVar5 = FUN_00110800(param_1,0x4a,uVar7,0);
                              }
                            }
                            else {
                              if (cVar3 == 'f') {
                                if (__s1[1] == 'p') {
                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                  if (__s1[2] == 'T') {
                                    lVar13 = 0;
                                    *(char **)(param_1 + 0x18) = __s1 + 3;
                                  }
                                  else {
                                    iVar4 = FUN_001114bc(param_1);
                                    if (iVar4 + 1 == 0) goto LAB_00112474;
                                    lVar13 = (longlong)(iVar4 + 1);
                                  }
                                  iVar4 = *(int *)(param_1 + 0x28);
                                  lVar5 = 0;
                                  if (iVar4 < *(int *)(param_1 + 0x2c)) {
                                    *(int *)(param_1 + 0x28) = iVar4 + 1;
                                    lVar5 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
                                    if (lVar5 != 0) {
                                      *(undefined4 *)
                                       (*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 6;
                                      *(longlong *)(lVar5 + 8) = lVar13;
                                    }
                                  }
                                }
                                else {
LAB_00112014:
                                  piVar10 = (int *)FUN_00114bbc(param_1);
                                  if (piVar10 == (int *)0x0) {
LAB_00112474:
                                    lVar5 = 0;
                                  }
                                  else {
                                    iVar4 = *piVar10;
                                    if (iVar4 == 0x31) {
                                      ppcVar16 = *(char ***)(piVar10 + 2);
                                      __s1 = *ppcVar16;
                                      *(int *)(param_1 + 0x50) =
                                           *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                                      iVar4 = strcmp(__s1,"st");
                                      if (iVar4 != 0) {
                                        lVar5 = 0;
                                        switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                                        case 3:
                                          goto switchD_00112470_caseD_3;
                                        case 2:
                                          goto switchD_00112470_caseD_2;
                                        case 0:
                                          goto switchD_00112470_caseD_0;
                                        default:
                                          goto switchD_00112470_caseD_4;
                                        case 1:
                                          goto switchD_00112470_caseD_1;
                                        }
                                      }
                                      uVar7 = FUN_00113404(param_1);
                                    }
                                    else {
                                      if (iVar4 == 0x32) {
                                        lVar5 = 0;
                                        switch(piVar10[2]) {
                                        case 0:
switchD_00112470_caseD_0:
                                          lVar5 = FUN_00110800(param_1,0x35,piVar10,0);
                                          break;
                                        case 2:
                                          __s1 = (char *)0x0;
switchD_00112470_caseD_2:
                                          if ((**(char ***)(piVar10 + 2))[1] == 'c') {
                                            cVar3 = ***(char ***)(piVar10 + 2);
                                            bVar2 = cVar3 + 0x8e;
                                            if ((1 < bVar2) && (1 < (byte)(cVar3 + 0x9dU)))
                                            goto LAB_0011272c;
                                            local_20 = FUN_00113404(param_1,(ulonglong)bVar2,__s1,0)
                                            ;
                                          }
                                          else {
LAB_0011272c:
                                            local_20 = FUN_0011611c(param_1);
                                          }
                                          iVar4 = strcmp(__s1,"cl");
                                          if (iVar4 == 0) {
                                            uVar7 = FUN_00112cb0(param_1,0x45);
                                          }
                                          else {
                                            iVar4 = strcmp(__s1,"dt");
                                            if ((iVar4 == 0) ||
                                               (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                                              uVar7 = FUN_00114db0(param_1);
                                              if (**(char **)(param_1 + 0x18) == 'I') {
                                                uVar8 = FUN_001117c4(param_1);
                                                uVar7 = FUN_00110800(param_1,4,uVar7,uVar8);
                                              }
                                            }
                                            else {
                                              uVar7 = FUN_0011611c(param_1);
                                            }
                                          }
                                          uVar7 = FUN_00110800(param_1,0x38,local_20,uVar7);
                                          lVar5 = FUN_00110800(param_1,0x37,piVar10,uVar7);
                                          break;
                                        case 3:
                                          __s1 = (char *)0x0;
switchD_00112470_caseD_3:
                                          iVar4 = strcmp(__s1,"qu");
                                          if (iVar4 == 0) {
                                            local_20 = FUN_0011611c(param_1);
                                            local_28 = FUN_0011611c(param_1);
                                            uVar7 = FUN_0011611c(param_1);
                                          }
                                          else {
                                            if ((*__s1 != 'n') ||
                                               ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                                            goto LAB_00112474;
                                            local_20 = FUN_00112cb0(param_1,0x5f);
                                            local_28 = FUN_00113404(param_1);
                                            __s1 = *(char **)(param_1 + 0x18);
                                            cVar3 = *__s1;
                                            if (cVar3 != 'E') {
                                              if (cVar3 == 'p') {
                                                lVar5 = 0;
                                                if (__s1[1] == 'i') {
                                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                                  uVar7 = FUN_00112cb0(param_1,0x45);
                                                  goto LAB_00112864;
                                                }
                                              }
                                              else {
                                                if (cVar3 != 'i') goto LAB_00112474;
                                                lVar5 = 0;
                                                if (__s1[1] == 'l') {
                                                  uVar7 = FUN_0011611c(param_1);
                                                  goto LAB_00112864;
                                                }
                                              }
                                              break;
                                            }
                                            uVar7 = 0;
                                            *(char **)(param_1 + 0x18) = __s1 + 1;
                                          }
LAB_00112864:
                                          uVar7 = FUN_00110800(param_1,0x3b,local_28,uVar7);
                                          uVar7 = FUN_00110800(param_1,0x3a,local_20,uVar7);
                                          lVar5 = FUN_00110800(param_1,0x39,piVar10,uVar7);
                                          break;
                                        case 1:
                                          goto switchD_00112408_caseD_1;
                                        }
                                        goto switchD_00112470_caseD_4;
                                      }
                                      if (iVar4 != 0x33) goto LAB_00112474;
                                      if (**(char **)(param_1 + 0x18) == '_') {
                                        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                                        uVar7 = FUN_00112cb0(param_1,0x45);
                                        goto LAB_0011205c;
                                      }
switchD_00112408_caseD_1:
                                      uVar7 = FUN_0011611c(param_1);
                                    }
LAB_0011205c:
                                    lVar5 = FUN_00110800(param_1,0x36,piVar10,uVar7);
                                  }
                                }
                              }
                              else {
                                if (9 < (byte)(cVar3 - 0x30U)) {
                                  if (cVar3 != 'o') goto LAB_00111ff4;
                                  if (__s1[1] != 'n') goto LAB_00112014;
                                  *(char **)(param_1 + 0x18) = __s1 + 2;
                                }
                                lVar5 = FUN_00114db0(param_1);
                                if ((lVar5 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
                                  uVar7 = FUN_001117c4(param_1);
                                  lVar5 = FUN_00110800(param_1,4,lVar5,uVar7);
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        if (cVar3 == 'T') {
                          piVar14 = (int *)FUN_001115ec(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          goto LAB_00111fbc;
                        }
                        if (cVar3 == 's') {
                          if (__s1[1] == 'r') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            piVar14 = (int *)FUN_00113404(param_1);
                            uVar7 = FUN_00114db0(param_1);
                            if (**(char **)(param_1 + 0x18) != 'I') {
                              piVar14 = (int *)FUN_00110800(param_1,1,piVar14,uVar7);
                              __s1 = *(char **)(param_1 + 0x18);
                              cVar3 = *__s1;
                              goto LAB_00111fbc;
                            }
                            uVar8 = FUN_001117c4(param_1);
                            uVar7 = FUN_00110800(param_1,4,uVar7,uVar8);
                            uVar8 = 1;
                            goto LAB_00111fa8;
                          }
                          if (__s1[1] != 'p') goto LAB_00111f58;
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          piVar14 = (int *)FUN_0011611c(param_1);
                          uVar7 = 0x4a;
LAB_001122fc:
                          piVar14 = (int *)FUN_00110800(param_1,uVar7,piVar14,0);
LAB_00112308:
                          __s1 = *(char **)(param_1 + 0x18);
LAB_0011230c:
                          cVar3 = *__s1;
                          goto LAB_00111fbc;
                        }
                        if (cVar3 == 'f') {
                          if (__s1[1] != 'p') goto LAB_00111f58;
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          if (__s1[2] == 'T') {
                            __s1 = __s1 + 3;
                            lVar5 = 0;
                            *(char **)(param_1 + 0x18) = __s1;
                          }
                          else {
                            iVar4 = FUN_001114bc(param_1);
                            __s1 = *(char **)(param_1 + 0x18);
                            if (iVar4 + 1 == 0) {
LAB_00112318:
                              piVar14 = (int *)0x0;
                              cVar3 = *__s1;
                              goto LAB_00111fbc;
                            }
                            lVar5 = (longlong)(iVar4 + 1);
                          }
                          iVar4 = *(int *)(param_1 + 0x28);
                          if (iVar4 < *(int *)(param_1 + 0x2c)) {
                            *(int *)(param_1 + 0x28) = iVar4 + 1;
                            piVar14 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18
                                             );
                            if (piVar14 == (int *)0x0) goto LAB_0011230c;
                            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18)
                                 = 6;
                            *(longlong *)(piVar14 + 2) = lVar5;
                            cVar3 = *__s1;
                          }
                          else {
                            cVar3 = *__s1;
                            piVar14 = (int *)0x0;
                          }
                          goto LAB_00111fbc;
                        }
                        if ((byte)(cVar3 - 0x30U) < 10) {
LAB_00112170:
                          piVar14 = (int *)FUN_00114db0(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          if ((piVar14 != (int *)0x0) && (cVar3 == 'I')) {
                            uVar7 = FUN_001117c4(param_1);
                            uVar8 = 4;
                            goto LAB_00111fa8;
                          }
                          goto LAB_00111fbc;
                        }
                        if (cVar3 == 'o') {
                          if (__s1[1] == 'n') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            goto LAB_00112170;
                          }
                        }
                        else {
                          if (((cVar3 == 't') || (cVar3 == 'i')) && (__s1[1] == 'l')) {
                            uVar7 = 0;
                            if (cVar3 == 't') {
                              uVar7 = FUN_00113404(param_1);
                              __s1 = *(char **)(param_1 + 0x18);
                            }
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            uVar8 = FUN_00112cb0(param_1,0x45);
                            piVar14 = (int *)FUN_00110800(param_1,0x30,uVar7,uVar8);
                            __s1 = *(char **)(param_1 + 0x18);
                            cVar3 = *__s1;
                            goto LAB_00111fbc;
                          }
                        }
LAB_00111f58:
                        piVar14 = (int *)FUN_00114bbc(param_1);
                        if (piVar14 == (int *)0x0) goto LAB_00112308;
                        iVar4 = *piVar14;
                        if (iVar4 == 0x31) {
                          ppcVar16 = *(char ***)(piVar14 + 2);
                          __s1 = *ppcVar16;
                          *(int *)(param_1 + 0x50) =
                               *(int *)(param_1 + 0x50) + *(int *)(ppcVar16 + 2) + -2;
                          iVar4 = strcmp(__s1,"st");
                          if (iVar4 != 0) {
                            switch(*(undefined4 *)((longlong)ppcVar16 + 0x14)) {
                            case 3:
                              goto switchD_001124f4_caseD_3;
                            default:
                              goto switchD_001124f4_caseD_4;
                            case 2:
                              goto switchD_001124f4_caseD_2;
                            case 0:
                              goto switchD_001124f4_caseD_0;
                            case 1:
                              goto switchD_001124f4_caseD_1;
                            }
                          }
                          uVar7 = FUN_00113404(param_1);
                          uVar8 = 0x36;
                          goto LAB_00111fa8;
                        }
                        if (iVar4 != 0x32) {
                          if (iVar4 == 0x33) {
                            if (**(char **)(param_1 + 0x18) != '_') goto switchD_00112388_caseD_1;
                            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                            uVar7 = FUN_00112cb0(param_1,0x45);
                            goto LAB_00111fa0;
                          }
switchD_001124f4_caseD_4:
                          __s1 = *(char **)(param_1 + 0x18);
                          goto LAB_00112318;
                        }
                        switch(piVar14[2]) {
                        case 0:
switchD_001124f4_caseD_0:
                          uVar7 = 0x35;
                          goto LAB_001122fc;
                        case 2:
                          __s1 = (char *)0x0;
switchD_001124f4_caseD_2:
                          if (((**(char ***)(piVar14 + 2))[1] == 'c') &&
                             ((cVar3 = ***(char ***)(piVar14 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                              ((byte)(cVar3 + 0x9dU) < 2)))) {
                            local_20 = FUN_00113404(param_1);
                          }
                          else {
                            local_20 = FUN_0011611c(param_1);
                          }
                          iVar4 = strcmp(__s1,"cl");
                          if (iVar4 == 0) {
                            uVar7 = FUN_00112cb0(param_1,0x45);
                          }
                          else {
                            iVar4 = strcmp(__s1,"dt");
                            if ((iVar4 == 0) || (iVar4 = strcmp(__s1,"pt"), iVar4 == 0)) {
                              uVar7 = FUN_00114db0(param_1);
                              if (**(char **)(param_1 + 0x18) == 'I') {
                                uVar8 = FUN_001117c4(param_1);
                                uVar7 = FUN_00110800(param_1,4,uVar7,uVar8);
                              }
                            }
                            else {
                              uVar7 = FUN_0011611c(param_1);
                            }
                          }
                          uVar7 = FUN_00110800(param_1,0x38,local_20,uVar7);
                          uVar8 = 0x37;
                          goto LAB_00111fa8;
                        case 3:
                          __s1 = (char *)0x0;
switchD_001124f4_caseD_3:
                          iVar4 = strcmp(__s1,"qu");
                          if (iVar4 == 0) {
                            local_20 = FUN_0011611c(param_1);
                            uVar7 = FUN_0011611c(param_1);
                            uVar8 = FUN_0011611c(param_1);
LAB_001126dc:
                            uVar7 = FUN_00110800(param_1,0x3b,uVar7,uVar8);
                            uVar7 = FUN_00110800(param_1,0x3a,local_20,uVar7);
                            uVar8 = 0x39;
                            goto LAB_00111fa8;
                          }
                          if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                          goto switchD_001124f4_caseD_4;
                          local_20 = FUN_00112cb0(param_1,0x5f);
                          uVar7 = FUN_00113404(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar3 = *__s1;
                          if (cVar3 == 'E') {
                            uVar8 = 0;
                            *(char **)(param_1 + 0x18) = __s1 + 1;
                            goto LAB_001126dc;
                          }
                          if (cVar3 == 'p') {
                            if (__s1[1] == 'i') {
                              *(char **)(param_1 + 0x18) = __s1 + 2;
                              uVar8 = FUN_00112cb0(param_1,0x45);
                              goto LAB_001126dc;
                            }
                          }
                          else {
                            if (cVar3 != 'i') {
                              piVar14 = (int *)0x0;
                              goto LAB_00111fbc;
                            }
                            if (__s1[1] == 'l') {
                              uVar8 = FUN_0011611c(param_1);
                              goto LAB_001126dc;
                            }
                          }
                          piVar14 = (int *)0x0;
LAB_00111ff4:
                          if (((cVar3 != 't') && (cVar3 != 'i')) || (__s1[1] != 'l'))
                          goto LAB_00112014;
                          uVar7 = 0;
                          if (cVar3 == 't') {
                            uVar7 = FUN_00113404(param_1);
                          }
                          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                          uVar8 = FUN_00112cb0(param_1,0x45);
                          lVar5 = FUN_00110800(param_1,0x30,uVar7,uVar8);
                          break;
                        case 1:
                          goto switchD_00112388_caseD_1;
                        default:
                          goto switchD_001124f4_caseD_4;
                        }
                      }
                    }
                    else {
                      if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w')))) break;
                      local_18 = FUN_00112cb0(param_1,0x5f);
                      piVar14 = (int *)FUN_00113404(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar3 = *__s1;
                      if (cVar3 != 'E') {
                        if (cVar3 == 'p') {
                          lVar5 = 0;
                          if (__s1[1] == 'i') {
                            *(char **)(param_1 + 0x18) = __s1 + 2;
                            lVar5 = FUN_00112cb0(param_1,0x45);
                            goto switchD_00112470_caseD_4;
                          }
                        }
                        else {
                          lVar5 = 0;
                          if ((cVar3 == 'i') && (__s1[1] == 'l')) {
                            lVar5 = FUN_0011611c(param_1);
                            goto switchD_00112470_caseD_4;
                          }
                        }
                        goto LAB_001119cc;
                      }
                      lVar5 = 0;
                      *(char **)(param_1 + 0x18) = __s1 + 1;
                    }
switchD_00112470_caseD_4:
                    uVar7 = FUN_00110800(param_1,0x3b,piVar14,lVar5);
                    uVar7 = FUN_00110800(param_1,0x3a,local_18,uVar7);
                    lVar5 = FUN_00110800(param_1,0x39,piVar6,uVar7);
                    __s1 = *(char **)(param_1 + 0x18);
                    goto LAB_001119cc;
                  case 1:
                    goto switchD_00111c88_caseD_1;
                  }
                }
                else {
                  if (iVar4 == 0x33) {
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar7 = FUN_00112cb0(param_1,0x45);
                      goto LAB_00111cfc;
                    }
switchD_00111c88_caseD_1:
                    uVar7 = FUN_0011611c(param_1);
                    goto LAB_00111cfc;
                  }
                }
              }
            }
switchD_00111b60_caseD_4:
            __s1 = *(char **)(param_1 + 0x18);
          }
LAB_00111a2c:
          lVar5 = 0;
        }
      }
    }
LAB_001119cc:
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*__s1 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = __s1 + 1;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = FUN_00110800(param_1,0x2f,lVar5,0);
  *plVar11 = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  pcVar15 = *(char **)(param_1 + 0x18);
  plVar11 = (longlong *)(lVar5 + 0x10);
  cVar3 = *pcVar15;
  if (cVar3 == 'E') {
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    *(char **)(param_1 + 0x18) = pcVar15 + 1;
    return local_8;
  }
  goto LAB_00111834;
switchD_001124f4_caseD_1:
  cVar3 = *__s1;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0011611c(param_1);
      uVar7 = FUN_00110800(param_1,0x38,uVar7,uVar7);
      uVar8 = 0x36;
      goto LAB_00111fa8;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_00112388_caseD_1:
  uVar7 = FUN_0011611c(param_1);
LAB_00111fa0:
  uVar8 = 0x36;
LAB_00111fa8:
  piVar14 = (int *)FUN_00110800(param_1,uVar8,piVar14,uVar7);
  __s1 = *(char **)(param_1 + 0x18);
  cVar3 = *__s1;
  goto LAB_00111fbc;
switchD_00112470_caseD_1:
  cVar3 = *__s1;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (__s1[1] == cVar3)) {
    bVar2 = **(byte **)(param_1 + 0x18);
    if (bVar2 != 0x5f) {
      uVar7 = FUN_0011611c(param_1,(ulonglong)bVar2,__s1,0);
      uVar7 = FUN_00110800(param_1,0x38,uVar7,uVar7);
      goto LAB_0011205c;
    }
    *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
  }
  goto switchD_00112408_caseD_1;
}



longlong FUN_00112cb0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *__s1;
  longlong *plVar10;
  char **ppcVar11;
  longlong local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  plVar10 = &local_8;
  local_8 = 0;
  if (*__s1 == param_2) {
    *(char **)(param_1 + 0x18) = __s1 + 1;
    uVar5 = FUN_00110800(param_1,0x2e,0,0);
    return uVar5;
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = *__s1;
    if (cVar2 == 'L') {
      lVar6 = FUN_00115fa4(param_1);
LAB_00112e74:
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      if (cVar2 == 'T') {
        lVar6 = FUN_001115ec(param_1);
        goto LAB_00112e74;
      }
      if (cVar2 == 's') {
        if (__s1[1] == 'r') {
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar5 = FUN_00113404(param_1);
          uVar8 = FUN_00114db0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar9 = FUN_001117c4(param_1);
            uVar8 = FUN_00110800(param_1,4,uVar8,uVar9);
          }
          lVar6 = FUN_00110800(param_1,1,uVar5,uVar8);
        }
        else {
          if (__s1[1] != 'p') goto LAB_00112d64;
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar5 = FUN_0011611c(param_1);
          lVar6 = FUN_00110800(param_1,0x4a,uVar5,0);
        }
        goto LAB_00112e74;
      }
      if (cVar2 == 'f') {
        if (__s1[1] != 'p') goto LAB_00112d64;
        *(char **)(param_1 + 0x18) = __s1 + 2;
        if (__s1[2] == 'T') {
          lVar7 = 0;
          *(char **)(param_1 + 0x18) = __s1 + 3;
        }
        else {
          iVar3 = FUN_001114bc(param_1);
          if (iVar3 + 1 == 0) goto switchD_00113030_caseD_4;
          lVar7 = (longlong)(iVar3 + 1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto switchD_00113030_caseD_4;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18;
        if (lVar6 == 0) goto switchD_00113030_caseD_4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 6;
        *(longlong *)(lVar6 + 8) = lVar7;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          if (cVar2 == 'o') {
            if (__s1[1] == 'n') {
              *(char **)(param_1 + 0x18) = __s1 + 2;
              goto LAB_00112dd8;
            }
          }
          else {
            if (((cVar2 == 't') || (cVar2 == 'i')) && (__s1[1] == 'l')) {
              uVar5 = 0;
              if (cVar2 == 't') {
                uVar5 = FUN_00113404(param_1);
                __s1 = *(char **)(param_1 + 0x18);
              }
              *(char **)(param_1 + 0x18) = __s1 + 2;
              uVar8 = FUN_00112cb0(param_1,0x45);
              lVar6 = FUN_00110800(param_1,0x30,uVar5,uVar8);
              goto LAB_00112e74;
            }
          }
LAB_00112d64:
          piVar4 = (int *)FUN_00114bbc(param_1);
          if (piVar4 == (int *)0x0) goto switchD_00113030_caseD_4;
          iVar3 = *piVar4;
          if (iVar3 == 0x31) {
            ppcVar11 = *(char ***)(piVar4 + 2);
            __s1 = *ppcVar11;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar11 + 2) + -2;
            iVar3 = strcmp(__s1,"st");
            if (iVar3 != 0) {
              switch(*(undefined4 *)((longlong)ppcVar11 + 0x14)) {
              case 0:
                goto switchD_00113030_caseD_0;
              case 1:
                goto switchD_00113030_caseD_1;
              case 2:
                goto switchD_00113030_caseD_2;
              case 3:
                goto switchD_00113030_caseD_3;
              default:
                goto switchD_00113030_caseD_4;
              }
            }
            uVar5 = FUN_00113404(param_1);
          }
          else {
            if (iVar3 == 0x32) {
              switch(piVar4[2]) {
              case 0:
switchD_00113030_caseD_0:
                lVar6 = FUN_00110800(param_1,0x35,piVar4,0);
                goto LAB_00112e74;
              case 1:
                goto switchD_00113008_caseD_1;
              case 2:
                __s1 = (char *)0x0;
switchD_00113030_caseD_2:
                if (((**(char ***)(piVar4 + 2))[1] == 'c') &&
                   ((cVar2 = ***(char ***)(piVar4 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                    ((byte)(cVar2 + 0x9dU) < 2)))) {
                  uVar5 = FUN_00113404(param_1);
                }
                else {
                  uVar5 = FUN_0011611c(param_1);
                }
                iVar3 = strcmp(__s1,"cl");
                if (iVar3 == 0) {
                  uVar8 = FUN_00112cb0(param_1,0x45);
                }
                else {
                  iVar3 = strcmp(__s1,"dt");
                  if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"pt"), iVar3 == 0)) {
                    uVar8 = FUN_00114db0(param_1);
                    if (**(char **)(param_1 + 0x18) == 'I') {
                      uVar9 = FUN_001117c4(param_1);
                      uVar8 = FUN_00110800(param_1,4,uVar8,uVar9);
                    }
                  }
                  else {
                    uVar8 = FUN_0011611c(param_1);
                  }
                }
                uVar5 = FUN_00110800(param_1,0x38,uVar5,uVar8);
                lVar6 = FUN_00110800(param_1,0x37,piVar4,uVar5);
                goto LAB_00112e74;
              case 3:
                __s1 = (char *)0x0;
switchD_00113030_caseD_3:
                iVar3 = strcmp(__s1,"qu");
                if (iVar3 == 0) {
                  uVar5 = FUN_0011611c(param_1);
                  uVar8 = FUN_0011611c(param_1);
                  uVar9 = FUN_0011611c(param_1);
                }
                else {
                  if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                  goto switchD_00113030_caseD_4;
                  uVar5 = FUN_00112cb0(param_1,0x5f);
                  uVar8 = FUN_00113404(param_1);
                  __s1 = *(char **)(param_1 + 0x18);
                  cVar2 = *__s1;
                  if (cVar2 == 'E') {
                    uVar9 = 0;
                    *(char **)(param_1 + 0x18) = __s1 + 1;
                  }
                  else {
                    if (cVar2 == 'p') {
                      if (__s1[1] != 'i') goto switchD_00113030_caseD_4;
                      *(char **)(param_1 + 0x18) = __s1 + 2;
                      uVar9 = FUN_00112cb0(param_1,0x45);
                    }
                    else {
                      if ((cVar2 != 'i') || (__s1[1] != 'l')) {
switchD_00113030_caseD_4:
                        *(undefined4 *)(param_1 + 0x54) = uVar1;
                        return 0;
                      }
                      uVar9 = FUN_0011611c(param_1);
                    }
                  }
                }
                uVar8 = FUN_00110800(param_1,0x3b,uVar8,uVar9);
                uVar5 = FUN_00110800(param_1,0x3a,uVar5,uVar8);
                lVar6 = FUN_00110800(param_1,0x39,piVar4,uVar5);
                goto LAB_00112e74;
              default:
                goto switchD_00113030_caseD_4;
              }
            }
            if (iVar3 != 0x33) goto switchD_00113030_caseD_4;
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar5 = FUN_00112cb0(param_1,0x45);
              goto LAB_00112dac;
            }
switchD_00113008_caseD_1:
            uVar5 = FUN_0011611c(param_1);
          }
LAB_00112dac:
          lVar6 = FUN_00110800(param_1,0x36,piVar4,uVar5);
          goto LAB_00112e74;
        }
LAB_00112dd8:
        lVar6 = FUN_00114db0(param_1);
        if (lVar6 == 0) goto switchD_00113030_caseD_4;
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar5 = FUN_001117c4(param_1);
          lVar6 = FUN_00110800(param_1,4,lVar6,uVar5);
          goto LAB_00112e74;
        }
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    lVar6 = FUN_00110800(param_1,0x2e,lVar6,0);
    *plVar10 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    __s1 = *(char **)(param_1 + 0x18);
    plVar10 = (longlong *)(lVar6 + 0x10);
    if (*__s1 == param_2) {
      *(char **)(param_1 + 0x18) = __s1 + 1;
      return local_8;
    }
  } while( true );
switchD_00113030_caseD_1:
  cVar2 = *__s1;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (__s1[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar5 = FUN_0011611c(param_1);
      uVar5 = FUN_00110800(param_1,0x38,uVar5,uVar5);
      goto LAB_00112dac;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00113008_caseD_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_00113404(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  int *piVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  char *__s1;
  int *local_8;
  
  pbVar22 = *(byte **)(param_1 + 0x18);
  bVar7 = *pbVar22;
  if ((bVar7 == 0x56 || bVar7 == 0x72) || (bVar7 == 0x4b)) {
    ppiVar11 = (int **)FUN_00110900(param_1,&local_8,0);
    if (ppiVar11 == (int **)0x0) {
      return (int *)0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar12 = (int *)FUN_00116784(param_1);
      *ppiVar11 = piVar12;
    }
    else {
      piVar12 = (int *)FUN_00113404();
      *ppiVar11 = piVar12;
    }
    if (piVar12 == (int *)0x0) {
      return (int *)0;
    }
    if (*piVar12 - 0x1fU < 2) {
      piVar20 = *(int **)(piVar12 + 2);
      *(int **)(piVar12 + 2) = local_8;
      local_8 = *ppiVar11;
      *ppiVar11 = piVar20;
    }
    if (local_8 == (int *)0x0) {
      return (int *)0;
    }
    iVar10 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar10) {
      return (int *)0;
    }
    *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
    *(int *)(param_1 + 0x38) = iVar10 + 1;
    return local_8;
  }
  switch((uint)bVar7) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x4e:
  case 0x5a:
    local_8 = (int *)FUN_00115334(param_1);
    break;
  default:
    goto switchD_00113480_caseD_3a;
  case 0x41:
    pbVar21 = pbVar22 + 1;
    *(byte **)(param_1 + 0x18) = pbVar21;
    if (pbVar22[1] == 0x5f) {
      lVar13 = 0;
    }
    else {
      if ((byte)(pbVar22[1] - 0x30) < 10) {
        pbVar22 = pbVar22 + 2;
        do {
          pbVar23 = pbVar22;
          *(byte **)(param_1 + 0x18) = pbVar23;
          pbVar22 = pbVar23 + 1;
        } while ((byte)(*pbVar23 - 0x30) < 10);
        lVar13 = FUN_001108a0(param_1,pbVar21,(ulonglong)(uint)((int)pbVar23 - (int)pbVar21));
joined_r0x00113edc:
        if (lVar13 == 0) goto LAB_00113628;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = 1;
        bVar7 = pbVar22[1];
        if (bVar7 == 0x4c) {
          lVar13 = FUN_00115fa4(param_1);
LAB_00113ed8:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto joined_r0x00113edc;
        }
        if (bVar7 == 0x54) {
          lVar13 = FUN_001115ec(param_1);
          goto LAB_00113ed8;
        }
        if (bVar7 == 0x73) {
          if (pbVar22[2] == 0x72) {
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar16 = FUN_00113404(param_1);
            uVar17 = FUN_00114db0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar18 = FUN_001117c4(param_1);
              uVar17 = FUN_00110800(param_1,4,uVar17,uVar18);
              lVar13 = FUN_00110800(param_1,1,uVar16,uVar17);
            }
            else {
              lVar13 = FUN_00110800(param_1,1,uVar16,uVar17);
            }
          }
          else {
            if (pbVar22[2] != 0x70) goto LAB_00113e7c;
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar16 = FUN_0011611c(param_1);
            lVar13 = FUN_00110800(param_1,0x4a,uVar16,0);
          }
          goto LAB_00113ed8;
        }
        if (bVar7 != 0x66) {
          if ((byte)(bVar7 - 0x30) < 10) {
LAB_00113f50:
            lVar13 = FUN_00114db0(param_1);
            if (lVar13 != 0) {
              pbVar21 = *(byte **)(param_1 + 0x18);
              if (*pbVar21 != 0x49) {
                *(undefined4 *)(param_1 + 0x54) = uVar2;
                goto LAB_00113618;
              }
              uVar16 = FUN_001117c4(param_1);
              lVar13 = FUN_00110800(param_1,4,lVar13,uVar16);
              goto LAB_00113ed8;
            }
          }
          else {
            if (bVar7 == 0x6f) {
              if (pbVar22[2] == 0x6e) {
                *(byte **)(param_1 + 0x18) = pbVar22 + 3;
                goto LAB_00113f50;
              }
            }
            else {
              if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[2] == 0x6c)) {
                uVar16 = 0;
                if (bVar7 == 0x74) {
                  uVar16 = FUN_00113404(param_1);
                }
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                uVar17 = FUN_00112cb0(param_1,0x45);
                lVar13 = FUN_00110800(param_1,0x30,uVar16,uVar17);
                goto LAB_00113ed8;
              }
            }
LAB_00113e7c:
            piVar12 = (int *)FUN_00114bbc(param_1);
            if (piVar12 != (int *)0x0) {
              iVar10 = *piVar12;
              if (iVar10 == 0x31) {
                __s1 = **(char ***)(piVar12 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                iVar10 = strcmp(__s1,"st");
                if (iVar10 == 0) {
                  uVar16 = FUN_00113404(param_1);
LAB_00113ec4:
                  lVar13 = FUN_00110800(param_1,0x36,piVar12,uVar16);
                  goto LAB_00113ed8;
                }
                switch(*(undefined4 *)(*(longlong *)(piVar12 + 2) + 0x14)) {
                case 1:
                  cVar8 = *__s1;
                  if (((cVar8 == 'm') || (cVar8 == 'p')) && (__s1[1] == cVar8)) {
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar16 = FUN_0011611c(param_1);
                      uVar16 = FUN_00110800(param_1,0x38,uVar16,uVar16);
                      goto LAB_00113ec4;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  }
                  goto switchD_00114214_caseD_1;
                case 3:
                  goto switchD_00114440_caseD_3;
                case 2:
                  goto switchD_00114440_caseD_2;
                case 0:
                  goto switchD_00114440_caseD_0;
                }
              }
              else {
                if (iVar10 == 0x32) {
                  switch(piVar12[2]) {
                  case 0:
switchD_00114440_caseD_0:
                    lVar13 = FUN_00110800(param_1,0x35,piVar12,0);
                    goto LAB_00113ed8;
                  case 2:
                    __s1 = (char *)0x0;
switchD_00114440_caseD_2:
                    if (((**(char ***)(piVar12 + 2))[1] == 'c') &&
                       ((cVar8 = ***(char ***)(piVar12 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                        ((byte)(cVar8 + 0x9dU) < 2)))) {
                      uVar16 = FUN_00113404(param_1);
                    }
                    else {
                      uVar16 = FUN_0011611c(param_1);
                    }
                    iVar10 = strcmp(__s1,"cl");
                    if (iVar10 == 0) {
                      uVar17 = FUN_00112cb0(param_1,0x45);
                    }
                    else {
                      iVar10 = strcmp(__s1,"dt");
                      if ((iVar10 == 0) || (iVar10 = strcmp(__s1,"pt"), iVar10 == 0)) {
                        uVar17 = FUN_00114db0(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar18 = FUN_001117c4(param_1);
                          uVar17 = FUN_00110800(param_1,4,uVar17,uVar18);
                        }
                      }
                      else {
                        uVar17 = FUN_0011611c(param_1);
                      }
                    }
                    uVar16 = FUN_00110800(param_1,0x38,uVar16,uVar17);
                    lVar13 = FUN_00110800(param_1,0x37,piVar12,uVar16);
                    goto LAB_00113ed8;
                  case 3:
                    __s1 = (char *)0x0;
switchD_00114440_caseD_3:
                    iVar10 = strcmp(__s1,"qu");
                    if (iVar10 == 0) {
                      uVar16 = FUN_0011611c(param_1);
                      uVar17 = FUN_0011611c(param_1);
                      uVar18 = FUN_0011611c(param_1);
LAB_001142bc:
                      uVar17 = FUN_00110800(param_1,0x3b,uVar17,uVar18);
                      uVar16 = FUN_00110800(param_1,0x3a,uVar16,uVar17);
                      lVar13 = FUN_00110800(param_1,0x39,piVar12,uVar16);
                      goto LAB_00113ed8;
                    }
                    if ((*__s1 == 'n') && ((__s1[1] == 'a' || (__s1[1] == 'w')))) {
                      uVar16 = FUN_00112cb0(param_1,0x5f);
                      uVar17 = FUN_00113404(param_1);
                      __s1 = *(char **)(param_1 + 0x18);
                      cVar8 = *__s1;
                      if (cVar8 == 'E') {
                        uVar18 = 0;
                        *(char **)(param_1 + 0x18) = __s1 + 1;
                        goto LAB_001142bc;
                      }
                      if (cVar8 == 'p') {
                        if (__s1[1] == 'i') {
                          *(char **)(param_1 + 0x18) = __s1 + 2;
                          uVar18 = FUN_00112cb0(param_1,0x45);
                          goto LAB_001142bc;
                        }
                      }
                      else {
                        if ((cVar8 == 'i') && (__s1[1] == 'l')) {
                          uVar18 = FUN_0011611c(param_1);
                          goto LAB_001142bc;
                        }
                      }
                    }
                    break;
                  case 1:
                    goto switchD_00114214_caseD_1;
                  }
                }
                else {
                  if (iVar10 == 0x33) {
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar16 = FUN_00112cb0(param_1,0x45);
                      goto LAB_00113ec4;
                    }
switchD_00114214_caseD_1:
                    uVar16 = FUN_0011611c(param_1);
                    goto LAB_00113ec4;
                  }
                }
              }
            }
          }
switchD_00114440_caseD_4:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto LAB_00113628;
        }
        if (pbVar22[2] != 0x70) goto LAB_00113e7c;
        *(byte **)(param_1 + 0x18) = pbVar22 + 3;
        if (pbVar22[3] == 0x54) {
          iVar10 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        }
        else {
          iVar10 = FUN_001114bc(param_1);
          iVar10 = iVar10 + 1;
          if (iVar10 == 0) goto switchD_00114440_caseD_4;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto switchD_00114440_caseD_4;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
        if (lVar13 == 0) goto switchD_00114440_caseD_4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 6;
        *(longlong *)(lVar13 + 8) = (longlong)iVar10;
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
LAB_00113618:
      if (*pbVar21 != 0x5f) goto LAB_00113628;
    }
    *(byte **)(param_1 + 0x18) = pbVar21 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x2a,lVar13,uVar16);
    break;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x25,uVar16,0);
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    if (pbVar22[1] == 0) {
      return (int *)0;
    }
    *(byte **)(param_1 + 0x18) = pbVar22 + 2;
    switch(pbVar22[1]) {
    case 0x46:
      iVar10 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar10) {
        uRam0000000000000000 = 0;
                    // WARNING: Could not recover jumptable at 0x00113f38. Too many branches
                    // WARNING: Treating indirect jump as call
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x113f3c);
        uVar16 = (*UNRECOVERED_JUMPTABLE_00)();
        return (int *)uVar16;
      }
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18);
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x2c;
      bVar1 = (byte)(pbVar22[2] - 0x30) < 10;
      *(ushort *)(local_8 + 4) = (ushort)bVar1;
      if (bVar1) {
        FUN_00110eb4(param_1 + 0x18);
      }
      piVar12 = local_8;
      uVar16 = FUN_00113404(param_1);
      *(undefined8 *)(piVar12 + 2) = uVar16;
      if (*(longlong *)(local_8 + 2) == 0) {
        return (int *)0;
      }
      FUN_00110eb4(param_1 + 0x18);
      __s1 = *(char **)(param_1 + 0x18);
      uVar19 = 0;
      if (*__s1 != '\0') {
        *(char **)(param_1 + 0x18) = __s1 + 1;
        uVar19 = (ushort)(*__s1 == 's');
      }
      *(ushort *)((longlong)local_8 + 0x12) = uVar19;
      return local_8;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x54) = 1;
      bVar7 = pbVar22[2];
      if (bVar7 == 0x4c) {
        lVar13 = FUN_00115fa4(param_1);
      }
      else {
        if (bVar7 == 0x54) {
          lVar13 = FUN_001115ec(param_1);
        }
        else {
          if (bVar7 == 0x73) {
            if (pbVar22[3] == 0x72) {
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              uVar16 = FUN_00113404(param_1);
              uVar17 = FUN_00114db0(param_1);
              if (**(char **)(param_1 + 0x18) == 'I') {
                uVar18 = FUN_001117c4(param_1);
                uVar17 = FUN_00110800(param_1,4,uVar17,uVar18);
                lVar13 = FUN_00110800(param_1,1,uVar16,uVar17);
              }
              else {
                lVar13 = FUN_00110800(param_1,1,uVar16,uVar17);
              }
            }
            else {
              if (pbVar22[3] != 0x70) goto LAB_00113c60;
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              uVar16 = FUN_0011611c(param_1);
              lVar13 = FUN_00110800(param_1,0x4a,uVar16,0);
            }
          }
          else {
            if (bVar7 == 0x66) {
              if (pbVar22[3] != 0x70) goto LAB_00113c60;
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              if (pbVar22[4] == 0x54) {
                iVar10 = 0;
                *(byte **)(param_1 + 0x18) = pbVar22 + 5;
              }
              else {
                iVar10 = FUN_001114bc(param_1);
                iVar10 = iVar10 + 1;
                if (iVar10 == 0) goto LAB_001144d0;
              }
              iVar6 = *(int *)(param_1 + 0x28);
              if (*(int *)(param_1 + 0x2c) <= iVar6) goto LAB_001144d0;
              *(int *)(param_1 + 0x28) = iVar6 + 1;
              lVar14 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18;
              lVar13 = 0;
              if (lVar14 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18) = 6;
                *(longlong *)(lVar14 + 8) = (longlong)iVar10;
                lVar13 = lVar14;
              }
            }
            else {
              if ((byte)(bVar7 - 0x30) < 10) {
LAB_00114068:
                lVar13 = FUN_00114db0(param_1);
                if (lVar13 != 0) {
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    uVar16 = FUN_001117c4(param_1);
                    lVar13 = FUN_00110800(param_1,4,lVar13,uVar16);
                  }
                  goto switchD_001144bc_caseD_4;
                }
              }
              else {
                if (bVar7 == 0x6f) {
                  if (pbVar22[3] == 0x6e) {
                    *(byte **)(param_1 + 0x18) = pbVar22 + 4;
                    goto LAB_00114068;
                  }
                }
                else {
                  if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[3] == 0x6c)) {
                    uVar16 = 0;
                    if (bVar7 == 0x74) {
                      uVar16 = FUN_00113404(param_1);
                    }
                    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
                    uVar17 = FUN_00112cb0(param_1,0x45);
                    lVar13 = FUN_00110800(param_1,0x30,uVar16,uVar17);
                    goto switchD_001144bc_caseD_4;
                  }
                }
LAB_00113c60:
                piVar12 = (int *)FUN_00114bbc(param_1);
                if (piVar12 != (int *)0x0) {
                  iVar10 = *piVar12;
                  if (iVar10 == 0x31) {
                    __s1 = **(char ***)(piVar12 + 2);
                    *(int *)(param_1 + 0x50) =
                         *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(piVar12 + 2) + 2) + -2;
                    iVar10 = strcmp(__s1,"st");
                    if (iVar10 != 0) {
                      lVar13 = 0;
                      switch(*(undefined4 *)(*(longlong *)(piVar12 + 2) + 0x14)) {
                      case 3:
                        goto switchD_001144bc_caseD_3;
                      case 2:
                        goto switchD_001144bc_caseD_2;
                      case 0:
                        goto switchD_001144bc_caseD_0;
                      default:
                        goto switchD_001144bc_caseD_4;
                      case 1:
                        goto switchD_001144bc_caseD_1;
                      }
                    }
                    uVar16 = FUN_00113404(param_1);
                  }
                  else {
                    if (iVar10 == 0x32) {
                      lVar13 = 0;
                      switch(piVar12[2]) {
                      case 0:
switchD_001144bc_caseD_0:
                        lVar13 = FUN_00110800(param_1,0x35,piVar12,0);
                        break;
                      case 2:
                        __s1 = (char *)0x0;
switchD_001144bc_caseD_2:
                        if ((**(char ***)(piVar12 + 2))[1] == 'c') {
                          cVar8 = ***(char ***)(piVar12 + 2);
                          bVar7 = cVar8 + 0x8e;
                          if ((1 < bVar7) && (1 < (byte)(cVar8 + 0x9dU))) goto LAB_00114704;
                          uVar16 = FUN_00113404(param_1,(ulonglong)bVar7,0);
                        }
                        else {
LAB_00114704:
                          uVar16 = FUN_0011611c(param_1);
                        }
                        iVar10 = strcmp(__s1,"cl");
                        if (iVar10 == 0) {
                          uVar17 = FUN_00112cb0(param_1,0x45);
                        }
                        else {
                          iVar10 = strcmp(__s1,"dt");
                          if ((iVar10 == 0) || (iVar10 = strcmp(__s1,"pt"), iVar10 == 0)) {
                            uVar17 = FUN_00114db0(param_1);
                            if (**(char **)(param_1 + 0x18) == 'I') {
                              uVar18 = FUN_001117c4(param_1);
                              uVar17 = FUN_00110800(param_1,4,uVar17,uVar18);
                            }
                          }
                          else {
                            uVar17 = FUN_0011611c(param_1);
                          }
                        }
                        uVar16 = FUN_00110800(param_1,0x38,uVar16,uVar17);
                        lVar13 = FUN_00110800(param_1,0x37,piVar12,uVar16);
                        break;
                      case 3:
                        __s1 = (char *)0x0;
switchD_001144bc_caseD_3:
                        iVar10 = strcmp(__s1,"qu");
                        if (iVar10 == 0) {
                          uVar16 = FUN_0011611c(param_1);
                          uVar17 = FUN_0011611c(param_1);
                          uVar18 = FUN_0011611c(param_1);
                        }
                        else {
                          if ((*__s1 != 'n') || ((__s1[1] != 'a' && (__s1[1] != 'w'))))
                          goto LAB_001144d0;
                          uVar16 = FUN_00112cb0(param_1,0x5f);
                          uVar17 = FUN_00113404(param_1);
                          __s1 = *(char **)(param_1 + 0x18);
                          cVar8 = *__s1;
                          if (cVar8 != 'E') {
                            if (cVar8 == 'p') {
                              if (__s1[1] == 'i') {
                                *(char **)(param_1 + 0x18) = __s1 + 2;
                                uVar18 = FUN_00112cb0(param_1,0x45);
                                goto LAB_00114874;
                              }
                            }
                            else {
                              if ((cVar8 == 'i') && (__s1[1] == 'l')) {
                                uVar18 = FUN_0011611c(param_1);
                                goto LAB_00114874;
                              }
                            }
                            goto LAB_001144d0;
                          }
                          uVar18 = 0;
                          *(char **)(param_1 + 0x18) = __s1 + 1;
                        }
LAB_00114874:
                        uVar17 = FUN_00110800(param_1,0x3b,uVar17,uVar18);
                        uVar16 = FUN_00110800(param_1,0x3a,uVar16,uVar17);
                        lVar13 = FUN_00110800(param_1,0x39,piVar12,uVar16);
                        break;
                      case 1:
                        goto switchD_001146d4_caseD_1;
                      }
                      goto switchD_001144bc_caseD_4;
                    }
                    if (iVar10 != 0x33) goto LAB_001144d0;
                    if (**(char **)(param_1 + 0x18) == '_') {
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar16 = FUN_00112cb0(param_1,0x45);
                      goto LAB_00113ca8;
                    }
switchD_001146d4_caseD_1:
                    uVar16 = FUN_0011611c(param_1);
                  }
LAB_00113ca8:
                  lVar13 = FUN_00110800(param_1,0x36,piVar12,uVar16);
                  goto switchD_001144bc_caseD_4;
                }
              }
LAB_001144d0:
              lVar13 = 0;
            }
          }
        }
      }
switchD_001144bc_caseD_4:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      local_8 = (int *)FUN_00110800(param_1,0x42,lVar13,0);
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      __s1 = *(char **)(param_1 + 0x18);
      if (*__s1 == '\0') {
        return (int *)0;
      }
      *(char **)(param_1 + 0x18) = __s1 + 1;
      if (*__s1 != 'E') {
        return (int *)0;
      }
      goto LAB_00113568;
    case 0x61:
      uVar16 = FUN_001108a0(param_1,&DAT_00124710,4);
      return (int *)uVar16;
    case 100:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139bb0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return (int *)lVar13;
        }
      }
      break;
    case 0x65:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139bd0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 10;
          return (int *)lVar13;
        }
      }
      break;
    case 0x66:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139b90;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return (int *)lVar13;
        }
      }
      break;
    case 0x68:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139bf0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          return (int *)lVar13;
        }
      }
      break;
    case 0x69:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139c30;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return (int *)lVar13;
        }
      }
      break;
    case 0x6e:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139c50;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x11;
          return (int *)lVar13;
        }
      }
      break;
    case 0x70:
      uVar16 = FUN_00113404(param_1);
      local_8 = (int *)FUN_00110800(param_1,0x4a,uVar16,0);
      goto LAB_00113564;
    case 0x73:
      iVar10 = *(int *)(param_1 + 0x28);
      if (iVar10 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar10 + 1;
        lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
        if (lVar13 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
          *(undefined8 *)(lVar13 + 8) = 0x139c10;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return (int *)lVar13;
        }
      }
      break;
    case 0x76:
      local_8 = (int *)FUN_001168b4(param_1);
      goto LAB_00113564;
    default:
      goto switchD_00113480_caseD_3a;
    }
LAB_00113da8:
    local_8 = (int *)0x0;
                    // WARNING: Could not recover jumptable at 0x00113db4. Too many branches
                    // WARNING: Treating indirect jump as call
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1000,0x113db8);
    uVar16 = (*UNRECOVERED_JUMPTABLE_00)(_DAT_00000008);
    return (int *)uVar16;
  case 0x46:
    local_8 = (int *)FUN_00116784(param_1);
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x26,uVar16,0);
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    lVar13 = FUN_00113404(param_1);
    if ((lVar13 == 0) || (lVar14 = FUN_00113404(param_1), lVar14 == 0)) {
LAB_00113628:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_00110800(param_1,0x2b,lVar13,lVar14);
    }
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x24,uVar16,0);
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x22,uVar16,0);
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x23,uVar16,0);
    break;
  case 0x53:
    bVar7 = pbVar22[1];
    if (((9 < (byte)(bVar7 - 0x30)) && (bVar7 != 0x5f)) && (0x19 < (byte)(bVar7 + 0xbf))) {
      local_8 = (int *)FUN_00115334(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      if (*local_8 == 0x18) {
        return local_8;
      }
      goto LAB_00113568;
    }
    local_8 = (int *)FUN_00110ab0(param_1,0);
    if (**(char **)(param_1 + 0x18) != 'I') {
      return local_8;
    }
LAB_00113810:
    piVar12 = local_8;
    uVar16 = FUN_001117c4(param_1);
    local_8 = (int *)FUN_00110800(param_1,4,piVar12,uVar16);
    break;
  case 0x54:
    local_8 = (int *)FUN_001115ec(param_1);
    __s1 = *(char **)(param_1 + 0x18);
    if (*__s1 == 'I') {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (local_8 == (int *)0x0) {
          return (int *)0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0;
        }
        *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        goto LAB_00113810;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      uVar16 = FUN_001117c4(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        if (local_8 == (int *)0x0) {
          return (int *)0;
        }
        iVar10 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar10) {
          return (int *)0;
        }
        *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar10 + 1;
        local_8 = (int *)FUN_00110800(param_1,4,local_8,uVar16);
      }
      else {
        *(char **)(param_1 + 0x18) = __s1;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
    }
    break;
  case 0x55:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    local_8 = (int *)FUN_00111414(param_1);
    uVar16 = FUN_00113404(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x21,uVar16,local_8);
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    uVar9 = (uint)bVar7 - 0x61;
    iVar10 = *(int *)(param_1 + 0x28);
    uVar15 = -(ulonglong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulonglong)uVar9 << 5;
    if (iVar10 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar10 + 1;
      lVar13 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18;
      if (lVar13 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18) = 0x27;
        *(longlong *)(lVar13 + 8) = (longlong)&PTR_s_signed_char_00139850 + uVar15;
        iVar10 = *(int *)(&DAT_00139858 + uVar15);
        *(byte **)(param_1 + 0x18) = pbVar22 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar10;
        return (int *)lVar13;
      }
    }
    goto LAB_00113da8;
  case 0x75:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar16 = FUN_00111414(param_1);
    local_8 = (int *)FUN_00110800(param_1,0x28,uVar16,0);
  }
LAB_00113564:
  if (local_8 != (int *)0x0) {
LAB_00113568:
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 8) = local_8;
      *(int *)(param_1 + 0x38) = iVar10 + 1;
      return local_8;
    }
  }
switchD_00113480_caseD_3a:
  return (int *)0;
switchD_001144bc_caseD_1:
  cVar8 = *__s1;
  if (((cVar8 == 'm') || (cVar8 == 'p')) && (__s1[1] == cVar8)) {
    bVar7 = **(byte **)(param_1 + 0x18);
    if (bVar7 != 0x5f) {
      uVar16 = FUN_0011611c(param_1,(ulonglong)bVar7,0);
      uVar16 = FUN_00110800(param_1,0x38,uVar16,uVar16);
      goto LAB_00113ca8;
    }
    *(byte **)(param_1 + 0x18) = *(byte **)(param_1 + 0x18) + 1;
  }
  goto switchD_001146d4_caseD_1;
}



longlong FUN_00114aac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong local_8;
  
  pcVar3 = *(char **)(param_1 + 0x18);
  local_8 = 0;
  cVar1 = *pcVar3;
  if ((cVar1 != 'E' && cVar1 != '\0') && (plVar4 = &local_8, cVar1 != '.')) {
    while (((cVar1 != 'O' && (cVar1 != 'R')) || (pcVar3[1] != 'E'))) {
      lVar2 = FUN_00113404(param_1);
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = FUN_00110800(param_1,0x2e,lVar2,0);
      *plVar4 = lVar2;
      plVar4 = (longlong *)(lVar2 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      pcVar3 = *(char **)(param_1 + 0x18);
      cVar1 = *pcVar3;
      if ((cVar1 == 'E' || cVar1 == '\0') || (cVar1 == '.')) break;
    }
    if (local_8 != 0) {
      if (*(longlong *)(local_8 + 0x10) != 0) {
        return local_8;
      }
      if (**(int **)(local_8 + 8) == 0x27) {
        lVar2 = *(longlong *)(*(int **)(local_8 + 8) + 2);
        if (*(int *)(lVar2 + 0x1c) == 9) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(lVar2 + 8);
          *(undefined8 *)(local_8 + 8) = 0;
          return local_8;
        }
        return local_8;
      }
      return local_8;
    }
  }
  return 0;
}



longlong FUN_00114bbc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  
  pbVar7 = *(byte **)(param_1 + 0x18);
  if (*pbVar7 == 0) {
    bVar11 = 0;
    bVar10 = 0;
  }
  else {
    *(byte **)(param_1 + 0x18) = pbVar7 + 1;
    bVar10 = *pbVar7;
    if (pbVar7[1] == 0) {
      bVar11 = 0;
    }
    else {
      *(byte **)(param_1 + 0x18) = pbVar7 + 2;
      bVar11 = pbVar7[1];
      if (bVar10 == 0x76) {
        if (((uint)bVar11 - 0x30 & 0xff) < 10) {
          lVar6 = FUN_00111414();
          iVar8 = *(int *)(param_1 + 0x28);
          if (*(int *)(param_1 + 0x2c) <= iVar8) {
            return 0;
          }
          *(int *)(param_1 + 0x28) = iVar8 + 1;
          lVar2 = *(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18;
          if (lVar6 == 0) {
            return 0;
          }
          if (lVar2 == 0) {
            return 0;
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18) = 0x32;
          *(uint *)(lVar2 + 8) = (uint)bVar11 - 0x30;
          *(longlong *)(lVar2 + 0x10) = lVar6;
          return lVar2;
        }
      }
      else {
        if ((bVar11 == 0x76) && (bVar10 == 99)) {
          uVar3 = *(undefined4 *)(param_1 + 0x58);
          *(uint *)(param_1 + 0x58) = (uint)(*(int *)(param_1 + 0x54) == 0);
          uVar5 = FUN_00113404();
          if (*(int *)(param_1 + 0x58) == 0) {
            uVar5 = FUN_00110800(param_1,0x33,uVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar3;
          }
          else {
            uVar5 = FUN_00110800(param_1,0x34,uVar5,0);
            *(undefined4 *)(param_1 + 0x58) = uVar3;
          }
          return uVar5;
        }
      }
    }
  }
  iVar9 = 0x3d;
  iVar8 = 0;
  do {
    iVar1 = iVar8 + (iVar9 - iVar8) / 2;
    bVar4 = *(&PTR_DAT_00139df8)[(longlong)iVar1 * 3];
    if (bVar10 == bVar4) {
      bVar4 = (&PTR_DAT_00139df8)[(longlong)iVar1 * 3][1];
      if (bVar11 == bVar4) {
        iVar8 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar8) {
          return 0;
        }
        *(int *)(param_1 + 0x28) = iVar8 + 1;
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18;
        if (lVar6 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x18) = 0x31;
          *(undefined ***)(lVar6 + 8) = &PTR_DAT_00139df8 + (longlong)iVar1 * 3;
          return lVar6;
        }
        return 0;
      }
      if (bVar4 <= bVar11) goto LAB_00114c54;
    }
    else {
      if (bVar4 <= bVar10) {
LAB_00114c54:
        iVar8 = iVar1 + 1;
        iVar1 = iVar9;
      }
    }
    iVar9 = iVar1;
    if (iVar8 == iVar9) {
      return 0;
    }
  } while( true );
}



int * FUN_00114db0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  char *pcVar7;
  char *__s1;
  ulonglong uVar8;
  char cVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_8;
  
  __s1 = *(char **)(param_1 + 0x18);
  cVar9 = *__s1;
  if ((byte)(cVar9 - 0x30U) < 10) {
    local_8 = (int *)FUN_00111414();
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar9 = *pcVar7;
    goto joined_r0x00114f08;
  }
  if ((byte)(cVar9 + 0x9fU) < 0x1a) {
    local_8 = (int *)FUN_00114bbc();
    if ((local_8 != (int *)0x0) && (*local_8 == 0x31)) {
      __s1 = **(char ***)(local_8 + 2);
      *(int *)(param_1 + 0x50) =
           *(int *)(param_1 + 0x50) + *(int *)(*(char ***)(local_8 + 2) + 2) + 7;
      iVar3 = strcmp(__s1,"li");
      if (iVar3 == 0) {
        uVar4 = FUN_00111414(param_1);
        local_8 = (int *)FUN_00110800(param_1,0x36,local_8,uVar4);
      }
    }
    pcVar7 = *(char **)(param_1 + 0x18);
    cVar9 = *pcVar7;
    goto joined_r0x00114f08;
  }
  if (1 < (byte)(cVar9 + 0xbdU)) {
    if (cVar9 == 'L') {
      *(char **)(param_1 + 0x18) = __s1 + 1;
      local_8 = (int *)FUN_00111414();
      if (local_8 == (int *)0x0) {
        return (int *)0;
      }
      iVar3 = FUN_00111548(param_1);
      if (iVar3 == 0) {
        return (int *)0;
      }
      cVar9 = **(char **)(param_1 + 0x18);
      pcVar7 = *(char **)(param_1 + 0x18);
      goto joined_r0x00114f08;
    }
    if (cVar9 != 'U') {
      return (int *)0;
    }
    if (__s1[1] == 'l') {
      pcVar7 = __s1 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar9 = __s1[1];
      if (cVar9 == 'l') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        lVar6 = FUN_00114aac();
        pcVar7 = *(char **)(param_1 + 0x18);
        if (lVar6 == 0) goto LAB_0011513c;
        cVar9 = *pcVar7;
        if (cVar9 == 'E') {
          *(char **)(param_1 + 0x18) = pcVar7 + 1;
          if (pcVar7[1] == '_') {
            __s1 = pcVar7 + 2;
            iVar3 = 0;
            *(char **)(param_1 + 0x18) = __s1;
          }
          else {
            if (pcVar7[1] == 'n') {
              return (int *)0;
            }
            local_8 = (int *)0x0;
            iVar3 = FUN_00110eb4(param_1 + 0x18);
            pcVar7 = *(char **)(param_1 + 0x18);
            cVar9 = *pcVar7;
            if (cVar9 != '_') goto joined_r0x00114f08;
            iVar3 = iVar3 + 1;
            __s1 = pcVar7 + 1;
            *(char **)(param_1 + 0x18) = __s1;
            if (iVar3 < 0) {
              cVar9 = pcVar7[1];
              pcVar7 = __s1;
              local_8 = (int *)0x0;
              goto joined_r0x00114f08;
            }
          }
          iVar1 = *(int *)(param_1 + 0x28);
          if (iVar1 < *(int *)(param_1 + 0x2c)) {
            *(int *)(param_1 + 0x28) = iVar1 + 1;
            local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
            if (local_8 != (int *)0x0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 0x45;
              *(longlong *)(local_8 + 2) = lVar6;
              local_8[4] = iVar3;
              iVar3 = *(int *)(param_1 + 0x38);
              if (iVar3 < *(int *)(param_1 + 0x3c)) goto LAB_00115090;
            }
          }
          cVar9 = *__s1;
          local_8 = (int *)0x0;
          pcVar7 = __s1;
          goto joined_r0x00114f08;
        }
      }
    }
    else {
      if (__s1[1] != 't') {
        return (int *)0;
      }
      pcVar7 = __s1 + 1;
      *(char **)(param_1 + 0x18) = pcVar7;
      cVar9 = __s1[1];
      if (cVar9 == 't') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        lVar6 = FUN_001114bc();
        if ((-1 < lVar6) && (iVar3 = *(int *)(param_1 + 0x28), iVar3 < *(int *)(param_1 + 0x2c))) {
          *(int *)(param_1 + 0x28) = iVar3 + 1;
          local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
          if (local_8 != (int *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 0x47;
            *(longlong *)(local_8 + 2) = lVar6;
            iVar3 = *(int *)(param_1 + 0x38);
            if (iVar3 < *(int *)(param_1 + 0x3c)) {
LAB_00115090:
              *(int **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar3 * 8) = local_8;
              *(int *)(param_1 + 0x38) = iVar3 + 1;
              cVar9 = **(char **)(param_1 + 0x18);
              pcVar7 = *(char **)(param_1 + 0x18);
              goto joined_r0x00114f08;
            }
          }
        }
        pcVar7 = *(char **)(param_1 + 0x18);
LAB_0011513c:
        cVar9 = *pcVar7;
        local_8 = (int *)0x0;
        goto joined_r0x00114f08;
      }
    }
    local_8 = (int *)0x0;
    goto joined_r0x00114f08;
  }
  piVar5 = *(int **)(param_1 + 0x48);
  if ((piVar5 == (int *)0x0) || ((*piVar5 != 0 && (*piVar5 != 0x18)))) {
    if (cVar9 == 'C') goto LAB_00115280;
    if (cVar9 != 'D') {
      return (int *)0;
    }
LAB_0011516c:
    switch(__s1[1]) {
    case '0':
      iVar3 = 1;
      break;
    case '1':
      iVar3 = 2;
      break;
    case '2':
      iVar3 = 3;
      break;
    default:
switchD_001152a4_caseD_5:
      return (int *)0;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = __s1 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 8;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar9 = __s1[2];
        goto joined_r0x00114f08;
      }
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + piVar5[4];
    cVar9 = *__s1;
    if (cVar9 != 'C') {
      if (cVar9 != 'D') {
        local_8 = (int *)0x0;
        pcVar7 = __s1;
        goto joined_r0x00114f08;
      }
      goto LAB_0011516c;
    }
LAB_00115280:
    switch(__s1[1]) {
    case '1':
      iVar3 = 1;
      break;
    case '2':
      iVar3 = 2;
      break;
    case '3':
      iVar3 = 3;
      break;
    case '4':
      iVar3 = 4;
      break;
    case '5':
      iVar3 = 5;
      break;
    default:
      goto switchD_001152a4_caseD_5;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    pcVar7 = __s1 + 2;
    *(char **)(param_1 + 0x18) = pcVar7;
    if (iVar1 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar1 + 1;
      local_8 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18);
      if ((local_8 != (int *)0x0) && (piVar5 != (int *)0x0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 0x18) = 7;
        local_8[2] = iVar3;
        *(int **)(local_8 + 4) = piVar5;
        cVar9 = __s1[2];
        goto joined_r0x00114f08;
      }
    }
  }
  pcVar7 = __s1 + 2;
  cVar9 = *pcVar7;
  local_8 = (int *)0x0;
joined_r0x00114f08:
  if (cVar9 != 'B') {
    return local_8;
  }
  do {
    *(char **)(param_1 + 0x18) = pcVar7 + 1;
    bVar11 = false;
    bVar2 = pcVar7[1];
    if (bVar2 == 0x6e) {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      bVar11 = true;
      bVar2 = pcVar7[2];
      if ((byte)(bVar2 - 0x30) < 10) goto LAB_00114e68;
LAB_00114f38:
      uVar4 = 0;
    }
    else {
      if (9 < (byte)(bVar2 - 0x30)) goto LAB_00114f38;
LAB_00114e68:
      pbVar10 = *(byte **)(param_1 + 0x18);
      lVar6 = 0;
      do {
        pbVar10 = pbVar10 + 1;
        uVar8 = (ulonglong)bVar2;
        *(byte **)(param_1 + 0x18) = pbVar10;
        bVar2 = *pbVar10;
        lVar6 = lVar6 * 10 + uVar8 + -0x30;
      } while ((byte)(bVar2 - 0x30) < 10);
      if ((lVar6 < 1) || (bVar11)) goto LAB_00114f38;
      uVar4 = FUN_001111f4(param_1);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
    }
    local_8 = (int *)FUN_00110800(param_1,0x4b,local_8,uVar4);
    pcVar7 = *(char **)(param_1 + 0x18);
    if (*pcVar7 != 'B') {
      return local_8;
    }
  } while( true );
}



longlong FUN_00115334(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  int *piVar10;
  undefined *puVar11;
  int *piVar12;
  char cVar13;
  longlong lVar14;
  longlong local_8;
  
  puVar11 = *(undefined **)(param_1 + 0x18);
  switch(*puVar11) {
  case 0x4e:
    *(undefined **)(param_1 + 0x18) = puVar11 + 1;
    plVar5 = (longlong *)FUN_00110900(param_1,&local_8,1);
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
    if (cVar13 == 'O') {
      if (cVar13 == 'R') goto LAB_00115790;
      uVar7 = 0x20;
      iVar1 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
      lVar3 = 0;
      if (cVar13 != 'R') {
        lVar14 = 0;
        goto LAB_001154b0;
      }
LAB_00115790:
      uVar7 = 0x1f;
      iVar1 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar1;
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    lVar14 = 0;
    lVar3 = FUN_00110800(param_1,uVar7,0,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
LAB_001154b0:
    do {
      if (cVar13 == '\0') {
LAB_00115738:
        *plVar5 = 0;
        return 0;
      }
      pcVar8 = pcVar4;
      if (cVar13 == 'D') {
        if ((pcVar4[1] & 0xdfU) != 0x54) {
          lVar9 = FUN_00114db0(param_1);
          goto LAB_00115720;
        }
        lVar9 = FUN_00113404();
        goto LAB_00115720;
      }
      do {
        if ((((byte)(cVar13 - 0x30U) < 10) || ((byte)(cVar13 + 0x9fU) < 0x1a)) ||
           ((cVar13 == 'C' || cVar13 == 'U' || (cVar13 == 'L')))) {
          lVar9 = FUN_00114db0(param_1);
          if (lVar14 != 0) goto LAB_0011569c;
LAB_001156b0:
          if (cVar13 == 'S') goto LAB_001156ec;
        }
        else {
          if (cVar13 == 'S') {
            lVar9 = FUN_00110ab0(param_1,1);
            if (lVar14 != 0) {
LAB_0011569c:
              uVar7 = 1;
LAB_001156a0:
              lVar9 = FUN_00110800(param_1,uVar7,lVar14,lVar9);
              goto LAB_001156b0;
            }
            pcVar4 = *(char **)(param_1 + 0x18);
            cVar13 = *pcVar4;
            lVar14 = lVar9;
            goto LAB_001154b0;
          }
          if (cVar13 == 'I') {
            if (lVar14 != 0) {
              lVar9 = FUN_001117c4(param_1);
              uVar7 = 4;
              goto LAB_001156a0;
            }
            goto LAB_00115738;
          }
          if (cVar13 != 'T') {
            if (cVar13 == 'E') {
              *plVar5 = lVar14;
              if (lVar14 == 0) {
                return 0;
              }
              if (lVar3 != 0) {
                *(longlong *)(lVar3 + 8) = local_8;
                local_8 = lVar3;
              }
              if (**(char **)(param_1 + 0x18) == 'E') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                return local_8;
              }
              return 0;
            }
            if ((cVar13 != 'M') || (lVar14 == 0)) goto LAB_00115738;
            pcVar4 = pcVar8 + 1;
            *(char **)(param_1 + 0x18) = pcVar4;
            cVar13 = pcVar8[1];
            goto LAB_001154b0;
          }
          lVar9 = FUN_001115ec(param_1);
LAB_00115720:
          if (lVar14 != 0) goto LAB_0011569c;
        }
        pcVar8 = *(char **)(param_1 + 0x18);
        cVar13 = *pcVar8;
        lVar14 = lVar9;
      } while (cVar13 == 'E');
      if ((lVar9 == 0) || (iVar1 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar1))
      goto LAB_00115738;
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar9;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
LAB_001156ec:
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar13 = *pcVar4;
      lVar14 = lVar9;
    } while( true );
  default:
    lVar3 = FUN_00114db0(param_1);
    if (**(char **)(param_1 + 0x18) == 'I') {
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      uVar7 = FUN_001117c4(param_1);
      lVar3 = FUN_00110800(param_1,4,lVar3,uVar7);
    }
    break;
  case 0x53:
    if (puVar11[1] == 't') {
      *(undefined **)(param_1 + 0x18) = puVar11 + 2;
      uVar7 = FUN_001108a0(param_1,&DAT_00124730,3);
      uVar6 = FUN_00114db0(param_1);
      lVar3 = FUN_00110800(param_1,1,uVar7,uVar6);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
    }
    else {
      lVar3 = FUN_00110ab0(param_1,0);
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
    }
    uVar7 = FUN_001117c4(param_1);
    lVar3 = FUN_00110800(param_1,4,lVar3,uVar7);
    break;
  case 0x55:
    uVar7 = FUN_00114db0(param_1);
    return uVar7;
  case 0x5a:
    *(undefined **)(param_1 + 0x18) = puVar11 + 1;
    uVar7 = FUN_001158e0(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    if (*pcVar4 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (pcVar4[1] == 's') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_00111548(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar12 = (int *)FUN_001108a0(param_1,"string literal",0xe);
    }
    else {
      if (pcVar4[1] == 'd') {
        *(char **)(param_1 + 0x18) = pcVar4 + 2;
        iVar1 = FUN_001114bc(param_1);
        if (iVar1 < 0) {
          return 0;
        }
        piVar10 = (int *)FUN_00115334(param_1);
        if ((((piVar10 != (int *)0x0) && (*piVar10 != 0x45)) && (*piVar10 != 0x47)) &&
           (iVar2 = FUN_00111548(param_1), iVar2 == 0)) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        piVar12 = (int *)0x0;
        if (iVar2 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar2 + 1;
          piVar12 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18);
          if (piVar12 != (int *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x18) = 0x46;
            piVar12[4] = iVar1;
            *(int **)(piVar12 + 2) = piVar10;
          }
        }
      }
      else {
        piVar12 = (int *)FUN_00115334(param_1);
        if (((piVar12 != (int *)0x0) && (*piVar12 != 0x45)) &&
           ((*piVar12 != 0x47 && (iVar1 = FUN_00111548(param_1), iVar1 == 0)))) {
          return 0;
        }
      }
    }
    uVar7 = FUN_00110800(param_1,2,uVar7,piVar12);
    return uVar7;
  }
  return lVar3;
}



uint * FUN_001158e0(longlong param_1,int param_2)

{
  uint **ppuVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  char *pcVar14;
  
  pcVar9 = *(char **)(param_1 + 0x18);
  if ((*pcVar9 != 'T') && (*pcVar9 != 'G')) {
    puVar12 = (uint *)FUN_00115334();
    if ((puVar12 != (uint *)0x0) && ((param_2 != 0 && ((*(uint *)(param_1 + 0x10) & 1) == 0)))) {
      while (*puVar12 - 0x1c < 5) {
        puVar12 = *(uint **)(puVar12 + 2);
      }
      if (*puVar12 == 2) {
        piVar7 = *(int **)(puVar12 + 4);
        iVar4 = *piVar7;
        while (iVar4 - 0x1cU < 5) {
          piVar7 = *(int **)(piVar7 + 2);
          iVar4 = *piVar7;
        }
        *(int **)(puVar12 + 4) = piVar7;
      }
      return puVar12;
    }
    cVar2 = **(char **)(param_1 + 0x18);
    if (cVar2 == 'E' || cVar2 == '\0') {
      return puVar12;
    }
    puVar11 = puVar12;
    if (puVar12 == (uint *)0x0) {
      return (uint *)0;
    }
    do {
      uVar5 = *puVar11;
      if (uVar5 == 4) {
        puVar11 = *(uint **)(puVar11 + 2);
        goto joined_r0x00115a28;
      }
    } while (((3 < uVar5) && (uVar5 - 0x1c < 5)) &&
            (ppuVar1 = (uint **)(puVar11 + 2), puVar11 = *ppuVar1, *ppuVar1 != (uint *)0x0));
LAB_0011597c:
    if (cVar2 == 'J') goto LAB_00115ecc;
    lVar10 = 0;
    goto LAB_00115a6c;
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar4 + 0x14;
  if (*pcVar9 == 'T') {
    *(char **)(param_1 + 0x18) = pcVar9 + 1;
    if (pcVar9[1] == '\0') {
      return (uint *)0;
    }
    *(char **)(param_1 + 0x18) = pcVar9 + 2;
    switch(pcVar9[1]) {
    case 'C':
      lVar10 = FUN_00113404(param_1);
      lVar6 = FUN_00110eb4(param_1 + 0x18);
      if (lVar6 < 0) {
        return (uint *)0;
      }
      if (**(char **)(param_1 + 0x18) != '_') {
        return (uint *)0;
      }
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 0xb;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 5;
      break;
    default:
      return (uint *)0;
    case 'F':
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 0xe;
      lVar10 = 0;
      break;
    case 'H':
      puVar12 = (uint *)FUN_00115334(param_1);
      uVar8 = 0x14;
      lVar10 = 0;
      break;
    case 'I':
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 0xc;
      lVar10 = 0;
      break;
    case 'J':
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 0x12;
      lVar10 = 0;
      break;
    case 'S':
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 0xd;
      lVar10 = 0;
      break;
    case 'T':
      *(int *)(param_1 + 0x50) = iVar4 + 10;
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 10;
      lVar10 = 0;
      break;
    case 'V':
      *(int *)(param_1 + 0x50) = iVar4 + 0xf;
      puVar12 = (uint *)FUN_00113404(param_1);
      uVar8 = 9;
      lVar10 = 0;
      break;
    case 'W':
      puVar12 = (uint *)FUN_00115334(param_1);
      uVar8 = 0x15;
      lVar10 = 0;
      break;
    case 'c':
      iVar4 = FUN_001116d8(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      iVar4 = FUN_001116d8(param_1,0);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001158e0(param_1,0);
      uVar8 = 0x11;
      lVar10 = 0;
      break;
    case 'h':
      iVar4 = FUN_001116d8(param_1,0x68);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001158e0(param_1,0);
      uVar8 = 0xf;
      lVar10 = 0;
      break;
    case 'v':
      iVar4 = FUN_001116d8(param_1,0x76);
      if (iVar4 == 0) {
        return (uint *)0;
      }
      puVar12 = (uint *)FUN_001158e0(param_1,0);
      uVar8 = 0x10;
      lVar10 = 0;
    }
    goto LAB_00115aa0;
  }
  if (*pcVar9 != 'G') {
    return (uint *)0;
  }
  *(char **)(param_1 + 0x18) = pcVar9 + 1;
  if (pcVar9[1] == '\0') {
    return (uint *)0;
  }
  *(char **)(param_1 + 0x18) = pcVar9 + 2;
  switch(pcVar9[1]) {
  case 'A':
    puVar12 = (uint *)FUN_001158e0(param_1,0);
    uVar8 = 0x17;
    lVar10 = 0;
    break;
  default:
    return (uint *)0;
  case 'R':
    puVar12 = (uint *)FUN_00115334(param_1);
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar4 + 1;
      lVar10 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18;
      if (lVar10 == 0) goto LAB_00115f88;
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 0x41;
      uVar8 = FUN_00110eb4(param_1 + 0x18);
      *(undefined8 *)(lVar10 + 8) = uVar8;
    }
    else {
LAB_00115f88:
      lVar10 = 0;
    }
    uVar8 = 0x16;
    break;
  case 'T':
    if ((pcVar9[2] == '\0') || (*(char **)(param_1 + 0x18) = pcVar9 + 3, pcVar9[2] != 'n')) {
      puVar12 = (uint *)FUN_001158e0(param_1,0);
      uVar8 = 0x48;
      lVar10 = 0;
    }
    else {
      puVar12 = (uint *)FUN_001158e0(param_1,0);
      uVar8 = 0x49;
      lVar10 = 0;
    }
    break;
  case 'V':
    puVar12 = (uint *)FUN_00115334(param_1);
    uVar8 = 0x13;
    lVar10 = 0;
    break;
  case 'r':
    lVar10 = FUN_00110eb4(param_1 + 0x18);
    if (lVar10 < 2) {
      return (uint *)0;
    }
    pcVar9 = *(char **)(param_1 + 0x18);
    if (*pcVar9 == '\0') {
      return (uint *)0;
    }
    pcVar14 = pcVar9 + 1;
    *(char **)(param_1 + 0x18) = pcVar14;
    if (*pcVar9 != '_') {
      return (uint *)0;
    }
    lVar10 = lVar10 + -1;
    puVar11 = (uint *)0x0;
    do {
      if (*pcVar14 == '\0') {
        return (uint *)0;
      }
      uVar13 = 0;
      if (*pcVar14 == '$') {
        bVar3 = pcVar14[1];
        uVar5 = (uint)bVar3;
        if (bVar3 == 0x53) {
          uVar5 = 0x2f;
        }
        else {
          if (bVar3 == 0x5f) {
            uVar5 = 0x2e;
          }
          else {
            if (bVar3 != 0x24) {
              return (uint *)0;
            }
          }
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar4) {
LAB_00115f90:
          *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 2;
          return (uint *)0;
        }
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        puVar12 = (uint *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18);
        if (puVar12 == (uint *)0x0) goto LAB_00115f90;
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x18) = 0x40;
        lVar6 = -2;
        puVar12[2] = uVar5;
        pcVar14 = (char *)(*(longlong *)(param_1 + 0x18) + 2);
        *(char **)(param_1 + 0x18) = pcVar14;
      }
      else {
        do {
          uVar13 = uVar13 + 1;
          if ((lVar10 <= (longlong)uVar13) || (pcVar14[uVar13] == '\0')) break;
        } while (pcVar14[uVar13] != '$');
        lVar6 = -uVar13;
        puVar12 = (uint *)FUN_001108a0(param_1,pcVar14,uVar13 & 0xffffffff);
        pcVar14 = (char *)(*(longlong *)(param_1 + 0x18) + uVar13);
        *(char **)(param_1 + 0x18) = pcVar14;
        if (puVar12 == (uint *)0x0) {
          return (uint *)0;
        }
      }
      lVar10 = lVar10 + lVar6;
      if ((puVar11 != (uint *)0x0) &&
         (puVar12 = (uint *)FUN_00110800(param_1,0x3f,puVar11), puVar12 == (uint *)0x0)) {
        return (uint *)0;
      }
      puVar11 = puVar12;
    } while (0 < lVar10);
    uVar8 = 0x3e;
    lVar10 = 0;
  }
  goto LAB_00115aa0;
joined_r0x00115a28:
  if (puVar11 == (uint *)0x0) goto LAB_00115a54;
  uVar5 = *puVar11;
  if (8 < uVar5) {
    if (uVar5 == 0x34) goto LAB_0011597c;
    goto LAB_00115a54;
  }
  if (6 < uVar5) goto LAB_0011597c;
  if (1 < uVar5 - 1) goto LAB_00115a54;
  puVar11 = *(uint **)(puVar11 + 4);
  goto joined_r0x00115a28;
LAB_00115a54:
  if (cVar2 == 'J') {
LAB_00115ecc:
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  lVar10 = FUN_00113404(param_1);
  if (lVar10 == 0) {
LAB_00115f80:
    lVar10 = 0;
  }
  else {
LAB_00115a6c:
    lVar6 = FUN_00114aac(param_1);
    if (lVar6 == 0) goto LAB_00115f80;
    lVar10 = FUN_00110800(param_1,0x29,lVar10,lVar6);
  }
  uVar8 = 3;
LAB_00115aa0:
  uVar8 = FUN_00110800(param_1,uVar8,puVar12,lVar10);
  return (uint *)uVar8;
}



undefined8 FUN_00115fa4(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = *(char **)(param_1 + 0x18);
  if (*pcVar6 != 'L') {
    return 0;
  }
  pcVar4 = pcVar6 + 1;
  *(char **)(param_1 + 0x18) = pcVar4;
  cVar3 = pcVar6[1];
  if (cVar3 == 'Z') {
    if (cVar3 == '_') goto LAB_001160cc;
  }
  else {
    if (cVar3 != '_') {
      piVar1 = (int *)FUN_00113404();
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((*piVar1 == 0x27) && (*(int *)(*(longlong *)(piVar1 + 2) + 0x1c) != 0)) {
        *(int *)(param_1 + 0x50) =
             *(int *)(param_1 + 0x50) - *(int *)(*(longlong *)(piVar1 + 2) + 8);
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      uVar7 = 0x3c;
      cVar3 = *pcVar4;
      pcVar6 = pcVar4;
      if (cVar3 == 'n') {
        pcVar6 = pcVar4 + 1;
        *(char **)(param_1 + 0x18) = pcVar6;
        uVar7 = 0x3d;
        cVar3 = pcVar4[1];
      }
      pcVar4 = pcVar6;
      if (cVar3 == 'E') {
        uVar5 = 0;
      }
      else {
        do {
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar4 = pcVar4 + 1;
          *(char **)(param_1 + 0x18) = pcVar4;
          cVar3 = *pcVar4;
        } while (cVar3 != 'E');
        uVar5 = (ulonglong)(uint)((int)pcVar4 - (int)pcVar6);
      }
      uVar2 = FUN_001108a0(param_1,pcVar6,uVar5);
      uVar7 = FUN_00110800(param_1,uVar7,piVar1,uVar2);
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar3 = *pcVar4;
      goto LAB_0011607c;
    }
LAB_001160cc:
    pcVar4 = pcVar6 + 2;
    *(char **)(param_1 + 0x18) = pcVar4;
    cVar3 = pcVar6[2];
  }
  uVar7 = 0;
  if (cVar3 == 'Z') {
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar7 = FUN_001158e0(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar3 = *pcVar4;
  }
LAB_0011607c:
  if (cVar3 != 'E') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  return uVar7;
}



int * FUN_0011611c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *__s1;
  longlong lVar8;
  char **ppcVar9;
  
  __s1 = *(char **)(param_1 + 0x18);
  cVar2 = *__s1;
  if (cVar2 == 'L') {
    uVar4 = FUN_00115fa4();
    return (int *)uVar4;
  }
  if (cVar2 == 'T') {
    uVar4 = FUN_001115ec();
    return (int *)uVar4;
  }
  if (cVar2 == 's') {
    if (__s1[1] == 'r') {
      *(char **)(param_1 + 0x18) = __s1 + 2;
      piVar7 = (int *)FUN_00113404();
      uVar4 = FUN_00114db0(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        uVar6 = FUN_001117c4(param_1);
        uVar4 = FUN_00110800(param_1,4,uVar4,uVar6);
      }
      uVar6 = 1;
      goto LAB_0011620c;
    }
    if (__s1[1] == 'p') {
      *(char **)(param_1 + 0x18) = __s1 + 2;
      piVar7 = (int *)FUN_0011611c();
      uVar6 = 0x4a;
      uVar4 = 0;
      goto LAB_00116348;
    }
  }
  else {
    if (cVar2 == 'f') {
      if (__s1[1] == 'p') {
        *(char **)(param_1 + 0x18) = __s1 + 2;
        if (__s1[2] == 'T') {
          lVar8 = 0;
          *(char **)(param_1 + 0x18) = __s1 + 3;
        }
        else {
          iVar3 = FUN_001114bc();
          lVar8 = (longlong)(iVar3 + 1);
          if (iVar3 + 1 == 0) {
            return (int *)0;
          }
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) {
          return (int *)0;
        }
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18;
        if (lVar1 == 0) {
          return (int *)0;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18) = 6;
        *(longlong *)(lVar1 + 8) = lVar8;
        return (int *)lVar1;
      }
    }
    else {
      if ((byte)(cVar2 - 0x30U) < 10) {
LAB_00116168:
        piVar7 = (int *)FUN_00114db0(param_1);
        if (piVar7 == (int *)0x0) {
          return (int *)0;
        }
        if (**(char **)(param_1 + 0x18) != 'I') {
          return piVar7;
        }
        uVar4 = FUN_001117c4(param_1);
        uVar6 = 4;
        goto LAB_00116348;
      }
      if (cVar2 == 'o') {
        if (__s1[1] == 'n') {
          *(char **)(param_1 + 0x18) = __s1 + 2;
          goto LAB_00116168;
        }
      }
      else {
        if (((cVar2 == 't') || (cVar2 == 'i')) && (__s1[1] == 'l')) {
          piVar7 = (int *)0x0;
          if (cVar2 == 't') {
            piVar7 = (int *)FUN_00113404(param_1);
            __s1 = *(char **)(param_1 + 0x18);
          }
          *(char **)(param_1 + 0x18) = __s1 + 2;
          uVar4 = FUN_00112cb0(param_1,0x45);
          uVar6 = 0x30;
          goto LAB_00116348;
        }
      }
    }
  }
  piVar7 = (int *)FUN_00114bbc(param_1);
  if (piVar7 == (int *)0x0) {
    return (int *)0;
  }
  iVar3 = *piVar7;
  if (iVar3 == 0x31) {
    ppcVar9 = *(char ***)(piVar7 + 2);
    __s1 = *ppcVar9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(ppcVar9 + 2) + -2;
    iVar3 = strcmp(__s1,"st");
    if (iVar3 != 0) {
      switch(*(undefined4 *)((longlong)ppcVar9 + 0x14)) {
      case 0:
        goto switchD_00116434_caseD_0;
      case 1:
        goto switchD_00116434_caseD_1;
      case 2:
        goto switchD_00116434_caseD_2;
      case 3:
        goto switchD_00116434_caseD_3;
      default:
        goto switchD_00116434_caseD_4;
      }
    }
    uVar4 = FUN_00113404(param_1);
  }
  else {
    if (iVar3 == 0x32) {
      switch(piVar7[2]) {
      case 0:
switchD_00116434_caseD_0:
        uVar6 = 0x35;
        uVar4 = 0;
LAB_00116348:
        uVar4 = FUN_00110800(param_1,uVar6,piVar7,uVar4);
        return (int *)uVar4;
      case 1:
        goto switchD_001163b0_caseD_1;
      case 2:
        __s1 = (char *)0x0;
switchD_00116434_caseD_2:
        if (((**(char ***)(piVar7 + 2))[1] == 'c') &&
           ((cVar2 = ***(char ***)(piVar7 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
            ((byte)(cVar2 + 0x9dU) < 2)))) {
          uVar4 = FUN_00113404(param_1);
        }
        else {
          uVar4 = FUN_0011611c(param_1);
        }
        iVar3 = strcmp(__s1,"cl");
        if (iVar3 == 0) {
          uVar6 = FUN_00112cb0(param_1,0x45);
        }
        else {
          iVar3 = strcmp(__s1,"dt");
          if ((iVar3 == 0) || (iVar3 = strcmp(__s1,"pt"), iVar3 == 0)) {
            uVar6 = FUN_00114db0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar5 = FUN_001117c4(param_1);
              uVar6 = FUN_00110800(param_1,4,uVar6,uVar5);
            }
          }
          else {
            uVar6 = FUN_0011611c(param_1);
          }
        }
        uVar4 = FUN_00110800(param_1,0x38,uVar4,uVar6);
        uVar6 = 0x37;
        goto LAB_0011620c;
      case 3:
        __s1 = (char *)0x0;
switchD_00116434_caseD_3:
        iVar3 = strcmp(__s1,"qu");
        if (iVar3 == 0) {
          uVar4 = FUN_0011611c(param_1);
          uVar6 = FUN_0011611c(param_1);
          uVar5 = FUN_0011611c(param_1);
        }
        else {
          if (*__s1 != 'n') {
            return (int *)0;
          }
          if ((__s1[1] != 'a') && (__s1[1] != 'w')) {
            return (int *)0;
          }
          uVar4 = FUN_00112cb0(param_1,0x5f);
          uVar6 = FUN_00113404(param_1);
          __s1 = *(char **)(param_1 + 0x18);
          cVar2 = *__s1;
          if (cVar2 == 'E') {
            uVar5 = 0;
            *(char **)(param_1 + 0x18) = __s1 + 1;
          }
          else {
            if (cVar2 == 'p') {
              if (__s1[1] != 'i') {
                return (int *)0;
              }
              *(char **)(param_1 + 0x18) = __s1 + 2;
              uVar5 = FUN_00112cb0(param_1,0x45);
            }
            else {
              if ((cVar2 != 'i') || (__s1[1] != 'l')) {
switchD_00116434_caseD_4:
                return (int *)0;
              }
              uVar5 = FUN_0011611c(param_1);
            }
          }
        }
        uVar6 = FUN_00110800(param_1,0x3b,uVar6,uVar5);
        uVar4 = FUN_00110800(param_1,0x3a,uVar4,uVar6);
        uVar6 = 0x39;
        goto LAB_0011620c;
      default:
        goto switchD_00116434_caseD_4;
      }
    }
    if (iVar3 != 0x33) {
      return (int *)0;
    }
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar4 = FUN_00112cb0(param_1,0x45);
      goto LAB_00116200;
    }
switchD_001163b0_caseD_1:
    uVar4 = FUN_0011611c(param_1);
  }
LAB_00116200:
  uVar6 = 0x36;
LAB_0011620c:
  uVar4 = FUN_00110800(param_1,uVar6,piVar7,uVar4);
  return (int *)uVar4;
switchD_00116434_caseD_1:
  cVar2 = *__s1;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (__s1[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar4 = FUN_0011611c(param_1);
      uVar4 = FUN_00110800(param_1,0x38,uVar4,uVar4);
      goto LAB_00116200;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_001163b0_caseD_1;
}



undefined8 FUN_00116784(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'F') {
    return 0;
  }
  pcVar1 = pcVar7 + 1;
  *(char **)(param_1 + 0x18) = pcVar1;
  cVar2 = pcVar7[1];
  if (cVar2 == 'Y') {
    pcVar1 = pcVar7 + 2;
    *(char **)(param_1 + 0x18) = pcVar1;
    cVar2 = pcVar7[2];
  }
  if (cVar2 == 'J') {
    *(char **)(param_1 + 0x18) = pcVar1 + 1;
  }
  lVar4 = FUN_00113404();
  if ((lVar4 == 0) || (lVar5 = FUN_00114aac(param_1), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00110800(param_1,0x29,lVar4,lVar5);
  }
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar2 = *pcVar7;
  if (cVar2 == 'O') {
    if (cVar2 == 'R') goto LAB_0011689c;
    uVar8 = 0x20;
    iVar3 = *(int *)(param_1 + 0x50) + 3;
  }
  else {
    if (cVar2 != 'R') {
      if (cVar2 != 'E') {
        return 0;
      }
      goto LAB_00116824;
    }
LAB_0011689c:
    uVar8 = 0x1f;
    iVar3 = *(int *)(param_1 + 0x50) + 2;
  }
  *(int *)(param_1 + 0x50) = iVar3;
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  uVar6 = FUN_00110800(param_1,uVar8,uVar6,0);
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'E') {
    return 0;
  }
LAB_00116824:
  *(char **)(param_1 + 0x18) = pcVar7 + 1;
  return uVar6;
}


/*
Unable to decompile 'FUN_001168b4'
Cause: 
Low-level Error: Could not finish collapsing block structure
*/


void FUN_00118fe8(undefined *param_1,uint param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  longlong ***ppplVar3;
  char cVar4;
  byte bVar5;
  undefined uVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  longlong lVar10;
  longlong **pplVar11;
  int *piVar12;
  longlong lVar13;
  char *__s1;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong **pplVar22;
  int *piVar23;
  char **ppcVar24;
  longlong *plVar25;
  longlong ***ppplVar26;
  longlong **pplVar27;
  longlong ***ppplVar28;
  byte bVar29;
  int iVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  undefined8 unaff_x22;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  longlong ***local_90;
  longlong *local_88;
  longlong **local_80;
  longlong *local_78;
  longlong **local_70;
  longlong ***local_68;
  longlong ***local_60;
  longlong *local_58;
  longlong **local_50;
  longlong ***local_48;
  longlong ****local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined4 uStack44;
  longlong ***local_28;
  longlong *****local_20;
  longlong *local_18;
  ulonglong local_10;
  longlong ***local_8;
  
  if (param_3 == (longlong *)0x0) goto LAB_00119064;
  if (*(int *)(param_1 + 0x130) != 0) {
    return;
  }
  iVar8 = *(int *)param_3;
  switch(iVar8) {
  case 0:
    if ((param_2 >> 2 & 1) == 0) {
      iVar8 = *(int *)(param_3 + 2);
      lVar13 = param_3[1];
      if ((longlong)iVar8 != 0) {
        lVar19 = 0;
        lVar14 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar13 + lVar19);
          if (lVar14 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar10 = 1;
            lVar14 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar10 = lVar14 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar10;
          lVar19 = lVar19 + 1;
          param_1[lVar14] = uVar6;
          param_1[0x108] = uVar6;
          lVar14 = lVar10;
        } while ((longlong)iVar8 != lVar19);
      }
    }
    else {
      pbVar33 = (byte *)param_3[1];
      pbVar2 = pbVar33 + *(int *)(param_3 + 2);
      while (pbVar33 < pbVar2) {
        bVar29 = *pbVar33;
        if (((3 < (longlong)(pbVar2 + -(longlong)pbVar33)) && (bVar29 == 0x5f)) &&
           ((bVar5 = pbVar33[1], bVar5 == 0x5f &&
            ((bVar29 = bVar5, pbVar33[2] == 0x55 && (pbVar34 = pbVar33 + 3, pbVar34 < pbVar2)))))) {
          uVar32 = 0;
          do {
            bVar29 = *pbVar34;
            uVar17 = (uint)bVar29;
            uVar35 = uVar17 - 0x30;
            if (9 < (uVar35 & 0xff)) {
              if ((uVar17 - 0x41 & 0xff) < 6) {
                uVar35 = uVar17 - 0x37;
              }
              else {
                if (5 < (uVar17 - 0x61 & 0xff)) {
                  if (((pbVar34 < pbVar2) && (bVar29 == 0x5f)) && (uVar32 < 0x100)) {
                    lVar13 = *(longlong *)(param_1 + 0x100);
                    if (lVar13 == 0xff) {
                      param_1[0xff] = 0;
                      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                      *(undefined8 *)(param_1 + 0x100) = 0;
                      lVar13 = 0;
                      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
                    }
                    *(longlong *)(param_1 + 0x100) = lVar13 + 1;
                    param_1[lVar13] = (char)uVar32;
                    param_1[0x108] = (char)uVar32;
                    goto LAB_0011b6e4;
                  }
                  break;
                }
                uVar35 = (uint)bVar29 - 0x57;
              }
            }
            pbVar34 = pbVar34 + 1;
            uVar32 = (longlong)(int)uVar35 + uVar32 * 0x10;
          } while (pbVar34 != pbVar2);
          bVar29 = 0x5f;
        }
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = bVar29;
        param_1[0x108] = bVar29;
        pbVar34 = pbVar33;
LAB_0011b6e4:
        pbVar33 = pbVar34 + 1;
      }
    }
    break;
  case 1:
  case 2:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if ((param_2 >> 2 & 1) == 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        *param_1 = 0x3a;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_00119138:
        lVar13 = lVar19 + 1;
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x3a;
        param_1[0x108] = 0x3a;
        if (lVar19 != 0xff) goto LAB_00119138;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x3a;
      param_1[0x108] = 0x3a;
    }
    else {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x2e;
      param_1[0x108] = 0x2e;
    }
    piVar12 = (int *)param_3[2];
    if (*piVar12 == 0x46) {
      FUN_00111140(param_1,"{default arg#");
      FUN_00111348(param_1,(longlong)(piVar12[4] + 1));
      FUN_00111140(param_1,&DAT_00124748);
      piVar12 = *(int **)(piVar12 + 2);
    }
    FUN_00118fe8(param_1,(ulonglong)param_2,piVar12);
    break;
  case 3:
    uVar37 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    plVar21 = (longlong *)param_3[1];
    if (plVar21 != (longlong *)0x0) {
      iVar8 = *(int *)plVar21;
      ppplVar26 = *(longlong ****)(param_1 + 0x120);
      local_80 = (longlong **)0x0;
      *(longlong ****)(param_1 + 0x128) = &local_80;
      local_78 = plVar21;
      local_70._0_4_ = 0;
      local_68 = ppplVar26;
      if (iVar8 - 0x1cU < 5) {
        plVar21 = (longlong *)plVar21[1];
        if (plVar21 != (longlong *)0x0) {
          iVar8 = *(int *)plVar21;
          local_60 = &local_80;
          *(longlong ****)(param_1 + 0x128) = &local_60;
          local_58 = plVar21;
          local_50._0_4_ = 0;
          local_48 = ppplVar26;
          if (4 < iVar8 - 0x1cU) {
            lVar13 = 2;
            goto LAB_0011c654;
          }
          plVar21 = (longlong *)plVar21[1];
          if (plVar21 != (longlong *)0x0) {
            iVar8 = *(int *)plVar21;
            local_40 = (longlong ****)&local_60;
            local_38 = plVar21;
            *(longlong ******)(param_1 + 0x128) = &local_40;
            local_30 = 0;
            local_28 = ppplVar26;
            if (4 < iVar8 - 0x1cU) {
              lVar13 = 3;
              goto LAB_0011c654;
            }
            plVar21 = (longlong *)plVar21[1];
            if (plVar21 != (longlong *)0x0) {
              iVar8 = *(int *)plVar21;
              local_20 = &local_40;
              local_18 = plVar21;
              *(longlong *****)(param_1 + 0x128) = &local_28 + 1;
              local_10 = local_10 & 0xffffffff00000000;
              local_8 = ppplVar26;
              if (4 < iVar8 - 0x1cU) {
                lVar13 = 4;
                goto LAB_0011c654;
              }
            }
          }
        }
      }
      else {
        lVar13 = 1;
LAB_0011c654:
        uVar17 = (uint)lVar13;
        uVar35 = uVar17;
        if (iVar8 == 4) {
          *(longlong *****)(param_1 + 0x120) = &local_90;
          local_90 = ppplVar26;
          local_88 = plVar21;
LAB_0011c774:
          FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
          if (*(int *)plVar21 == 4) {
            *(longlong ****)(param_1 + 0x120) = local_90;
          }
          uVar17 = uVar35 - 1;
          if (*(int *)(&local_70 + (ulonglong)uVar17 * 4) == 0) {
            FUN_00110e3c(param_1,0x20);
            FUN_0011c9f4(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar17 * 4]);
          }
          if (uVar17 != 0) {
            uVar17 = uVar35 - 2;
            if (*(int *)(&local_70 + (ulonglong)uVar17 * 4) == 0) {
              FUN_00110e3c(param_1,0x20);
              FUN_0011c9f4(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar17 * 4]);
            }
            if (uVar17 != 0) {
              uVar35 = uVar35 - 3;
              if (*(int *)(&local_70 + (ulonglong)uVar35 * 4) == 0) {
                FUN_00110e3c(param_1,0x20);
                FUN_0011c9f4(param_1,(ulonglong)param_2,(&local_78)[(ulonglong)uVar35 * 4]);
              }
              if ((uVar35 != 0) && ((int)local_70 == 0)) {
                FUN_00110e3c(param_1,0x20);
                FUN_0011c9f4(param_1,(ulonglong)param_2,local_78);
                *(undefined8 *)(param_1 + 0x128) = uVar37;
                return;
              }
            }
          }
          *(undefined8 *)(param_1 + 0x128) = uVar37;
          return;
        }
        if (iVar8 != 2) goto LAB_0011c774;
        plVar25 = (longlong *)plVar21[2];
        if (*(int *)plVar25 == 0x46) {
          plVar25 = (longlong *)plVar25[1];
        }
        if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0011c774;
        if (uVar17 != 4) {
          uVar32 = (ulonglong)(uVar17 - 1);
          ppplVar28 = &local_80 + lVar13 * 4;
          *(longlong ****)(param_1 + 0x128) = ppplVar28;
          ppplVar3 = &local_80 + uVar32 * 4;
          uVar35 = uVar17 + 1;
          uVar36 = (ulonglong)uVar35;
          plVar20 = (&local_78)[uVar32 * 4];
          *ppplVar28 = *ppplVar3;
          (&local_78)[lVar13 * 4] = plVar20;
          pplVar27 = (&local_70)[uVar32 * 4 + 1];
          (&local_70)[lVar13 * 4] = (&local_70)[uVar32 * 4];
          (&local_70)[lVar13 * 4 + 1] = pplVar27;
          *(longlong ****)(&local_80 + lVar13 * 4) = ppplVar3;
          (&local_78)[uVar32 * 4] = plVar25;
          *(undefined4 *)(&local_70 + uVar32 * 4) = 0;
          *(longlong ****)(&local_70 + uVar32 * 4 + 1) = ppplVar26;
          plVar25 = (longlong *)plVar25[1];
          if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0011c774;
          if (uVar35 != 4) {
            uVar35 = uVar17 + 2;
            ppplVar3 = &local_80 + uVar36 * 4;
            *(longlong ****)(param_1 + 0x128) = ppplVar3;
            plVar20 = (&local_78)[lVar13 * 4];
            *ppplVar3 = *ppplVar28;
            (&local_78)[uVar36 * 4] = plVar20;
            pplVar27 = (&local_70)[lVar13 * 4 + 1];
            (&local_70)[uVar36 * 4] = (&local_70)[lVar13 * 4];
            (&local_70)[uVar36 * 4 + 1] = pplVar27;
            *(longlong ****)(&local_80 + uVar36 * 4) = ppplVar28;
            (&local_78)[lVar13 * 4] = plVar25;
            *(undefined4 *)(&local_70 + lVar13 * 4) = 0;
            *(longlong ****)(&local_70 + lVar13 * 4 + 1) = ppplVar26;
            plVar25 = (longlong *)plVar25[1];
            if (4 < *(int *)plVar25 - 0x1cU) goto LAB_0011c774;
            if (uVar35 != 4) {
              local_10 = CONCAT44(uStack44,local_30);
              local_18 = local_38;
              local_20 = &local_40;
              local_8 = local_28;
              *(longlong *****)(param_1 + 0x128) = &local_28 + 1;
              local_30 = 0;
              if (4 < *(int *)plVar25[1] - 0x1cU) {
                uVar35 = 4;
                local_38 = plVar25;
                local_28 = ppplVar26;
                goto LAB_0011c774;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 4:
    uVar37 = *(undefined8 *)(param_1 + 0x160);
    uVar38 = *(undefined8 *)(param_1 + 0x128);
    *(longlong **)(param_1 + 0x160) = param_3;
    *(undefined8 *)(param_1 + 0x128) = 0;
    piVar12 = (int *)param_3[1];
    if (((((param_2 >> 2 & 1) == 0) || (*piVar12 != 0)) || (piVar12[4] != 6)) ||
       (iVar8 = strncmp(*(char **)(piVar12 + 2),"JArray",6), iVar8 != 0)) {
      FUN_00118fe8(param_1,(ulonglong)param_2,piVar12);
      if (param_1[0x108] == '<') {
        FUN_00110e3c(param_1,0x20);
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      if (param_1[0x108] == '>') {
        FUN_00110e3c(param_1,0x20);
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      FUN_00111140(param_1,&DAT_00124758);
    }
    *(undefined8 *)(param_1 + 0x128) = uVar38;
    *(undefined8 *)(param_1 + 0x160) = uVar37;
    break;
  case 5:
    piVar12 = (int *)FUN_00110f3c(param_1,param_3 + 1);
    if (piVar12 != (int *)0x0) {
      if (*piVar12 != 0x2f) {
LAB_0011a200:
        puVar31 = *(undefined8 **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x120) = *puVar31;
        FUN_00118fe8(param_1,(ulonglong)param_2);
        *(undefined8 **)(param_1 + 0x120) = puVar31;
        return;
      }
      iVar8 = *(int *)(param_1 + 0x134);
      while (0 < iVar8) {
        piVar12 = *(int **)(piVar12 + 4);
        iVar8 = iVar8 + -1;
        if ((piVar12 == (int *)0x0) || (*piVar12 != 0x2f)) goto LAB_00119064;
      }
      if ((iVar8 == 0) && (*(longlong *)(piVar12 + 2) != 0)) goto LAB_0011a200;
    }
    goto LAB_00119064;
  case 6:
    lVar19 = param_3[1];
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar19 != 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x7b;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x70;
LAB_0011b0dc:
        lVar14 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar13] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x72;
          lVar13 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x6d;
        }
        else {
LAB_0011b0f8:
          lVar10 = lVar14 + 1;
          *(longlong *)(param_1 + 0x100) = lVar10;
          param_1[lVar14] = 0x72;
          param_1[0x108] = 0x72;
          if (lVar10 != 0xff) goto LAB_0011b114;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x6d;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar14 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar13] = 0x7b;
        param_1[0x108] = 0x7b;
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x70;
          lVar14 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0011b0f8;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar14] = 0x70;
        param_1[0x108] = 0x70;
        if (lVar13 != 0xff) goto LAB_0011b0dc;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar10 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x72;
LAB_0011b114:
        lVar13 = lVar10 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar10] = 0x6d;
        param_1[0x108] = 0x6d;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar14 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0011b134;
        }
      }
      lVar14 = lVar13 + 1;
LAB_0011b134:
      *(longlong *)(param_1 + 0x100) = lVar14;
      param_1[lVar13] = 0x23;
      param_1[0x108] = 0x23;
      uVar32 = 0;
      sprintf((char *)&local_80,"%ld",lVar19);
      sVar9 = strlen((char *)&local_80);
      lVar13 = *(longlong *)(param_1 + 0x100);
      lVar19 = lVar13;
      if (sVar9 != 0) {
        do {
          uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
          if (lVar19 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar13 = 1;
            lVar19 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar13 = lVar19 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar13;
          uVar32 = uVar32 + 1;
          param_1[lVar19] = uVar6;
          param_1[0x108] = uVar6;
          lVar19 = lVar13;
        } while (uVar32 != (ulonglong)sVar9);
      }
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x7d;
      param_1[0x108] = 0x7d;
      return;
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x74;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x68;
LAB_00119a64:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar19 != 0xff) goto LAB_00119a80;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x74;
      param_1[0x108] = 0x74;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x68;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x69;
      }
      else {
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x68;
        param_1[0x108] = 0x68;
        if (lVar13 != 0xff) goto LAB_00119a64;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_00119a80:
      lVar13 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x73;
    param_1[0x108] = 0x73;
    break;
  case 7:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 8:
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7e;
    param_1[0x108] = 0x7e;
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 9:
    __s1 = "vtable for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 10:
    __s1 = "VTT for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xb:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "construction vtable for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x18);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 2;
      *param_1 = 0x2d;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0011aeb0:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x6e;
      param_1[0x108] = 0x6e;
      if (lVar19 != 0xff) goto LAB_0011aecc;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x2d;
      param_1[0x108] = 0x2d;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x6e;
      }
      else {
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x69;
        param_1[0x108] = 0x69;
        if (lVar13 != 0xff) goto LAB_0011aeb0;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar19 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_0011aecc:
      lVar13 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x2d;
    param_1[0x108] = 0x2d;
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 0xc:
    __s1 = "typeinfo for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xd:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "typeinfo name for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x12);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xe:
    __s1 = "typeinfo fn for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0xf:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "non-virtual thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x15);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x10:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "virtual thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x11);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x11:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "covariant return thunk to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1a);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x12:
    __s1 = "java Class for ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x13:
    FUN_00111140(param_1,"guard variable for ");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x14:
    FUN_00111140(param_1,"TLS init function for ");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x15:
    FUN_00111140(param_1,"TLS wrapper function for ");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x16:
    FUN_00111140(param_1,"reference temporary #");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    FUN_00111140(param_1,0x1247a8);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x17:
    FUN_00111140(param_1,"hidden alias for ");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x18:
    iVar8 = *(int *)(param_3 + 2);
    lVar13 = param_3[1];
    if ((longlong)iVar8 != 0) {
      lVar19 = 0;
      lVar14 = *(longlong *)(param_1 + 0x100);
      do {
        uVar6 = *(undefined *)(lVar13 + lVar19);
        if (lVar14 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar10 = 1;
          lVar14 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar10 = lVar14 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar10;
        lVar19 = lVar19 + 1;
        param_1[lVar14] = uVar6;
        param_1[0x108] = uVar6;
        lVar14 = lVar10;
      } while ((longlong)iVar8 != lVar19);
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    local_80 = *(longlong ***)(param_1 + 0x128);
    pplVar27 = local_80;
    if (local_80 == (longlong **)0x0) {
      local_80 = (longlong **)0x0;
      bVar7 = false;
    }
    else {
      do {
        if (*(int *)(pplVar27 + 2) == 0) {
          if (2 < *(int *)pplVar27[1] - 0x19U) break;
          if (iVar8 == *(int *)pplVar27[1]) {
            FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
            return;
          }
        }
        pplVar27 = (longlong **)*pplVar27;
      } while (pplVar27 != (longlong **)0x0);
      bVar7 = false;
    }
    goto LAB_001198e4;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
    local_80 = *(longlong ***)(param_1 + 0x128);
    bVar7 = false;
LAB_001198e4:
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
LAB_00119900:
    lVar13 = local_78[1];
LAB_00119904:
    plVar21 = local_78;
    local_70._0_4_ = 0;
    FUN_00118fe8(param_1,(ulonglong)param_2,lVar13);
    if ((int)local_70 == 0) {
      FUN_0011c9f4(param_1,(ulonglong)param_2,plVar21);
    }
    *(longlong ***)(param_1 + 0x128) = local_80;
    if (bVar7) {
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
    }
    break;
  case 0x23:
  case 0x24:
    plVar21 = (longlong *)param_3[1];
    bVar7 = false;
    iVar8 = *(int *)plVar21;
    if (iVar8 == 5) {
      uVar35 = *(uint *)(param_1 + 0x148);
      pplVar27 = *(longlong ***)(param_1 + 0x140);
      if ((int)uVar35 < 1) {
LAB_0011b3ac:
        if (*(int *)(param_1 + 0x14c) <= (int)uVar35) {
LAB_0011c8d8:
          *(undefined4 *)(param_1 + 0x130) = 1;
          return;
        }
        uVar32 = -(ulonglong)(uVar35 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar35 << 4;
        plVar25 = *(longlong **)(param_1 + 0x120);
        *(uint *)(param_1 + 0x148) = uVar35 + 1;
        *(longlong **)((longlong)pplVar27 + uVar32) = plVar21;
        puVar31 = (undefined8 *)((longlong)pplVar27 + uVar32 + 8);
        if (plVar25 != (longlong *)0x0) {
          uVar35 = *(uint *)(param_1 + 0x158);
          iVar8 = *(int *)(param_1 + 0x15c);
          if ((int)uVar35 < iVar8) {
            uVar32 = -(ulonglong)(uVar35 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar35 << 4;
            puVar15 = puVar31;
            iVar30 = uVar35 + 1;
            do {
              iVar16 = iVar30;
              puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x150) + uVar32);
              puVar31[1] = plVar25[1];
              *(undefined8 **)puVar15 = puVar31;
              plVar25 = (longlong *)*plVar25;
              if (plVar25 == (longlong *)0x0) {
                *(int *)(param_1 + 0x158) = iVar16;
                goto LAB_0011b430;
              }
              uVar32 = uVar32 + 0x10;
              puVar15 = puVar31;
              iVar30 = iVar16 + 1;
            } while (iVar16 + 1 != iVar8 + 1);
            *(int *)(param_1 + 0x158) = iVar16;
          }
          goto LAB_0011c8d8;
        }
LAB_0011b430:
        *puVar31 = 0;
        bVar7 = false;
        plVar21 = (longlong *)FUN_00110f3c(param_1,plVar21 + 1);
        if (plVar21 == (longlong *)0x0) goto LAB_00119064;
LAB_0011b5f0:
        iVar8 = *(int *)plVar21;
        if (iVar8 != 0x2f) goto LAB_00119940;
        iVar8 = *(int *)(param_1 + 0x134);
        while (0 < iVar8) {
          plVar21 = (longlong *)plVar21[2];
          iVar8 = iVar8 + -1;
          if ((plVar21 == (longlong *)0x0) || (*(int *)plVar21 != 0x2f)) goto LAB_0011905c;
        }
        if ((iVar8 == 0) && (plVar21 = (longlong *)plVar21[1], plVar21 != (longlong *)0x0)) {
          iVar8 = *(int *)plVar21;
          goto LAB_00119940;
        }
LAB_0011905c:
        if (!bVar7) goto LAB_00119064;
      }
      else {
        pplVar11 = pplVar27;
        if (plVar21 != *pplVar27) {
          do {
            pplVar11 = pplVar11 + 2;
            if (pplVar11 == pplVar27 + ((ulonglong)(uVar35 - 1) + 1) * 2) goto LAB_0011b3ac;
          } while (plVar21 != *pplVar11);
        }
        unaff_x22 = *(undefined8 *)(param_1 + 0x120);
        *(longlong **)(param_1 + 0x120) = pplVar11[1];
        bVar7 = true;
        plVar21 = (longlong *)FUN_00110f3c(param_1,plVar21 + 1);
        if (plVar21 != (longlong *)0x0) goto LAB_0011b5f0;
      }
      *(undefined8 *)(param_1 + 0x120) = unaff_x22;
LAB_00119064:
      *(undefined4 *)(param_1 + 0x130) = 1;
      return;
    }
LAB_00119940:
    if ((iVar8 == 0x23) || (*(int *)param_3 == iVar8)) {
      local_80 = *(longlong ***)(param_1 + 0x128);
      param_3 = plVar21;
      goto LAB_001198e4;
    }
    if (iVar8 != 0x24) {
      local_80 = *(longlong ***)(param_1 + 0x128);
      goto LAB_001198e4;
    }
    lVar13 = plVar21[1];
    local_80 = *(longlong ***)(param_1 + 0x128);
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_78 = param_3;
    if (lVar13 == 0) goto LAB_00119900;
    goto LAB_00119904;
  case 0x27:
    if ((param_2 >> 2 & 1) == 0) {
      lVar13 = (longlong)*(int *)((longlong *)param_3[1] + 1);
      lVar19 = *(longlong *)param_3[1];
      if (lVar13 != 0) {
        lVar14 = 0;
        lVar10 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar19 + lVar14);
          if (lVar10 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar18 = 1;
            lVar10 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar18 = lVar10 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar18;
          lVar14 = lVar14 + 1;
          param_1[lVar10] = uVar6;
          param_1[0x108] = uVar6;
          lVar10 = lVar18;
        } while (lVar13 != lVar14);
      }
    }
    else {
      lVar13 = (longlong)*(int *)(param_3[1] + 0x18);
      lVar19 = *(longlong *)(param_3[1] + 0x10);
      if (lVar13 != 0) {
        lVar14 = 0;
        lVar10 = *(longlong *)(param_1 + 0x100);
        do {
          uVar6 = *(undefined *)(lVar19 + lVar14);
          if (lVar10 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar18 = 1;
            lVar10 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          else {
            lVar18 = lVar10 + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar18;
          lVar14 = lVar14 + 1;
          param_1[lVar10] = uVar6;
          param_1[0x108] = uVar6;
          lVar10 = lVar18;
        } while (lVar13 != lVar14);
      }
    }
    break;
  case 0x28:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x29:
    if ((param_2 >> 5 & 1) == 0) {
      if ((param_3[1] != 0) && ((param_2 >> 6 & 1) == 0)) {
        local_80 = *(longlong ***)(param_1 + 0x128);
        *(longlong ****)(param_1 + 0x128) = &local_80;
        local_68 = *(longlong ****)(param_1 + 0x120);
        local_70._0_4_ = 0;
        local_78 = param_3;
        FUN_00118fe8(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3[1]);
        *(longlong ***)(param_1 + 0x128) = local_80;
        if ((int)local_70 != 0) {
          return;
        }
        FUN_00110e3c(param_1,0x20);
      }
      FUN_0011d850(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3 + 2,
                   *(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_0011d850(param_1,(ulonglong)(param_2 & 0xffffff9f),param_3 + 2,
                   *(undefined8 *)(param_1 + 0x128));
      if (param_3[1] != 0) {
        FUN_00118fe8(param_1,(ulonglong)(param_2 & 0xffffff9f));
      }
    }
    break;
  case 0x2a:
    pplVar27 = *(longlong ***)(param_1 + 0x128);
    local_68 = *(longlong ****)(param_1 + 0x120);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_70._0_4_ = 0;
    local_80 = pplVar27;
    if ((pplVar27 == (longlong **)0x0) || (2 < *(int *)pplVar27[1] - 0x19U)) {
      local_78 = param_3;
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      *(longlong ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
    }
    else {
      pplVar11 = pplVar27;
      ppplVar26 = &local_80;
      uVar32 = 1;
      local_78 = param_3;
      do {
        ppplVar28 = ppplVar26;
        uVar36 = uVar32;
        if (*(int *)(pplVar11 + 2) == 0) {
          if (3 < (uint)uVar32) {
            *(undefined4 *)(param_1 + 0x130) = 1;
            return;
          }
          uVar36 = (ulonglong)((uint)uVar32 + 1);
          ppplVar28 = &local_80 + uVar32 * 4;
          plVar21 = pplVar11[1];
          *(longlong **)ppplVar28 = *pplVar11;
          (&local_78)[uVar32 * 4] = plVar21;
          pplVar22 = (longlong **)pplVar11[3];
          *(longlong **)(&local_70 + uVar32 * 4) = pplVar11[2];
          (&local_70)[uVar32 * 4 + 1] = pplVar22;
          *(longlong ****)(&local_80 + uVar32 * 4) = ppplVar26;
          *(longlong ****)(param_1 + 0x128) = ppplVar28;
          *(undefined4 *)(pplVar11 + 2) = 1;
        }
        pplVar11 = (longlong **)*pplVar11;
      } while ((pplVar11 != (longlong **)0x0) &&
              (ppplVar26 = ppplVar28, uVar32 = uVar36, *(int *)pplVar11[1] - 0x19U < 3));
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      *(longlong ***)(param_1 + 0x128) = pplVar27;
      if ((int)local_70 != 0) {
        return;
      }
      if ((int)uVar36 != 1) {
        do {
          uVar35 = (int)uVar36 - 1;
          uVar36 = (ulonglong)uVar35;
          FUN_0011c9f4(param_1,(ulonglong)param_2,(&local_78)[uVar36 * 4]);
        } while (uVar35 != 1);
        pplVar27 = *(longlong ***)(param_1 + 0x128);
      }
    }
    FUN_0011d588(param_1,(ulonglong)param_2,param_3 + 1,pplVar27);
    break;
  case 0x2b:
  case 0x2d:
    local_80 = *(longlong ***)(param_1 + 0x128);
    *(longlong ****)(param_1 + 0x128) = &local_80;
    local_68 = *(longlong ****)(param_1 + 0x120);
    local_70._0_4_ = 0;
    local_78 = param_3;
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    if ((int)local_70 == 0) {
      FUN_0011c9f4(param_1,(ulonglong)param_2,param_3);
    }
    *(longlong ***)(param_1 + 0x128) = local_80;
    break;
  case 0x2c:
    if (*(short *)((longlong)param_3 + 0x12) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 2;
        *param_1 = 0x5f;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x53;
LAB_0011b2e8:
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x61;
        param_1[0x108] = 0x61;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x74;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0011b320;
        }
LAB_0011b304:
        lVar13 = lVar19 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x74;
        param_1[0x108] = 0x74;
        if (lVar13 != 0xff) goto LAB_0011b320;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x53;
          lVar19 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x61;
          goto LAB_0011b304;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x53;
        param_1[0x108] = 0x53;
        if (lVar13 != 0xff) goto LAB_0011b2e8;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x74;
LAB_0011b320:
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(longlong *)(param_3[1] + 8) == 0x139950) {
      lVar13 = *(longlong *)(param_1 + 0x100);
    }
    else {
      FUN_00118fe8(param_1,(ulonglong)param_2);
      lVar19 = *(longlong *)(param_1 + 0x100);
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar13 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x20;
      param_1[0x108] = 0x20;
    }
    if (*(short *)(param_3 + 2) == 0) {
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 2;
        *param_1 = 0x5f;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x46;
LAB_0011b004:
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x72;
        param_1[0x108] = 0x72;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x61;
          lVar13 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 99;
        }
        else {
LAB_0011b020:
          lVar14 = lVar19 + 1;
          *(longlong *)(param_1 + 0x100) = lVar14;
          param_1[lVar19] = 0x61;
          param_1[0x108] = 0x61;
          if (lVar14 != 0xff) goto LAB_0011b03c;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 99;
          lVar13 = 1;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
      }
      else {
        lVar19 = lVar13 + 1;
        *(longlong *)(param_1 + 0x100) = lVar19;
        param_1[lVar13] = 0x5f;
        param_1[0x108] = 0x5f;
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *param_1 = 0x46;
          lVar19 = 2;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          param_1[1] = 0x72;
          goto LAB_0011b020;
        }
        lVar13 = lVar13 + 2;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar19] = 0x46;
        param_1[0x108] = 0x46;
        if (lVar13 != 0xff) goto LAB_0011b004;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x72;
        lVar14 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x61;
LAB_0011b03c:
        lVar13 = lVar14 + 1;
        *(longlong *)(param_1 + 0x100) = lVar13;
        param_1[lVar14] = 99;
        param_1[0x108] = 99;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          goto LAB_0011b05c;
        }
      }
      lVar19 = lVar13 + 1;
LAB_0011b05c:
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x74;
      param_1[0x108] = 0x74;
      return;
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 2;
      *param_1 = 0x5f;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x41;
LAB_0011a578:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 99;
      param_1[0x108] = 99;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 99;
        lVar13 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x75;
      }
      else {
LAB_0011a594:
        lVar14 = lVar19 + 1;
        *(longlong *)(param_1 + 0x100) = lVar14;
        param_1[lVar19] = 99;
        param_1[0x108] = 99;
        if (lVar14 != 0xff) goto LAB_0011a5b0;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x75;
        lVar13 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
LAB_0011a5cc:
      lVar19 = lVar13 + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x5f;
      param_1[0x108] = 0x5f;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x41;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 99;
        goto LAB_0011a594;
      }
      lVar13 = lVar13 + 2;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x41;
      param_1[0x108] = 0x41;
      if (lVar13 != 0xff) goto LAB_0011a578;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar14 = 2;
      param_1[1] = 99;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011a5b0:
      lVar13 = lVar14 + 1;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar14] = 0x75;
      param_1[0x108] = 0x75;
      if (lVar13 != 0xff) goto LAB_0011a5cc;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x6d;
    param_1[0x108] = 0x6d;
    break;
  case 0x2e:
  case 0x2f:
    if (param_3[1] != 0) {
      FUN_00118fe8(param_1,(ulonglong)param_2);
    }
    if (param_3[2] != 0) {
      uVar36 = *(ulonglong *)(param_1 + 0x100);
      uVar32 = uVar36;
      if (0xfd < uVar36) {
        param_1[uVar36] = 0;
        uVar32 = 0;
        (**(code **)(param_1 + 0x110))(param_1,uVar36,*(undefined8 *)(param_1 + 0x118));
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      param_1[uVar32] = 0x2c;
      *(ulonglong *)(param_1 + 0x100) = uVar32 + 2;
      param_1[uVar32 + 1] = 0x20;
      param_1[0x108] = 0x20;
      lVar13 = *(longlong *)(param_1 + 0x138);
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      if ((*(longlong *)(param_1 + 0x138) == lVar13) &&
         (*(longlong *)(param_1 + 0x100) == uVar32 + 2)) {
        *(ulonglong *)(param_1 + 0x100) = uVar32;
      }
    }
    break;
  case 0x30:
    lVar13 = param_3[2];
    if (param_3[1] != 0) {
      FUN_00118fe8(param_1,(ulonglong)param_2);
    }
    lVar19 = *(longlong *)(param_1 + 0x100);
    if (lVar19 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar14 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar14 = lVar19 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar14;
    param_1[lVar19] = 0x7b;
    param_1[0x108] = 0x7b;
    FUN_00118fe8(param_1,(ulonglong)param_2,lVar13);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x31:
    lVar19 = param_3[1];
    __s1 = "operator";
    iVar8 = *(int *)(lVar19 + 0x10);
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar14;
    } while (__s1 != "");
    __s1 = *(char **)(lVar19 + 8);
    if ((byte)(*__s1 + 0x9fU) < 0x1a) {
      if (lVar14 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14 + 1;
      param_1[lVar14] = 0x20;
      param_1[0x108] = 0x20;
      __s1 = *(char **)(lVar19 + 8);
    }
    lVar13 = (longlong)iVar8;
    if (__s1[lVar13 + -1] == ' ') {
      lVar13 = (longlong)(iVar8 + -1);
    }
    if (lVar13 != 0) {
      pcVar1 = __s1 + lVar13;
      lVar13 = *(longlong *)(param_1 + 0x100);
      do {
        cVar4 = *__s1;
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        __s1 = __s1 + 1;
        param_1[lVar13] = cVar4;
        param_1[0x108] = cVar4;
        lVar13 = lVar19;
      } while (__s1 != pcVar1);
    }
    break;
  case 0x32:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 9);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    break;
  default:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x34:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "operator "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 9);
    if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
      local_80 = *(longlong ***)(param_1 + 0x120);
      *(longlong ****)(param_1 + 0x120) = &local_80;
      local_78 = *(longlong **)(param_1 + 0x160);
    }
    if (*(int *)param_3[1] == 4) {
      FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)((int *)param_3[1] + 2));
      if (*(longlong *)(param_1 + 0x160) != 0) {
        *(longlong ***)(param_1 + 0x120) = local_80;
      }
      if (param_1[0x108] == '<') {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13 + 1;
      param_1[lVar13] = 0x3c;
      param_1[0x108] = 0x3c;
      FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[1] + 0x10));
      if (param_1[0x108] == '>') {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x100) = 0;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x20;
        param_1[0x108] = 0x20;
      }
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar13 + 1;
      param_1[lVar13] = 0x3e;
      param_1[0x108] = 0x3e;
    }
    else {
      FUN_00118fe8(param_1,(ulonglong)param_2);
      if (*(longlong *)(param_1 + 0x160) != 0) {
        *(longlong ***)(param_1 + 0x120) = local_80;
      }
    }
    break;
  case 0x35:
    FUN_0011db00(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x36:
    piVar23 = (int *)param_3[1];
    piVar12 = (int *)param_3[2];
    if (*piVar23 == 0x31) {
      __s1 = **(char ***)(piVar23 + 2);
      iVar8 = strcmp(__s1,"ad");
      if (iVar8 == 0) {
        iVar8 = *piVar12;
        if (iVar8 != 3) goto LAB_0011b478;
        if ((**(int **)(piVar12 + 2) == 1) && (**(int **)(piVar12 + 4) == 0x29)) {
          piVar12 = *(int **)(piVar12 + 2);
        }
      }
      else {
        iVar8 = *piVar12;
LAB_0011b478:
        if (iVar8 == 0x38) {
          FUN_0011dbd4(param_1,(ulonglong)param_2,*(undefined8 *)(piVar12 + 2));
          FUN_0011db00(param_1,(ulonglong)param_2,piVar23);
          return;
        }
      }
      FUN_0011db00(param_1,(ulonglong)param_2,piVar23);
      iVar8 = strcmp(__s1,"gs");
      if (iVar8 == 0) {
        FUN_00118fe8(param_1,(ulonglong)param_2,piVar12);
        return;
      }
      iVar8 = strcmp(__s1,"st");
      if (iVar8 == 0) {
        FUN_00110e3c(param_1,0x28);
        FUN_00118fe8(param_1,(ulonglong)param_2,piVar12);
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x29;
        param_1[0x108] = 0x29;
        return;
      }
    }
    else {
      if (*piVar23 == 0x33) {
        lVar13 = *(longlong *)(param_1 + 0x100);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13 + 1;
        param_1[lVar13] = 0x28;
        param_1[0x108] = 0x28;
        FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(piVar23 + 2));
        FUN_00110e3c(param_1,0x29);
      }
      else {
        FUN_0011db00(param_1,(ulonglong)param_2,piVar23);
      }
    }
    FUN_0011dbd4(param_1,(ulonglong)param_2,piVar12);
    break;
  case 0x37:
    piVar12 = (int *)param_3[2];
    if (*piVar12 != 0x38) goto LAB_00119064;
    ppcVar24 = *(char ***)((int *)param_3[1] + 2);
    __s1 = *ppcVar24;
    if ((__s1[1] == 'c') && (((byte)(*__s1 + 0x8eU) < 2 || ((byte)(*__s1 + 0x9dU) < 2)))) {
      FUN_0011db00(param_1,(ulonglong)param_2);
      FUN_00110e3c(param_1,0x3c);
      FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 8));
      FUN_00111140(param_1,&DAT_001249f0);
      FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
      FUN_00110e3c(param_1,0x29);
    }
    else {
      if ((*(int *)param_3[1] == 0x31) && ((*(int *)(ppcVar24 + 2) == 1 && (*ppcVar24[1] == '>'))))
      {
        FUN_00110e3c(param_1,0x28);
        piVar12 = (int *)param_3[2];
        __s1 = **(char ***)(param_3[1] + 8);
      }
      iVar8 = strcmp(__s1,"cl");
      piVar12 = *(int **)(piVar12 + 2);
      if ((iVar8 == 0) && (*piVar12 == 3)) {
        if (**(int **)(piVar12 + 4) != 0x29) {
          *(undefined4 *)(param_1 + 0x130) = 1;
        }
        FUN_0011dbd4(param_1,(ulonglong)param_2,*(undefined8 *)(piVar12 + 2));
      }
      else {
        FUN_0011dbd4(param_1,(ulonglong)param_2);
      }
      lVar13 = param_3[1];
      __s1 = **(char ***)(lVar13 + 8);
      iVar8 = strcmp(__s1,"ix");
      if (iVar8 == 0) {
        FUN_00110e3c(param_1,0x5b);
        FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
        FUN_00110e3c(param_1,0x5d);
      }
      else {
        iVar8 = strcmp(__s1,"cl");
        if (iVar8 != 0) {
          FUN_0011db00(param_1,(ulonglong)param_2,lVar13);
        }
        FUN_0011dbd4(param_1,(ulonglong)param_2,*(undefined8 *)(param_3[2] + 0x10));
      }
      if (((*(int *)param_3[1] == 0x31) &&
          (lVar13 = *(longlong *)((int *)param_3[1] + 2), *(int *)(lVar13 + 0x10) == 1)) &&
         (**(char **)(lVar13 + 8) == '>')) {
        FUN_00110e3c(param_1,0x29);
      }
    }
    break;
  case 0x38:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x39:
    piVar12 = (int *)param_3[2];
    if ((*piVar12 != 0x3a) || (piVar23 = *(int **)(piVar12 + 4), *piVar23 != 0x3b))
    goto LAB_00119064;
    lVar14 = param_3[1];
    lVar13 = *(longlong *)(piVar12 + 2);
    uVar37 = *(undefined8 *)(piVar23 + 2);
    lVar19 = *(longlong *)(piVar23 + 4);
    iVar8 = strcmp(**(char ***)(lVar14 + 8),"qu");
    if (iVar8 == 0) {
      FUN_0011dbd4(param_1,(ulonglong)param_2);
      FUN_0011db00(param_1,(ulonglong)param_2,lVar14);
      FUN_0011dbd4(param_1,(ulonglong)param_2,uVar37);
      FUN_00111140(param_1,&DAT_00124928);
      FUN_0011dbd4(param_1,(ulonglong)param_2,lVar19);
    }
    else {
      FUN_00111140(param_1,&DAT_00124930);
      if (*(longlong *)(lVar13 + 8) != 0) {
        FUN_0011dbd4(param_1,(ulonglong)param_2);
        FUN_00110e3c(param_1,0x20);
      }
      FUN_00118fe8(param_1,(ulonglong)param_2,uVar37);
      if (lVar19 != 0) {
        FUN_0011dbd4(param_1,(ulonglong)param_2,lVar19);
      }
    }
    break;
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x3c:
  case 0x3d:
    uVar35 = 0;
    if ((*(int *)param_3[1] == 0x27) &&
       (uVar35 = *(uint *)(*(longlong *)((int *)param_3[1] + 2) + 0x1c), uVar35 != 0)) {
      if (uVar35 < 7) {
        if (*(int *)param_3[2] == 0) {
          if (iVar8 == 0x3d) {
            FUN_00110e3c(param_1,0x2d);
          }
          FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
          switch(uVar35) {
          case 2:
            FUN_00110e3c(param_1,0x75);
            return;
          case 3:
            FUN_00110e3c(param_1,0x6c);
            return;
          case 4:
            FUN_00111140(param_1,&DAT_00124938);
            return;
          case 5:
            FUN_00111140(param_1,0x121e48);
            return;
          case 6:
            FUN_00111140(param_1,&DAT_00124940);
            return;
          default:
            return;
          }
        }
      }
      else {
        if ((((uVar35 == 7) && (piVar12 = (int *)param_3[2], *piVar12 == 0)) && (piVar12[4] == 1))
           && (iVar8 == 0x3c)) {
          if (**(char **)(piVar12 + 2) == '0') {
            FUN_00111140(param_1,"false");
            return;
          }
          if (**(char **)(piVar12 + 2) == '1') {
            FUN_00111140(param_1,&DAT_00124950);
            return;
          }
        }
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x28;
    param_1[0x108] = 0x28;
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x29;
    param_1[0x108] = 0x29;
    if (*(int *)param_3 == 0x3d) {
      FUN_00110e3c(param_1,0x2d);
    }
    if (uVar35 == 8) {
      FUN_00110e3c(param_1,0x5b);
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
      FUN_00110e3c(param_1,0x5d);
    }
    else {
      FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    }
    break;
  case 0x3e:
    __s1 = "java resource ";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x3f:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    break;
  case 0x40:
    lVar13 = *(longlong *)(param_1 + 0x100);
    uVar6 = *(undefined *)(param_3 + 1);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = uVar6;
    param_1[0x108] = uVar6;
    break;
  case 0x41:
    sprintf((char *)&local_80,"%ld",param_3[1]);
    sVar9 = strlen((char *)&local_80);
    if (sVar9 != 0) {
      uVar32 = 0;
      lVar13 = *(longlong *)(param_1 + 0x100);
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar13 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar19 = 1;
          lVar13 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar19 = lVar13 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar19;
        uVar32 = uVar32 + 1;
        param_1[lVar13] = uVar6;
        param_1[0x108] = uVar6;
        lVar13 = lVar19;
      } while (uVar32 != (ulonglong)sVar9);
    }
    break;
  case 0x42:
    __s1 = "decltype (";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x29;
    param_1[0x108] = 0x29;
    break;
  case 0x43:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "global constructors keyed to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1d);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x44:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "global destructors keyed to "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1c);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x45:
    __s1 = "{lambda(";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      *param_1 = 0x29;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011ad50:
      lVar13 = lVar19 + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x29;
      param_1[0x108] = 0x29;
      if (lVar19 != 0xff) goto LAB_0011ad50;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar13 = 1;
      lVar19 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar13;
    param_1[lVar19] = 0x23;
    param_1[0x108] = 0x23;
    uVar32 = 0;
    sprintf((char *)&local_80,"%ld",(longlong)(*(int *)(param_3 + 2) + 1));
    sVar9 = strlen((char *)&local_80);
    lVar13 = *(longlong *)(param_1 + 0x100);
    lVar19 = lVar13;
    if (sVar9 != 0) {
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 1;
          lVar19 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar13 = lVar19 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13;
        uVar32 = uVar32 + 1;
        param_1[lVar19] = uVar6;
        param_1[0x108] = uVar6;
        lVar19 = lVar13;
      } while (uVar32 != (ulonglong)sVar9);
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x47:
    __s1 = "{unnamed type#";
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    uVar32 = 0;
    sprintf((char *)&local_80,"%ld",param_3[1] + 1);
    sVar9 = strlen((char *)&local_80);
    lVar13 = *(longlong *)(param_1 + 0x100);
    lVar19 = lVar13;
    if (sVar9 != 0) {
      do {
        uVar6 = *(undefined *)((longlong)&local_80 + uVar32);
        if (lVar19 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar13 = 1;
          lVar19 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar13 = lVar19 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar13;
        uVar32 = uVar32 + 1;
        param_1[lVar19] = uVar6;
        param_1[0x108] = uVar6;
        lVar19 = lVar13;
      } while (uVar32 != (ulonglong)sVar9);
    }
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x7d;
    param_1[0x108] = 0x7d;
    break;
  case 0x48:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "transaction clone for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x16);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x49:
    lVar13 = 0;
    lVar19 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = "non-transaction clone for "[lVar13];
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar14 = 1;
        lVar19 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar14 = lVar19 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar14;
      lVar13 = lVar13 + 1;
      param_1[lVar19] = cVar4;
      param_1[0x108] = cVar4;
      lVar19 = lVar14;
    } while (lVar13 != 0x1a);
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    break;
  case 0x4a:
    iVar8 = 0;
    piVar12 = (int *)FUN_00110fb8(param_1,param_3[1]);
    if (piVar12 == (int *)0x0) {
      FUN_0011dbd4(param_1,(ulonglong)param_2,param_3[1]);
      FUN_00111140(param_1,&DAT_00124978);
    }
    else {
      do {
        if ((*piVar12 != 0x2f) || (*(longlong *)(piVar12 + 2) == 0)) {
          lVar13 = param_3[1];
          if (iVar8 == 0) {
            return;
          }
          goto LAB_00119ff8;
        }
        piVar12 = *(int **)(piVar12 + 4);
        iVar8 = iVar8 + 1;
      } while (piVar12 != (int *)0x0);
      lVar13 = param_3[1];
LAB_00119ff8:
      iVar30 = 0;
      do {
        *(int *)(param_1 + 0x134) = iVar30;
        FUN_00118fe8(param_1,(ulonglong)param_2,lVar13);
        if (iVar30 < iVar8 + -1) {
          lVar19 = *(longlong *)(param_1 + 0x100);
          if (lVar19 == 0xff) {
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *param_1 = 0x2c;
            lVar14 = 1;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011a048:
            lVar19 = lVar14 + 1;
          }
          else {
            lVar14 = lVar19 + 1;
            *(longlong *)(param_1 + 0x100) = lVar14;
            param_1[lVar19] = 0x2c;
            param_1[0x108] = 0x2c;
            if (lVar14 != 0xff) goto LAB_0011a048;
            param_1[0xff] = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            lVar19 = 1;
            lVar14 = 0;
            *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
          }
          *(longlong *)(param_1 + 0x100) = lVar19;
          param_1[lVar14] = 0x20;
          param_1[0x108] = 0x20;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 != iVar8);
    }
    break;
  case 0x4b:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x5b;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x61;
LAB_0011a0c0:
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x62;
      param_1[0x108] = 0x62;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x69;
        lVar13 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0011a0f8;
      }
LAB_0011a0dc:
      lVar13 = lVar19 + 1;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x69;
      param_1[0x108] = 0x69;
      if (lVar13 != 0xff) goto LAB_0011a0f8;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
      *(longlong *)(param_1 + 0x100) = lVar19;
      param_1[lVar13] = 0x5b;
      param_1[0x108] = 0x5b;
      if (lVar19 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x61;
        lVar19 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x62;
        goto LAB_0011a0dc;
      }
      lVar13 = lVar13 + 2;
      *(longlong *)(param_1 + 0x100) = lVar13;
      param_1[lVar19] = 0x61;
      param_1[0x108] = 0x61;
      if (lVar13 != 0xff) goto LAB_0011a0c0;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x62;
      lVar13 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x69;
LAB_0011a0f8:
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x3a;
    param_1[0x108] = 0x3a;
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x5d;
    param_1[0x108] = 0x5d;
    break;
  case 0x4c:
    __s1 = " [clone ";
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[1]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    do {
      cVar4 = *__s1;
      if (lVar13 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar19 = 1;
        lVar13 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar19 = lVar13 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar19;
      __s1 = __s1 + 1;
      param_1[lVar13] = cVar4;
      param_1[0x108] = cVar4;
      lVar13 = lVar19;
    } while (__s1 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3[2]);
    lVar13 = *(longlong *)(param_1 + 0x100);
    if (lVar13 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar19 = 1;
      lVar13 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar19 = lVar13 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar19;
    param_1[lVar13] = 0x5d;
    param_1[0x108] = 0x5d;
  }
  return;
}



void FUN_0011c9f4(undefined *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined uVar5;
  char *pcVar6;
  
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 2);
  default:
LAB_0011ca30:
    FUN_00118fe8(param_1,(ulonglong)param_2,param_3);
    return;
  case 0x19:
  case 0x1c:
    lVar2 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = " restrict"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1a:
  case 0x1d:
    lVar2 = 0;
    lVar3 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = " volatile"[lVar2];
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar4 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar4;
      lVar2 = lVar2 + 1;
      param_1[lVar3] = cVar1;
      param_1[0x108] = cVar1;
      lVar3 = lVar4;
    } while (lVar2 != 9);
    break;
  case 0x1b:
  case 0x1e:
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 0x20;
      lVar2 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 99;
LAB_0011cbfc:
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x6f;
      param_1[0x108] = 0x6f;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        uVar5 = 0x74;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x6e;
        lVar3 = 2;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        param_1[1] = 0x73;
      }
      else {
LAB_0011cc18:
        lVar2 = lVar3 + 1;
        *(longlong *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x6e;
        param_1[0x108] = 0x6e;
        if (lVar2 != 0xff) goto LAB_0011cc34;
        uVar5 = 0x74;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x73;
        lVar3 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      goto LAB_0011cd18;
    }
    lVar3 = lVar2 + 1;
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *param_1 = 99;
      lVar3 = 2;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      param_1[1] = 0x6f;
      goto LAB_0011cc18;
    }
    lVar2 = lVar2 + 2;
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 99;
    param_1[0x108] = 99;
    if (lVar2 != 0xff) goto LAB_0011cbfc;
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x6f;
    lVar2 = 2;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    param_1[1] = 0x6e;
LAB_0011cc34:
    lVar3 = lVar2 + 1;
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x73;
    param_1[0x108] = 0x73;
    uVar5 = 0x74;
    if (lVar3 != 0xff) goto LAB_0011cd18;
    goto LAB_0011cc50;
  case 0x1f:
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_0011cca0;
  case 0x20:
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_0011ccf0;
  case 0x21:
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 4);
    goto LAB_0011ca30;
  case 0x22:
    if ((param_2 >> 2 & 1) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x2a;
      param_1[0x108] = 0x2a;
    }
    break;
  case 0x23:
    lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0011cca0:
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0011ccf0:
    if (lVar2 == 0xff) {
      uVar5 = 0x26;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      *param_1 = 0x26;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x26;
      param_1[0x108] = 0x26;
      uVar5 = 0x26;
      if (lVar3 == 0xff) {
LAB_0011cc50:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar3,*(undefined8 *)(param_1 + 0x118));
        lVar2 = 1;
        lVar3 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0011cd1c;
      }
    }
LAB_0011cd18:
    lVar2 = lVar3 + 1;
LAB_0011cd1c:
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = uVar5;
    param_1[0x108] = uVar5;
    return;
  case 0x25:
    pcVar6 = "complex ";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x26:
    pcVar6 = "imaginary ";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
      lVar2 = *(longlong *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 2;
      *param_1 = 0x3a;
      param_1[1] = 0x3a;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011cf04:
      lVar3 = lVar2 + 1;
    }
    else {
      lVar3 = lVar2 + 1;
      *(longlong *)(param_1 + 0x100) = lVar3;
      param_1[lVar2] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar3 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *param_1 = 0x3a;
        lVar2 = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        goto LAB_0011cf04;
      }
      lVar2 = lVar2 + 2;
      *(longlong *)(param_1 + 0x100) = lVar2;
      param_1[lVar3] = 0x3a;
      param_1[0x108] = 0x3a;
      if (lVar2 != 0xff) goto LAB_0011cf04;
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x2d:
    pcVar6 = " __vector(";
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      cVar1 = *pcVar6;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar3 = 1;
        lVar2 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar3 = lVar2 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar3;
      pcVar6 = pcVar6 + 1;
      param_1[lVar2] = cVar1;
      param_1[0x108] = cVar1;
      lVar2 = lVar3;
    } while (pcVar6 != "");
    FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(param_3 + 2));
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar3 = 1;
      lVar2 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar3 = lVar2 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar3;
    param_1[lVar2] = 0x29;
    param_1[0x108] = 0x29;
  }
  return;
}



void FUN_0011d274(undefined *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (param_3 != (undefined8 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x130);
    while (iVar2 == 0) {
      if (*(int *)(param_3 + 2) == 0) {
        piVar5 = (int *)param_3[1];
        iVar2 = *piVar5;
        if ((param_4 != 0) || (4 < iVar2 - 0x1cU)) {
          *(undefined4 *)(param_3 + 2) = 1;
          uVar8 = *(undefined8 *)(param_1 + 0x120);
          *(undefined8 *)(param_1 + 0x120) = param_3[3];
          if (iVar2 == 0x29) {
            FUN_0011d850(param_1,(ulonglong)param_2,piVar5 + 4,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 0x2a) {
            FUN_0011d588(param_1,(ulonglong)param_2,piVar5 + 2,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          if (iVar2 == 2) {
            uVar6 = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x128) = 0;
            FUN_00118fe8(param_1,(ulonglong)param_2,*(undefined8 *)(piVar5 + 2));
            *(undefined8 *)(param_1 + 0x128) = uVar6;
            lVar3 = *(longlong *)(param_1 + 0x100);
            if ((param_2 >> 2 & 1) != 0) {
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(longlong *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x2e;
              param_1[0x108] = 0x2e;
              goto LAB_0011d408;
            }
            if (lVar3 == 0xff) {
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar4 = 1;
              *param_1 = 0x3a;
              *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011d3dc:
              lVar3 = lVar4 + 1;
            }
            else {
              lVar4 = lVar3 + 1;
              *(longlong *)(param_1 + 0x100) = lVar4;
              param_1[lVar3] = 0x3a;
              param_1[0x108] = 0x3a;
              if (lVar4 != 0xff) goto LAB_0011d3dc;
              param_1[0xff] = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              lVar3 = 1;
              lVar4 = 0;
              *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
            }
            *(longlong *)(param_1 + 0x100) = lVar3;
            param_1[lVar4] = 0x3a;
            param_1[0x108] = 0x3a;
LAB_0011d408:
            piVar5 = *(int **)(param_3[1] + 0x10);
            iVar2 = *piVar5;
            if (iVar2 != 0x46) goto LAB_0011d428;
            pcVar7 = "{default arg#";
            lVar3 = *(longlong *)(param_1 + 0x100);
            do {
              cVar1 = *pcVar7;
              if (lVar3 == 0xff) {
                param_1[0xff] = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                lVar4 = 1;
                lVar3 = 0;
                *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
              }
              else {
                lVar4 = lVar3 + 1;
              }
              *(longlong *)(param_1 + 0x100) = lVar4;
              pcVar7 = pcVar7 + 1;
              param_1[lVar3] = cVar1;
              param_1[0x108] = cVar1;
              lVar3 = lVar4;
            } while (pcVar7 != "");
            FUN_00111348(param_1,(longlong)(piVar5[4] + 1));
            FUN_00111140(param_1,&DAT_00124748);
            do {
              piVar5 = *(int **)(piVar5 + 2);
              iVar2 = *piVar5;
LAB_0011d428:
            } while (iVar2 - 0x1cU < 5);
            FUN_00118fe8(param_1,(ulonglong)param_2,piVar5);
            *(undefined8 *)(param_1 + 0x120) = uVar8;
            return;
          }
          FUN_0011c9f4(param_1,(ulonglong)param_2);
          *(undefined8 *)(param_1 + 0x120) = uVar8;
        }
      }
      param_3 = (undefined8 *)*param_3;
      if (param_3 == (undefined8 *)0x0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x130);
    }
  }
  return;
}



void FUN_0011d588(undefined *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = param_4;
  if (param_4 != (longlong *)0x0) {
    do {
      if (*(int *)(plVar1 + 2) == 0) {
        if (*(int *)plVar1[1] == 0x2a) {
          FUN_0011d274(param_1,(ulonglong)param_2,param_4,0);
          lVar3 = *(longlong *)(param_1 + 0x100);
          goto joined_r0x0011d6f0;
        }
        lVar3 = *(longlong *)(param_1 + 0x100);
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          *param_1 = 0x20;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
LAB_0011d68c:
          lVar3 = lVar2 + 1;
        }
        else {
          lVar2 = lVar3 + 1;
          *(longlong *)(param_1 + 0x100) = lVar2;
          param_1[lVar3] = 0x20;
          param_1[0x108] = 0x20;
          if (lVar2 != 0xff) goto LAB_0011d68c;
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar3 = 1;
          lVar2 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar3;
        param_1[lVar2] = 0x28;
        param_1[0x108] = 0x28;
        FUN_0011d274(param_1,(ulonglong)param_2,param_4,0);
        lVar3 = *(longlong *)(param_1 + 0x100);
        lVar2 = lVar3 + 1;
        if (lVar3 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar2 = 1;
          lVar3 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar2;
        param_1[lVar3] = 0x29;
        param_1[0x108] = 0x29;
        goto LAB_0011d5d4;
      }
      plVar1 = (longlong *)*plVar1;
    } while (plVar1 != (longlong *)0x0);
    FUN_0011d274(param_1,(ulonglong)param_2,param_4,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
LAB_0011d5d4:
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    lVar3 = 1;
    lVar2 = 0;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
  }
  else {
    lVar3 = lVar2 + 1;
  }
  *(longlong *)(param_1 + 0x100) = lVar3;
  param_1[lVar2] = 0x20;
  param_1[0x108] = 0x20;
joined_r0x0011d6f0:
  if (lVar3 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x5b;
    param_1[0x108] = 0x5b;
    lVar2 = 1;
    lVar3 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    if (lVar3 == 0) goto LAB_0011d62c;
LAB_0011d614:
    FUN_00118fe8(param_1,(ulonglong)param_2);
    lVar2 = *(longlong *)(param_1 + 0x100);
  }
  else {
    lVar2 = lVar3 + 1;
    *(longlong *)(param_1 + 0x100) = lVar2;
    param_1[lVar3] = 0x5b;
    param_1[0x108] = 0x5b;
    if (*param_3 != 0) goto LAB_0011d614;
  }
  if (lVar2 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    *param_1 = 0x5d;
    param_1[0x108] = 0x5d;
    return;
  }
LAB_0011d62c:
  *(longlong *)(param_1 + 0x100) = lVar2 + 1;
  param_1[lVar2] = 0x5d;
  param_1[0x108] = 0x5d;
  return;
}



void FUN_0011d850(undefined *param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_4 != (longlong *)0x0) {
    iVar1 = *(int *)(param_4 + 2);
    plVar3 = param_4;
joined_r0x0011d87c:
    if (iVar1 == 0) {
      switch(*(undefined4 *)plVar3[1]) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x21:
      case 0x25:
      case 0x26:
      case 0x2b:
        bVar2 = param_1[0x108];
LAB_0011d960:
        if (bVar2 == 0x20) goto LAB_0011d9cc;
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (lVar5 == 0xff) {
          param_1[0xff] = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          lVar4 = 1;
          lVar5 = 0;
          *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        }
        else {
          lVar4 = lVar5 + 1;
        }
        *(longlong *)(param_1 + 0x100) = lVar4;
        param_1[lVar5] = 0x20;
        param_1[0x108] = 0x20;
        if (lVar4 != 0xff) goto LAB_0011d9d8;
LAB_0011d990:
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,lVar4,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        break;
      default:
        plVar3 = (longlong *)*plVar3;
        if (plVar3 != (longlong *)0x0) goto code_r0x0011d8b8;
        goto LAB_0011d8c0;
      case 0x22:
      case 0x23:
      case 0x24:
        bVar2 = param_1[0x108];
        if ((bVar2 & 0xfd) != 0x28) goto LAB_0011d960;
LAB_0011d9cc:
        lVar4 = *(longlong *)(param_1 + 0x100);
        if (lVar4 == 0xff) goto LAB_0011d990;
LAB_0011d9d8:
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x28;
      param_1[0x108] = 0x28;
      uVar6 = *(undefined8 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x128) = 0;
      FUN_0011d274(param_1,(ulonglong)param_2,param_4,0);
      lVar4 = *(longlong *)(param_1 + 0x100);
      if (lVar4 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        lVar5 = 1;
        lVar4 = 0;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      }
      else {
        lVar5 = lVar4 + 1;
      }
      *(longlong *)(param_1 + 0x100) = lVar5;
      param_1[lVar4] = 0x29;
      param_1[0x108] = 0x29;
      goto joined_r0x0011d8e4;
    }
  }
LAB_0011d8c0:
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_0011d274(param_1,(ulonglong)param_2,param_4,0);
  lVar5 = *(longlong *)(param_1 + 0x100);
joined_r0x0011d8e4:
  if (lVar5 == 0xff) {
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x28;
    param_1[0x108] = 0x28;
    lVar4 = 1;
    lVar5 = *param_3;
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    if (lVar5 != 0) goto LAB_0011d904;
  }
  else {
    lVar4 = lVar5 + 1;
    *(longlong *)(param_1 + 0x100) = lVar4;
    param_1[lVar5] = 0x28;
    param_1[0x108] = 0x28;
    if (*param_3 != 0) {
LAB_0011d904:
      FUN_00118fe8(param_1,(ulonglong)param_2);
      lVar4 = *(longlong *)(param_1 + 0x100);
    }
    if (lVar4 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar5 = 1;
      lVar4 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
      goto LAB_0011d920;
    }
  }
  lVar5 = lVar4 + 1;
LAB_0011d920:
  *(longlong *)(param_1 + 0x100) = lVar5;
  param_1[lVar4] = 0x29;
  param_1[0x108] = 0x29;
  FUN_0011d274(param_1,(ulonglong)param_2,param_4,1);
  *(undefined8 *)(param_1 + 0x128) = uVar6;
  return;
code_r0x0011d8b8:
  iVar1 = *(int *)(plVar3 + 2);
  goto joined_r0x0011d87c;
}



void FUN_0011db00(undefined *param_1,undefined8 param_2,int *param_3)

{
  undefined uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_3 != 0x31) {
    FUN_00118fe8();
    return;
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(param_3 + 2) + 0x10);
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 2) + 8);
  if (lVar4 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(param_1 + 0x100);
    do {
      while (uVar1 = *(undefined *)(lVar5 + lVar3), lVar2 == 0xff) {
        lVar3 = lVar3 + 1;
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(undefined8 *)(param_1 + 0x100) = 1;
        *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
        *param_1 = uVar1;
        param_1[0x108] = uVar1;
        lVar2 = 1;
        if (lVar4 == lVar3) {
          return;
        }
      }
      *(longlong *)(param_1 + 0x100) = lVar2 + 1;
      lVar3 = lVar3 + 1;
      param_1[lVar2] = uVar1;
      param_1[0x108] = uVar1;
      lVar2 = lVar2 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}



void FUN_0011dbd4(longlong param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  if ((uVar1 != 0x30 && 1 < uVar1) && (uVar1 != 6)) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x28;
    *(undefined *)(param_1 + 0x108) = 0x28;
    FUN_00118fe8(param_1,param_2 & 0xffffffff,param_3);
    lVar3 = *(longlong *)(param_1 + 0x100);
    if (lVar3 == 0xff) {
      *(undefined *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      lVar2 = 1;
      lVar3 = 0;
      *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    }
    else {
      lVar2 = lVar3 + 1;
    }
    *(longlong *)(param_1 + 0x100) = lVar2;
    *(undefined *)(param_1 + lVar3) = 0x29;
    *(undefined *)(param_1 + 0x108) = 0x29;
    return;
  }
  FUN_00118fe8(param_1);
  return;
}



ulonglong FUN_0011dcdc(char *param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  int iVar7;
  size_t sVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  char *pcVar14;
  undefined auStack560 [16];
  char *local_1d8;
  char *local_1c8;
  char *local_1c0;
  uint local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  int local_19c;
  undefined *local_198;
  undefined4 local_190;
  size_t local_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined auStack360 [256];
  longlong local_68;
  undefined local_60;
  code *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  undefined4 local_20;
  uint local_1c;
  undefined *local_18;
  undefined4 local_10;
  uint local_c;
  undefined8 local_8;
  
  cVar12 = *param_1;
  if ((cVar12 == '_') && (param_1[1] == 'Z')) {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    iVar7 = strncmp(param_1,"_GLOBAL_",8);
    if ((iVar7 == 0) && ((cVar1 = param_1[8], cVar1 == '_' || cVar1 == '.' || (cVar1 == '$')))) {
      cVar1 = param_1[9];
      if (((cVar1 == 'I') || (iVar9 = 0, cVar1 == 'D')) &&
         ((iVar9 = 0, param_1[10] == '_' && (iVar9 = 2, cVar1 != 'I')))) {
        iVar9 = 3;
      }
    }
  }
  local_18c = strlen(param_1);
  local_1c0 = param_1 + (ulonglong)local_18c;
  lVar2 = -((longlong)(int)(local_18c << 1) * 0x18 + 0x10);
  local_1b8 = 0x11;
  lVar3 = -((-(ulonglong)(local_18c >> 0x1f) & 0xfffffff800000000 | (ulonglong)local_18c << 3) +
            0x16 & 0xfffffffffffffff0);
  local_1c8 = param_1;
  local_1b0 = param_1;
  local_198 = &stack0xfffffffffffffde0 + lVar3 + lVar2;
  local_19c = local_18c << 1;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_1a8 = &stack0xfffffffffffffde0 + lVar2;
  if (iVar9 == 1) {
    if (cVar12 != '_') {
      return 0;
    }
    if (param_1[1] != 'Z') {
      return 0;
    }
    local_1b0 = param_1 + 2;
    lVar11 = FUN_001158e0(&local_1c8,1);
    if ((local_1b8 & 1) == 0) {
LAB_0011e0fc:
      cVar12 = *local_1b0;
    }
    else {
      while (pcVar5 = local_1b0, cVar12 = *local_1b0, cVar12 == '.') {
        cVar12 = local_1b0[1];
        if (((byte)(cVar12 + 0x9fU) < 0x1a) || (cVar12 == '_')) {
          cVar12 = local_1b0[2];
          pcVar14 = local_1b0 + 2;
          if (0x19 < (byte)(cVar12 + 0x9fU)) goto LAB_0011e0f0;
          do {
            do {
              pcVar14 = pcVar14 + 1;
              cVar12 = *pcVar14;
            } while ((byte)(cVar12 + 0x9fU) < 0x1a);
LAB_0011e0f0:
          } while (cVar12 == '_');
        }
        else {
          if (9 < (byte)(cVar12 - 0x30U)) goto LAB_0011e0fc;
          cVar12 = *local_1b0;
          pcVar14 = local_1b0;
        }
        while (cVar12 == '.') {
          while( true ) {
            if (9 < (byte)(pcVar14[1] - 0x30U)) goto LAB_0011e080;
            cVar12 = pcVar14[2];
            pcVar14 = pcVar14 + 2;
            if (9 < (byte)(cVar12 - 0x30U)) break;
            do {
              pcVar14 = pcVar14 + 1;
            } while ((byte)(*pcVar14 - 0x30U) < 10);
            if (*pcVar14 != '.') goto LAB_0011e080;
          }
        }
LAB_0011e080:
        iVar7 = (int)local_1b0;
        local_1b0 = pcVar14;
        uVar10 = FUN_001108a0(&local_1c8,pcVar5,(ulonglong)(uint)((int)pcVar14 - iVar7));
        lVar11 = FUN_00110800(&local_1c8,0x4c,lVar11,uVar10);
      }
    }
  }
  else {
    if (iVar9 == 0) {
      lVar11 = FUN_00113404(&local_1c8);
      cVar12 = *local_1b0;
    }
    else {
      local_1b0 = param_1 + 0xb;
      uVar13 = 0x43;
      if (iVar9 != 2) {
        uVar13 = 0x44;
      }
      if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
        local_1b0 = param_1 + 0xd;
        uVar10 = FUN_001158e0(&local_1c8,0,0x44);
      }
      else {
        local_1d8 = local_1b0;
        sVar8 = strlen(local_1b0,(&stack0xfffffffffffffde0)[lVar3 + lVar2]);
        uVar10 = FUN_001108a0(&local_1c8,local_1d8,(ulonglong)sVar8);
      }
      lVar11 = FUN_00110800(&local_1c8,(ulonglong)uVar13,uVar10,0);
      pcVar5 = local_1b0;
      sVar8 = strlen(local_1b0,(&stack0xfffffffffffffde0)[lVar3 + lVar2]);
      local_1b0 = pcVar5 + sVar8;
      cVar12 = pcVar5[sVar8];
    }
  }
  if ((cVar12 == '\0') && (lVar11 != 0)) {
    local_58 = param_2;
    local_50 = param_3;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_34 = 0;
    local_30 = 0;
    local_38 = 0;
    local_28 = (undefined *)0x0;
    local_20 = 0;
    local_1c = 0;
    local_18 = (undefined *)0x0;
    local_10 = 0;
    local_c = 0;
    FUN_00110d70(&local_c,&local_1c,lVar11);
    local_8 = 0;
    local_c = local_1c * local_c;
    lVar4 = -((-(ulonglong)(local_1c >> 0x1f) & 0xfffffff000000000 | (ulonglong)local_1c << 4) +
             0x10);
    local_28 = &stack0xfffffffffffffde0 + lVar4 + lVar3 + lVar2;
    local_18 = &stack0xfffffffffffffde0 +
               ((lVar4 + lVar3 + lVar2) -
               ((-(ulonglong)(local_c >> 0x1f) & 0xfffffff000000000 | (ulonglong)local_c << 4) +
               0x10));
    FUN_00118fe8(auStack360,0x11,lVar11);
    uVar10 = local_50;
    pcVar6 = local_58;
    lVar2 = local_68;
    auStack360[local_68] = 0;
    (*pcVar6)(auStack360,lVar2,uVar10);
    return (ulonglong)(local_38 == 0);
  }
  return 0;
}



char * __cxa_demangle(longlong param_1,char *param_2,ulonglong *param_3,undefined4 *param_4)

{
  int iVar1;
  size_t sVar2;
  char *__src;
  ulonglong uVar3;
  char *local_20;
  undefined8 local_18;
  ulonglong local_10;
  int local_8;
  
  if ((param_1 == 0) || ((param_2 != (char *)0x0 && (param_3 == (ulonglong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (char *)0;
    }
    *param_4 = 0xfffffffd;
  }
  else {
    local_20 = (char *)0x0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
    iVar1 = FUN_0011dcdc(param_1,FUN_00111050,&local_20);
    __src = local_20;
    if (iVar1 == 0) {
      free(local_20);
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0;
      }
    }
    else {
      uVar3 = 1;
      if (local_8 == 0) {
        uVar3 = local_10;
      }
      if (local_20 != (char *)0x0) {
        if (param_2 == (char *)0x0) {
          if (param_3 != (ulonglong *)0x0) {
            *param_3 = uVar3;
          }
        }
        else {
          sVar2 = strlen(local_20);
          if ((ulonglong)sVar2 < *param_3) {
            memcpy(param_2,__src,sVar2 + 1);
            free(__src);
            __src = param_2;
          }
          else {
            free(param_2);
            *param_3 = uVar3;
          }
        }
        if (param_4 == (undefined4 *)0x0) {
          return __src;
        }
        *param_4 = 0;
        return __src;
      }
      if (param_4 == (undefined4 *)0x0) {
        return (char *)0;
      }
      if (uVar3 == 1) {
        *param_4 = 0xffffffff;
        return (char *)0;
      }
    }
    *param_4 = 0xfffffffe;
  }
  return (char *)0;
}



ulonglong __gcclibcxx_demangle_callback(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    _uVar2 = 0xfffffffd;
  }
  else {
    iVar1 = FUN_0011dcdc();
    uVar2 = 0xfffffffe;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    _uVar2 = (ulonglong)uVar2;
  }
  return _uVar2;
}



longlong __cxa_current_exception_type(void)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong lVar3;
  
  pplVar1 = (longlong **)__cxa_get_globals();
  plVar2 = *pplVar1;
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((plVar2[10] & 1U) != 0) {
      plVar2 = (longlong *)(*plVar2 + -0x70);
    }
    lVar3 = *plVar2;
  }
  return lVar3;
}



void FUN_0011e2e8(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulonglong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_0011e310(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulonglong)uVar1;
    uVar4 = uVar4 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1 << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



ulonglong ** FUN_0011e350(byte param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4)

{
  ulonglong **ppuVar1;
  ulonglong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulonglong **)((longlong)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulonglong **)*local_8;
  }
  else {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulonglong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulonglong **)FUN_0011e2e8(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulonglong **)FUN_0011e310(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(longlong)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong **)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong **)*local_8;
      }
    }
  }
  *(ulonglong ***)param_4 = local_8;
  return ppuVar1;
}



void FUN_0011e440(void)

{
  DAT_0014d350 = 8;
  DAT_0014d351 = 8;
  DAT_0014d352 = 8;
  DAT_0014d353 = 8;
  DAT_0014d354 = 8;
  DAT_0014d355 = 8;
  DAT_0014d356 = 8;
  DAT_0014d357 = 8;
  DAT_0014d358 = 8;
  DAT_0014d359 = 8;
  DAT_0014d35a = 8;
  DAT_0014d35b = 8;
  DAT_0014d35c = 8;
  DAT_0014d35d = 8;
  DAT_0014d35e = 8;
  DAT_0014d35f = 8;
  DAT_0014d360 = 8;
  DAT_0014d361 = 8;
  DAT_0014d362 = 8;
  DAT_0014d363 = 8;
  DAT_0014d364 = 8;
  DAT_0014d365 = 8;
  DAT_0014d366 = 8;
  DAT_0014d367 = 8;
  DAT_0014d368 = 8;
  DAT_0014d369 = 8;
  DAT_0014d36a = 8;
  DAT_0014d36b = 8;
  DAT_0014d36c = 8;
  DAT_0014d36d = 8;
  DAT_0014d36e = 8;
  DAT_0014d36f = 8;
  DAT_0014d390 = 8;
  DAT_0014d391 = 8;
  DAT_0014d392 = 8;
  DAT_0014d393 = 8;
  DAT_0014d394 = 8;
  DAT_0014d395 = 8;
  DAT_0014d396 = 8;
  DAT_0014d397 = 8;
  DAT_0014d398 = 8;
  DAT_0014d399 = 8;
  DAT_0014d39a = 8;
  DAT_0014d39b = 8;
  DAT_0014d39c = 8;
  DAT_0014d39d = 8;
  DAT_0014d39e = 8;
  DAT_0014d39f = 8;
  DAT_0014d3a0 = 8;
  DAT_0014d3a1 = 8;
  DAT_0014d3a2 = 8;
  DAT_0014d3a3 = 8;
  DAT_0014d3a4 = 8;
  DAT_0014d3a5 = 8;
  DAT_0014d3a6 = 8;
  DAT_0014d3a7 = 8;
  DAT_0014d3a8 = 8;
  DAT_0014d3a9 = 8;
  DAT_0014d3aa = 8;
  DAT_0014d3ab = 8;
  DAT_0014d3ac = 8;
  DAT_0014d3ad = 8;
  DAT_0014d3ae = 8;
  DAT_0014d3af = 8;
  DAT_0014d3b0 = 8;
  return;
}



void FUN_0011e554(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  if (DAT_0014d36f == '\b') {
    *param_3 = param_2;
    if ((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) != 0) {
      *(undefined *)(param_1 + 0x377) = 0;
    }
    *(undefined8 **)(param_1 + 0xf8) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 * _Unwind_GetGR(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (longlong)param_2 * 8);
    if (((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_0014d350)[param_2] != '\b') goto LAB_0011e5a0;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_0011e5a0:
                    // WARNING: Subroutine does not return
  abort();
}



longlong FUN_0011e5e8(longlong param_1,longlong param_2)

{
  void **__dest;
  void **__src;
  longlong lVar1;
  undefined auStack8 [8];
  
  if ((((*(ulonglong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0'))
     && (*(longlong *)(param_2 + 0xf8) == 0)) {
    FUN_0011e554(param_2,*(undefined8 *)(param_2 + 0x310),auStack8);
  }
  lVar1 = 0;
  while( true ) {
    __dest = *(void ***)(param_1 + lVar1 * 8);
    __src = *(void ***)(param_2 + lVar1 * 8);
    if (*(char *)(param_1 + lVar1 + 0x358) != '\0') break;
    if ((*(char *)(param_2 + lVar1 + 0x358) == '\0') || (__dest == (void **)0x0)) {
      if ((__dest != (void **)0x0 && __src != (void **)0x0) && (__src != __dest)) {
        memcpy(__dest,__src,(uint)(byte)(&DAT_0014d350)[lVar1]);
      }
    }
    else {
      if ((&DAT_0014d350)[lVar1] != '\b') break;
      *(void ***)__dest = __src;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x61) {
      if ((((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar1 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar1 = 0, *(longlong *)(param_1 + 0xf8) == 0)) {
        lVar1 = _Unwind_GetGR(param_2,0x1f);
        lVar1 = (lVar1 - *(longlong *)(param_1 + 0x310)) + *(longlong *)(param_2 + 0x350);
      }
      return lVar1;
    }
  }
                    // WARNING: Subroutine does not return
  abort();
}



undefined8 _Unwind_GetCFA(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



void _Unwind_SetGR(longlong param_1,int param_2,undefined8 param_3)

{
  if (0x61 < param_2) {
LAB_0011e70c:
                    // WARNING: Subroutine does not return
    abort();
  }
  if (((*(ulonglong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
     (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
    if ((&DAT_0014d350)[param_2] != '\b') goto LAB_0011e70c;
    **(undefined8 **)(param_1 + (longlong)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + (longlong)param_2 * 8) = param_3;
  }
  return;
}



undefined8 _Unwind_GetIP(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



undefined8 _Unwind_GetIPInfo(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x318);
  *param_2 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x340) >> 0x3f);
  return uVar1;
}



void _Unwind_SetIP(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x318) = param_2;
  return;
}



undefined8 _Unwind_GetLanguageSpecificData(longlong param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



undefined8 _Unwind_GetRegionStart(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



undefined8 _Unwind_FindEnclosingFunction(longlong param_1)

{
  longlong lVar1;
  undefined auStack24 [16];
  undefined8 local_8;
  
  lVar1 = _Unwind_Find_FDE(param_1 + -1,auStack24);
  if (lVar1 == 0) {
    local_8 = 0;
  }
  return local_8;
}



undefined8 _Unwind_GetDataRelBase(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



undefined8 _Unwind_GetTextRelBase(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



undefined8 FUN_0011e7c0(byte param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      uVar2 = _Unwind_GetTextRelBase(param_2);
      return uVar2;
    }
    if (bVar1 < 0x21) {
      if (((param_1 & 0x70) != 0) && (bVar1 != 0x10)) {
LAB_0011e828:
                    // WARNING: Subroutine does not return
        abort();
      }
    }
    else {
      if (bVar1 == 0x40) {
        uVar2 = _Unwind_GetRegionStart();
        return uVar2;
      }
      if (bVar1 != 0x50) {
        if (bVar1 == 0x30) {
          uVar2 = _Unwind_GetDataRelBase();
          return uVar2;
        }
        goto LAB_0011e828;
      }
    }
  }
  return 0;
}



void FUN_0011e838(byte *param_1,byte *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *__dest;
  undefined *puVar3;
  byte *pbVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *local_28;
  ulonglong local_18;
  longlong local_10;
  longlong local_8;
  
  *(undefined8 *)(param_4 + 0x620) = 0;
  __dest = &stack0xffffffffffffff70;
  puVar14 = (undefined *)0x0;
LAB_0011e880:
  while( true ) {
    while( true ) {
      pbVar4 = param_1;
      if ((param_2 <= pbVar4) ||
         (uVar11 = *(ulonglong *)(param_4 + 0x648),
         (ulonglong)(*(longlong *)(param_3 + 0x318) - (*(longlong *)(param_3 + 0x340) >> 0x3f)) <=
         uVar11)) {
        return;
      }
      bVar2 = *pbVar4;
      uVar9 = (ulonglong)bVar2;
      param_1 = pbVar4 + 1;
      bVar1 = bVar2 & 0xc0;
      if (bVar1 != 0x40) break;
      *(longlong *)(param_4 + 0x648) = uVar11 + (uVar9 & 0x3f) * *(longlong *)(param_4 + 0x660);
    }
    if (bVar1 == 0x80) break;
    if (bVar1 != 0xc0) goto code_r0x0011e900;
    *(undefined4 *)(param_4 + (uVar9 & 0x3f) * 0x10 + 8) = 0;
  }
  local_18 = uVar9 & 0x3f;
  goto LAB_0011e9a0;
code_r0x0011e900:
  switch(bVar2) {
  case 0:
    goto LAB_0011e880;
  case 1:
    local_28 = (undefined *)(ulonglong)*(byte *)(param_4 + 0x670);
    uVar7 = FUN_0011e7c0(local_28,param_3);
    param_1 = (byte *)FUN_0011e350((ulonglong)local_28 & 0xffffffff,uVar7,param_1,&local_8);
    *(longlong *)(param_4 + 0x648) = local_8;
    goto LAB_0011e880;
  case 2:
    *(longlong *)(param_4 + 0x648) = uVar11 + (ulonglong)pbVar4[1] * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 2;
    goto LAB_0011e880;
  case 3:
    *(longlong *)(param_4 + 0x648) =
         uVar11 + (ulonglong)*(ushort *)(pbVar4 + 1) * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 3;
    goto LAB_0011e880;
  case 4:
    *(longlong *)(param_4 + 0x648) =
         uVar11 + (ulonglong)*(uint *)(pbVar4 + 1) * *(longlong *)(param_4 + 0x660);
    param_1 = pbVar4 + 5;
    goto LAB_0011e880;
  case 5:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_18);
LAB_0011e9a0:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_10);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_10;
    break;
  case 6:
  case 8:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = 0;
    }
    goto LAB_0011e880;
  case 7:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_18);
    if (local_18 < 0x62) {
      *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = 6;
    }
    goto LAB_0011e880;
  case 9:
    uVar7 = FUN_0011e2e8(param_1,&local_18);
    param_1 = (byte *)FUN_0011e2e8(uVar7,&local_8);
    if (0x61 < local_18) goto LAB_0011e880;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 2;
    lVar8 = local_8;
    goto LAB_0011ecfc;
  case 10:
    if (puVar14 == (undefined *)0x0) {
      puVar3 = __dest + -0x660;
      __dest = __dest + -0x660;
    }
    else {
      puVar3 = __dest;
      __dest = puVar14;
      puVar14 = *(undefined **)(puVar14 + 0x620);
    }
    pvVar5 = memcpy(__dest,param_4,0x648,*puVar3);
    *(void **)(param_4 + 0x620) = pvVar5;
    __dest = puVar3;
    goto LAB_0011e880;
  case 0xb:
    local_28 = *(undefined **)(param_4 + 0x620);
    memcpy(param_4,local_28,0x648,*__dest);
    *(undefined **)(local_28 + 0x620) = puVar14;
    puVar14 = local_28;
    goto LAB_0011e880;
  case 0xc:
    uVar7 = FUN_0011e2e8(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_0011e2e8(uVar7,&local_10);
    *(longlong *)(param_4 + 0x628) = local_10;
    goto LAB_0011eae4;
  case 0xd:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
LAB_0011eae4:
    *(undefined4 *)(param_4 + 0x640) = 1;
    goto LAB_0011e880;
  case 0xe:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_10);
    lVar8 = local_10;
    goto LAB_0011ebb0;
  case 0xf:
    *(byte **)(param_4 + 0x638) = param_1;
    *(undefined4 *)(param_4 + 0x640) = 2;
    goto LAB_0011ec60;
  case 0x10:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_18);
    if (0x61 < local_18) goto LAB_0011ec60;
    uVar13 = 3;
    goto LAB_0011ec58;
  case 0x11:
    uVar7 = FUN_0011e2e8(param_1,&local_18);
    param_1 = (byte *)FUN_0011e310(uVar7,&local_8);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_8;
    break;
  case 0x12:
    uVar7 = FUN_0011e2e8(param_1,&local_10);
    *(longlong *)(param_4 + 0x630) = local_10;
    param_1 = (byte *)FUN_0011e310(uVar7,&local_8);
    *(undefined4 *)(param_4 + 0x640) = 1;
    goto LAB_0011eba4;
  case 0x13:
    param_1 = (byte *)FUN_0011e310(param_1,&local_8);
LAB_0011eba4:
    lVar8 = local_8 * *(longlong *)(param_4 + 0x658);
LAB_0011ebb0:
    *(longlong *)(param_4 + 0x628) = lVar8;
    goto LAB_0011e880;
  case 0x14:
    uVar7 = FUN_0011e2e8(param_1,&local_18);
    param_1 = (byte *)FUN_0011e2e8(uVar7,&local_10);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_10;
    goto LAB_0011ec10;
  case 0x15:
    uVar7 = FUN_0011e2e8(param_1,&local_18);
    param_1 = (byte *)FUN_0011e310(uVar7,&local_8);
    lVar10 = *(longlong *)(param_4 + 0x658);
    lVar8 = local_8;
LAB_0011ec10:
    if (0x61 < local_18) goto LAB_0011e880;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 4;
    lVar8 = lVar8 * lVar10;
    goto LAB_0011ecfc;
  case 0x16:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_18);
    if (0x61 < local_18) goto LAB_0011ec60;
    uVar13 = 5;
LAB_0011ec58:
    *(undefined4 *)(param_4 + local_18 * 0x10 + 8) = uVar13;
    *(byte **)(param_4 + local_18 * 0x10) = param_1;
LAB_0011ec60:
    lVar8 = FUN_0011e2e8(param_1,&local_10);
    param_1 = (byte *)(lVar8 + local_10);
    goto LAB_0011e880;
  default:
    goto switchD_0011e90c_caseD_17;
  case 0x2d:
    lVar8 = 0x10;
    local_18 = 0x10;
    lVar6 = 0;
    plVar12 = (longlong *)(param_4 + 0x100);
    do {
      *(undefined4 *)(plVar12 + 1) = 1;
      lVar8 = lVar8 + 1;
      *plVar12 = lVar6;
      lVar6 = lVar6 + 8;
      plVar12 = plVar12 + 2;
    } while (lVar8 != 0x20);
    goto LAB_0011e880;
  case 0x2e:
    param_1 = (byte *)FUN_0011e2e8(param_1,&local_10);
    *(longlong *)(param_3 + 0x350) = local_10;
    goto LAB_0011e880;
  case 0x2f:
    uVar7 = FUN_0011e2e8(param_1,&local_18);
    param_1 = (byte *)FUN_0011e2e8(uVar7,&local_10);
    lVar8 = *(longlong *)(param_4 + 0x658);
    if (0x61 < local_18) goto LAB_0011e880;
    lVar6 = local_18 * 0x10;
    *(undefined4 *)(param_4 + lVar6 + 8) = 1;
    lVar8 = -(lVar8 * local_10);
    goto LAB_0011ecfc;
  }
  if (0x61 < local_18) goto LAB_0011e880;
  lVar6 = local_18 * 0x10;
  *(undefined4 *)(param_4 + lVar6 + 8) = 1;
  lVar8 = lVar8 * lVar10;
LAB_0011ecfc:
  *(longlong *)(param_4 + lVar6) = lVar8;
  goto LAB_0011e880;
switchD_0011e90c_caseD_17:
                    // WARNING: Subroutine does not return
  abort(*__dest);
}



undefined8 FUN_0011ed30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  uint *puVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  char *__s;
  byte *pbVar17;
  ulonglong local_18;
  longlong local_10;
  longlong local_8;
  
  memset(param_2,0,0x680);
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  if (*(longlong *)(param_1 + 0x318) == 0) {
    return 5;
  }
  puVar4 = (uint *)_Unwind_Find_FDE(*(longlong *)(param_1 + 0x318) +
                                    (-1 - (*(longlong *)(param_1 + 0x340) >> 0x3f)),param_1 + 0x328)
  ;
  if (puVar4 == (uint *)0x0) {
    if (**(int **)(param_1 + 0x318) != -0x2d7fee98) {
      return 5;
    }
    if ((*(int **)(param_1 + 0x318))[1] != -0x2bffffff) {
      return 5;
    }
    lVar15 = *(longlong *)(param_1 + 0x310);
    param_2[0xc6] = 0x1f;
    *(undefined4 *)(param_2 + 200) = 1;
    lVar10 = lVar15 + 0x130;
    param_2[0xc5] = 0x130;
    lVar5 = 8;
    plVar7 = param_2;
    do {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = lVar5;
      lVar5 = lVar5 + 8;
      plVar7 = plVar7 + 2;
    } while (lVar5 != 0x100);
    piVar6 = (int *)(lVar15 + 0x250);
    while (*piVar6 != 0) {
      if (*piVar6 == 0x46508001) {
        plVar7 = param_2 + 0x80;
        do {
          *(undefined4 *)(plVar7 + 1) = 1;
          plVar14 = plVar7 + 2;
          *plVar7 = (longlong)piVar6 + ((-0x3f0 - lVar10) - (longlong)param_2) + (longlong)plVar7;
          plVar7 = plVar14;
        } while (plVar14 != param_2 + 0xc0);
      }
      piVar6 = (int *)((longlong)piVar6 + (ulonglong)(uint)piVar6[1]);
    }
    *(undefined *)((longlong)param_2 + 0x673) = 1;
    param_2[0x3e] = (lVar15 + 0x230) - lVar10;
    *(undefined4 *)(param_2 + 0x3f) = 1;
    *(undefined4 *)(param_2 + 0xc1) = 4;
    param_2[0xc0] = *(longlong *)(lVar15 + 0x238) - lVar10;
    param_2[0xcd] = 0x60;
LAB_0011f12c:
    uVar11 = 0;
  }
  else {
    puVar16 = (uint *)((longlong)puVar4 + (4 - (longlong)(int)puVar4[1]));
    param_2[0xc9] = *(longlong *)(param_1 + 0x338);
    __s = (char *)((longlong)puVar16 + 9);
    sVar3 = strlen(__s);
    plVar14 = (longlong *)(__s + (ulonglong)sVar3 + 1);
    plVar7 = plVar14;
    if ((*(char *)((longlong)puVar16 + 9) == 'e') && (*(char *)((longlong)puVar16 + 10) == 'h')) {
      plVar7 = plVar14 + 1;
      __s = (char *)((longlong)puVar16 + 0xb);
      param_2[0xcf] = *plVar14;
    }
    if (*(byte *)(puVar16 + 2) < 4) {
LAB_0011ef08:
      uVar11 = FUN_0011e2e8(plVar7,&local_18);
      param_2[0xcc] = local_18;
      pbVar17 = (byte *)FUN_0011e310(uVar11,&local_10);
      param_2[0xcb] = local_10;
      if (*(char *)(puVar16 + 2) == '\x01') {
        pbVar8 = pbVar17 + 1;
        uVar12 = (ulonglong)*pbVar17;
      }
      else {
        pbVar8 = (byte *)FUN_0011e2e8(pbVar17,&local_18);
        uVar12 = local_18;
      }
      param_2[0xcd] = uVar12;
      *(undefined *)((longlong)param_2 + 0x671) = 0xff;
      pbVar17 = (byte *)0x0;
      if (*__s == 'z') {
        __s = __s + 1;
        pbVar8 = (byte *)FUN_0011e2e8(pbVar8,&local_18);
        *(undefined *)((longlong)param_2 + 0x672) = 1;
        pbVar17 = pbVar8 + local_18;
      }
      while( true ) {
        __s = __s + 1;
        cVar2 = *__s;
        if (cVar2 == '\0') break;
        __s = __s;
        if (cVar2 == 'L') {
          *(byte *)((longlong)param_2 + 0x671) = *pbVar8;
LAB_0011efc4:
          pbVar8 = pbVar8 + 1;
        }
        else {
          if (cVar2 == 'R') {
            *(byte *)(param_2 + 0xce) = *pbVar8;
            goto LAB_0011efc4;
          }
          if (cVar2 == 'P') {
            bVar1 = *pbVar8;
            uVar11 = FUN_0011e7c0((ulonglong)bVar1,param_1);
            pbVar8 = (byte *)FUN_0011e350((ulonglong)bVar1,uVar11,pbVar8 + 1,&local_8);
            param_2[0xca] = local_8;
          }
          else {
            pbVar9 = pbVar17;
            if (cVar2 != 'S') goto LAB_0011f034;
            *(undefined *)((longlong)param_2 + 0x673) = 1;
          }
        }
      }
      pbVar9 = pbVar8;
      if (pbVar17 != (byte *)0x0) {
        pbVar9 = pbVar17;
      }
LAB_0011f034:
      if (pbVar9 != (byte *)0x0) {
        FUN_0011e838(pbVar9,(longlong)puVar16 + (ulonglong)*puVar16 + 4,param_1,param_2);
        if (*(byte *)(param_2 + 0xce) == 0xff) {
          iVar13 = 0;
        }
        else {
          switch((uint)*(byte *)(param_2 + 0xce) & 7) {
          case 0:
          case 4:
            iVar13 = 8;
            break;
          default:
                    // WARNING: Subroutine does not return
            abort();
          case 2:
            iVar13 = 2;
            break;
          case 3:
            iVar13 = 4;
          }
        }
        lVar5 = 0;
        lVar10 = (longlong)puVar4 + (ulonglong)(uint)(iVar13 << 1) + 8;
        if (*(char *)((longlong)param_2 + 0x672) != '\0') {
          lVar10 = FUN_0011e2e8(lVar10,&local_8);
          lVar5 = lVar10 + local_8;
        }
        bVar1 = *(byte *)((longlong)param_2 + 0x671);
        if (bVar1 != 0xff) {
          uVar11 = FUN_0011e7c0((ulonglong)bVar1,param_1);
          lVar10 = FUN_0011e350((ulonglong)bVar1,uVar11,lVar10,&local_8);
          *(longlong *)(param_1 + 800) = local_8;
        }
        if (lVar5 == 0) {
          lVar5 = lVar10;
        }
        FUN_0011e838(lVar5,(longlong)puVar4 + (ulonglong)*puVar4 + 4,param_1,param_2);
        goto LAB_0011f12c;
      }
    }
    else {
      if ((*(char *)plVar7 == '\b') && (*(char *)((longlong)plVar7 + 1) == '\0')) {
        plVar7 = (longlong *)((longlong)plVar7 + 2);
        goto LAB_0011ef08;
      }
    }
    uVar11 = 3;
  }
  return uVar11;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

ulonglong * FUN_0011f154(byte *param_1,byte *param_2,undefined8 param_3,ulonglong *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong **ppuVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  ulonglong *puVar12;
  uint uVar13;
  uint local_220 [2];
  ulonglong *local_218;
  ulonglong local_210;
  ulonglong *local_208;
  ulonglong *local_200 [64];
  
  local_200[0] = param_4;
  uVar13 = 1;
LAB_0011f1a4:
  pbVar11 = param_1;
  if (param_2 <= pbVar11) {
    if (uVar13 != 0) {
      return local_200[(int)(uVar13 - 1)];
    }
switchD_0011f5e0_caseD_1f:
                    // WARNING: Subroutine does not return
    abort();
  }
  bVar1 = *pbVar11;
  param_1 = pbVar11 + 1;
  if (bVar1 < 0x21) {
    if (bVar1 < 0x1f) {
      if (bVar1 == 0x10) {
        param_1 = (byte *)FUN_0011e2e8(param_1,&local_218);
        puVar10 = local_218;
      }
      else {
        if (bVar1 < 0x11) {
          if (bVar1 == 10) {
            puVar10 = (ulonglong *)(ulonglong)*(ushort *)(pbVar11 + 1);
LAB_0011f3b0:
            param_1 = pbVar11 + 3;
          }
          else {
            if (bVar1 < 0xb) {
              if (bVar1 == 6) goto LAB_0011f4ec;
              if (bVar1 < 7) {
                if (bVar1 != 3) goto switchD_0011f5e0_caseD_1f;
                param_1 = pbVar11 + 9;
                puVar10 = *(ulonglong **)(pbVar11 + 1);
              }
              else {
                param_1 = pbVar11 + 2;
                if (bVar1 == 8) {
                  puVar10 = (ulonglong *)(ulonglong)pbVar11[1];
                }
                else {
                  if (bVar1 != 9) goto switchD_0011f5e0_caseD_1f;
                  puVar10 = (ulonglong *)(longlong)(char)pbVar11[1];
                }
              }
            }
            else {
              if (bVar1 == 0xd) {
                puVar10 = (ulonglong *)(longlong)*(int *)(pbVar11 + 1);
              }
              else {
                if (0xd < bVar1) {
                  param_1 = pbVar11 + 9;
                  if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
                    puVar10 = *(ulonglong **)(pbVar11 + 1);
                    goto LAB_0011f6c4;
                  }
                  goto switchD_0011f5e0_caseD_1f;
                }
                if (bVar1 == 0xb) {
                  puVar10 = (ulonglong *)(longlong)*(short *)(pbVar11 + 1);
                  goto LAB_0011f3b0;
                }
                if (bVar1 != 0xc) goto switchD_0011f5e0_caseD_1f;
                puVar10 = (ulonglong *)(ulonglong)*(uint *)(pbVar11 + 1);
              }
              param_1 = pbVar11 + 5;
            }
          }
        }
        else {
          if (bVar1 == 0x15) {
            local_210 = (ulonglong)pbVar11[1];
            param_1 = pbVar11 + 2;
            if ((longlong)(int)(uVar13 - 1) <= (longlong)local_210) goto switchD_0011f5e0_caseD_1f;
            puVar10 = local_200[(longlong)(int)(uVar13 - 1) - local_210];
          }
          else {
            if (0x15 < bVar1) {
              if (bVar1 == 0x19) goto LAB_0011f4ec;
              if (0x19 < bVar1) goto LAB_0011f5b0;
              iVar5 = uVar13 - 1;
              iVar2 = uVar13 - 2;
              if (bVar1 == 0x16) {
                if ((int)uVar13 < 2) goto switchD_0011f5e0_caseD_1f;
                puVar10 = local_200[iVar5];
                local_200[iVar5] = local_200[iVar2];
                local_200[iVar2] = puVar10;
              }
              else {
                if ((bVar1 != 0x17) || ((int)uVar13 < 3)) goto switchD_0011f5e0_caseD_1f;
                puVar10 = local_200[iVar5];
                puVar12 = local_200[(int)(uVar13 - 3)];
                local_200[iVar5] = local_200[iVar2];
                local_200[iVar2] = puVar12;
                local_200[(int)(uVar13 - 3)] = puVar10;
              }
              goto LAB_0011f1a4;
            }
            if (bVar1 == 0x12) {
              if (uVar13 == 0) goto switchD_0011f5e0_caseD_1f;
              iVar5 = uVar13 - 1;
            }
            else {
              if (bVar1 < 0x12) {
                param_1 = (byte *)FUN_0011e310(param_1,&local_208);
                puVar10 = local_208;
                goto LAB_0011f6c4;
              }
              if (bVar1 == 0x13) {
                if (uVar13 == 0) goto switchD_0011f5e0_caseD_1f;
                uVar13 = uVar13 - 1;
                goto LAB_0011f1a4;
              }
              if ((bVar1 != 0x14) || ((int)uVar13 < 2)) goto switchD_0011f5e0_caseD_1f;
              iVar5 = uVar13 - 2;
            }
            puVar10 = local_200[iVar5];
          }
        }
      }
    }
    else {
LAB_0011f4ec:
      if (uVar13 == 0) goto switchD_0011f5e0_caseD_1f;
      uVar13 = uVar13 - 1;
      ppuVar9 = (ulonglong **)local_200[(int)uVar13];
      if (bVar1 == 0x1f) {
        puVar10 = (ulonglong *)-(longlong)ppuVar9;
      }
      else {
        if (bVar1 < 0x20) {
          if (bVar1 == 6) {
switchD_0011f560_caseD_8:
            puVar10 = *ppuVar9;
          }
          else {
            if (bVar1 != 0x19) goto switchD_0011f5e0_caseD_1f;
            puVar10 = (ulonglong *)
                      (((ulonglong)ppuVar9 ^ (longlong)ppuVar9 >> 0x3f) -
                      ((longlong)ppuVar9 >> 0x3f));
          }
        }
        else {
          if (bVar1 == 0x23) {
            param_1 = (byte *)FUN_0011e2e8(param_1,&local_218);
            puVar10 = (ulonglong *)((longlong)ppuVar9 + (longlong)local_218);
          }
          else {
            if (bVar1 == 0x94) {
              param_1 = pbVar11 + 2;
              switch(pbVar11[1]) {
              case 1:
                puVar10 = (ulonglong *)(ulonglong)*(byte *)ppuVar9;
                break;
              case 2:
                puVar10 = (ulonglong *)(ulonglong)*(ushort *)ppuVar9;
                break;
              default:
                goto switchD_0011f5e0_caseD_1f;
              case 4:
                puVar10 = (ulonglong *)(ulonglong)*(uint *)ppuVar9;
                break;
              case 8:
                goto switchD_0011f560_caseD_8;
              }
            }
            else {
              if (bVar1 != 0x20) goto switchD_0011f5e0_caseD_1f;
              puVar10 = (ulonglong *)~(ulonglong)ppuVar9;
            }
          }
        }
      }
    }
  }
  else {
    if (bVar1 < 0x50) {
      if (0x2f < bVar1) {
        puVar10 = (ulonglong *)(ulonglong)((uint)bVar1 - 0x30);
        goto LAB_0011f6c4;
      }
      if (0x27 < bVar1) {
        if (bVar1 < 0x2f) {
          if (0x28 < bVar1) goto LAB_0011f5b0;
          if (uVar13 == 0) goto switchD_0011f5e0_caseD_1f;
          uVar13 = uVar13 - 1;
          param_1 = pbVar11 + 3;
          if (local_200[(int)uVar13] != (ulonglong *)0x0) {
            param_1 = pbVar11 + 3 + *(short *)(pbVar11 + 1);
          }
        }
        else {
          param_1 = pbVar11 + (longlong)*(short *)(pbVar11 + 1) + 3;
        }
        goto LAB_0011f1a4;
      }
      if ((bVar1 < 0x24) && (0x22 < bVar1)) goto LAB_0011f4ec;
LAB_0011f5b0:
      if ((int)uVar13 < 2) goto switchD_0011f5e0_caseD_1f;
      uVar3 = uVar13 - 2;
      puVar8 = local_200[(int)uVar3];
      puVar12 = local_200[(int)(uVar13 - 1)];
      uVar13 = uVar3;
      switch(bVar1) {
      case 0x1a:
        puVar10 = (ulonglong *)((ulonglong)puVar12 & (ulonglong)puVar8);
        break;
      case 0x1b:
        puVar10 = (ulonglong *)0x0;
        if (puVar12 != (ulonglong *)0x0) {
          puVar10 = (ulonglong *)((longlong)puVar8 / (longlong)puVar12);
        }
        break;
      case 0x1c:
        puVar10 = (ulonglong *)((longlong)puVar8 - (longlong)puVar12);
        break;
      case 0x1d:
        uVar4 = 0;
        if (puVar12 != (ulonglong *)0x0) {
          uVar4 = (ulonglong)puVar8 / (ulonglong)puVar12;
        }
        puVar10 = (ulonglong *)((longlong)puVar8 - uVar4 * (longlong)puVar12);
        break;
      case 0x1e:
        puVar10 = (ulonglong *)((longlong)puVar12 * (longlong)puVar8);
        break;
      default:
        goto switchD_0011f5e0_caseD_1f;
      case 0x21:
        puVar10 = (ulonglong *)((ulonglong)puVar12 | (ulonglong)puVar8);
        break;
      case 0x22:
        puVar10 = (ulonglong *)((longlong)puVar12 + (longlong)puVar8);
        break;
      case 0x24:
        puVar10 = (ulonglong *)((longlong)puVar8 << ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x25:
        puVar10 = (ulonglong *)((ulonglong)puVar8 >> ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x26:
        puVar10 = (ulonglong *)((longlong)puVar8 >> ((ulonglong)puVar12 & 0x3f));
        break;
      case 0x27:
        puVar10 = (ulonglong *)((ulonglong)puVar12 ^ (ulonglong)puVar8);
        break;
      case 0x29:
        puVar10 = (ulonglong *)(ulonglong)(puVar8 == puVar12);
        break;
      case 0x2a:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar12 <= (longlong)puVar8);
        break;
      case 0x2b:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar12 < (longlong)puVar8);
        break;
      case 0x2c:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar8 <= (longlong)puVar12);
        break;
      case 0x2d:
        puVar10 = (ulonglong *)(ulonglong)((longlong)puVar8 < (longlong)puVar12);
        break;
      case 0x2e:
        puVar10 = (ulonglong *)(ulonglong)(puVar8 != puVar12);
      }
    }
    else {
      if (bVar1 != 0x90) {
        if (bVar1 < 0x91) {
          if (bVar1 < 0x70) {
            uVar3 = (uint)bVar1 - 0x50;
            goto LAB_0011f418;
          }
          param_1 = (byte *)FUN_0011e310(param_1,&local_210);
          lVar7 = _Unwind_GetGR(param_3,(ulonglong)((uint)bVar1 - 0x70));
        }
        else {
          if (bVar1 == 0x94) goto LAB_0011f4ec;
          if (0x94 < bVar1) {
            if (bVar1 != 0x96) {
              if (bVar1 == 0xf1) {
                bVar1 = pbVar11[1];
                uVar6 = FUN_0011e7c0((ulonglong)bVar1,param_3);
                param_1 = (byte *)FUN_0011e350((ulonglong)bVar1,uVar6,pbVar11 + 2,&local_208);
                puVar10 = local_208;
                goto LAB_0011f6c4;
              }
              goto switchD_0011f5e0_caseD_1f;
            }
            goto LAB_0011f1a4;
          }
          if (bVar1 != 0x92) goto switchD_0011f5e0_caseD_1f;
          uVar6 = FUN_0011e2e8(param_1,local_220);
          param_1 = (byte *)FUN_0011e310(uVar6,&local_210);
          lVar7 = _Unwind_GetGR(param_3,(ulonglong)local_220[0]);
        }
        puVar10 = (ulonglong *)(lVar7 + local_210);
        goto LAB_0011f6c4;
      }
      param_1 = (byte *)FUN_0011e2e8(param_1,local_220);
      uVar3 = local_220[0];
LAB_0011f418:
      puVar10 = (ulonglong *)_Unwind_GetGR(param_3,(ulonglong)uVar3);
    }
  }
LAB_0011f6c4:
  if (0x3f < uVar13) goto switchD_0011f5e0_caseD_1f;
  local_200[(int)uVar13] = puVar10;
  uVar13 = uVar13 + 1;
  goto LAB_0011f1a4;
}



void FUN_0011f708(void *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong *plVar7;
  undefined auStack976 [8];
  longlong local_3c8;
  longlong alStack960 [31];
  longlong local_2c8;
  ulonglong local_80;
  char acStack104 [31];
  char local_49;
  
  memcpy(alStack960,param_1,0x3c0);
  if ((((local_80 >> 0x3e & 1) == 0) || (local_49 == '\0')) && (local_2c8 == 0)) {
    FUN_0011e554(alStack960,*(undefined8 *)((longlong)param_1 + 0x310),auStack976);
  }
  if ((*(ulonglong *)((longlong)param_1 + 0x340) >> 0x3e & 1) != 0) {
    *(undefined *)((longlong)param_1 + 0x377) = 0;
  }
  iVar2 = *(int *)(param_2 + 200);
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  if (iVar2 == 1) {
    lVar3 = _Unwind_GetGR(alStack960,(ulonglong)*(uint *)(param_2 + 0xc6));
    lVar3 = lVar3 + param_2[0xc5];
  }
  else {
    if (iVar2 != 2) {
LAB_0011f850:
                    // WARNING: Subroutine does not return
      abort();
    }
    lVar3 = FUN_0011e2e8(param_2[199],&local_3c8);
    lVar3 = FUN_0011f154(lVar3,lVar3 + local_3c8,alStack960,0);
  }
  *(longlong *)((longlong)param_1 + 0x310) = lVar3;
  puVar6 = (undefined *)((longlong)param_1 + 0x358);
  lVar5 = 0;
  plVar7 = param_2;
  do {
    switch(*(undefined4 *)(plVar7 + 1)) {
    case 1:
      lVar4 = lVar3 + *plVar7;
      break;
    case 2:
      if (acStack104[(int)*plVar7] != '\0') {
        lVar4 = _Unwind_GetGR(alStack960);
        goto LAB_0011f840;
      }
      lVar4 = alStack960[(int)*plVar7];
      break;
    case 3:
      lVar4 = FUN_0011e2e8(*plVar7,&local_3c8);
      lVar4 = FUN_0011f154(lVar4,lVar4 + local_3c8,alStack960,lVar3);
      break;
    case 4:
      lVar4 = lVar3 + *plVar7;
      goto LAB_0011f840;
    case 5:
      lVar4 = FUN_0011e2e8(*plVar7,&local_3c8);
      lVar4 = FUN_0011f154(lVar4,lVar4 + local_3c8,alStack960,lVar3);
LAB_0011f840:
      if ((byte)(&DAT_0014d350)[lVar5] < 9) {
        *puVar6 = 1;
        goto LAB_0011f8c0;
      }
      goto LAB_0011f850;
    default:
      goto switchD_0011f818_caseD_5;
    }
    if ((*(ulonglong *)((longlong)param_1 + 0x340) >> 0x3e & 1) != 0) {
      *puVar6 = 0;
    }
LAB_0011f8c0:
    *(longlong *)((longlong)param_1 + lVar5 * 8) = lVar4;
switchD_0011f818_caseD_5:
    lVar5 = lVar5 + 1;
    plVar7 = plVar7 + 2;
    puVar6 = puVar6 + 1;
    if (lVar5 == 0x62) {
      uVar1 = *(ulonglong *)((longlong)param_1 + 0x340) & 0x7fffffffffffffff;
      if (*(char *)((longlong)param_2 + 0x673) != '\0') {
        uVar1 = *(ulonglong *)((longlong)param_1 + 0x340) | 0x8000000000000000;
      }
      *(ulonglong *)((longlong)param_1 + 0x340) = uVar1;
      return;
    }
  } while( true );
}



void FUN_0011f914(void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 unaff_x30;
  undefined auStack1672 [8];
  undefined auStack1664 [1576];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  
  memset(param_1,0,0x3c0);
  *(undefined8 *)((longlong)param_1 + 0x318) = unaff_x30;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0x4000000000000000;
  iVar1 = FUN_0011ed30(param_1,auStack1664);
  if (iVar1 == 0) {
    iVar1 = pthread_once((pthread_once_t *)&DAT_0014d3b4,FUN_0011e440);
    if ((iVar1 != 0) && (DAT_0014d350 == '\0')) {
      FUN_0011e440();
    }
    FUN_0011e554(param_1,param_2,auStack1672);
    local_58 = 0;
    local_40 = 1;
    local_50 = 0x1f;
    FUN_0011f708(param_1,auStack1664);
    *(undefined8 *)((longlong)param_1 + 0x318) = param_3;
    return;
  }
                    // WARNING: Subroutine does not return
  abort();
}



void FUN_0011f9f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_0011f708();
  if (*(int *)(param_2 + *(longlong *)(param_2 + 0x668) * 0x10 + 8) == 6) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    uVar1 = _Unwind_GetGR(param_1);
    *(undefined8 *)(param_1 + 0x318) = uVar1;
  }
  return;
}



undefined8 FUN_0011fa3c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined auStack1664 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_0011ed30(param_2,auStack1664);
    lVar2 = _Unwind_GetCFA(param_2);
    uVar4 = 4;
    if (lVar2 + (*(longlong *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,(ulonglong)(uVar4 | 2),*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_0011f9f0(param_2,auStack1664);
  } while( true );
}



ulonglong FUN_0011fafc(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined auStack1664 [1616];
  code *local_30;
  
  pcVar3 = (code *)param_1[2];
  uVar4 = param_1[3];
  while( true ) {
    uVar1 = FUN_0011ed30(param_2,auStack1664);
    if ((uVar1 != 5) && (uVar1 != 0)) {
      return 2;
    }
    uVar5 = 10;
    if (uVar1 == 5) {
      uVar5 = 0x1a;
    }
    iVar2 = (*pcVar3)(1,(ulonglong)uVar5,*param_1,param_1,param_2,uVar4);
    if (iVar2 != 0) {
      return 2;
    }
    if (uVar1 == 5) break;
    if (local_30 != (code *)0x0) {
      uVar1 = (*local_30)(1,10,*param_1,param_1,param_2);
      if (uVar1 == 7) break;
      if (uVar1 != 8) {
        return 2;
      }
    }
    FUN_0011f9f0(param_2,auStack1664);
  }
  return (ulonglong)uVar1;
}



longlong __frame_state_for(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined auStack2624 [792];
  longlong local_728;
  undefined8 local_700;
  undefined8 local_6f0;
  undefined8 local_680;
  undefined8 local_678 [196];
  undefined8 local_58;
  undefined2 local_50;
  int local_40;
  undefined2 local_18;
  undefined8 local_8;
  
  local_728 = param_1 + 1;
  memset(auStack2624,0,0x3c0);
  local_700 = 0x4000000000000000;
  iVar2 = FUN_0011ed30(auStack2624,&local_680);
  lVar5 = 0;
  if ((iVar2 == 0) && (local_40 != 2)) {
    puVar3 = local_678;
    pcVar6 = (char *)(param_2 + 0x334);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      cVar1 = *(char *)puVar3;
      *pcVar6 = cVar1;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        *puVar4 = puVar3[-1];
      }
      else {
        *puVar4 = 0;
      }
      puVar3 = puVar3 + 2;
      pcVar6 = pcVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar3 != &local_58);
    *(undefined8 *)(param_2 + 0x10) = local_58;
    *(undefined2 *)(param_2 + 0x330) = local_50;
    *(undefined2 *)(param_2 + 0x332) = local_18;
    *(undefined8 *)(param_2 + 0x18) = local_6f0;
    *(undefined8 *)(param_2 + 8) = local_8;
    lVar5 = param_2;
  }
  return lVar5;
}



void FUN_0011fcdc(void)

{
  return;
}



undefined8 * _Unwind_RaiseException(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined auStack3584 [960];
  undefined auStack2624 [784];
  undefined8 local_730;
  undefined8 local_728;
  longlong local_700;
  undefined auStack1664 [1616];
  code *local_30;
  
  FUN_0011f914(auStack3584,register0x00000008);
  memcpy(auStack2624,auStack3584,0x3c0);
  do {
    iVar1 = FUN_0011ed30(auStack2624,auStack1664);
    if (iVar1 == 5) {
      return param_1;
    }
    if (iVar1 != 0) {
      return param_1;
    }
    if (local_30 != (code *)0x0) {
      iVar1 = (*local_30)(1,1,*param_1,param_1,auStack2624);
      if (iVar1 == 6) {
        param_1[2] = 0;
        lVar2 = _Unwind_GetCFA(auStack2624);
        param_1[3] = lVar2 + (local_700 >> 0x3f);
        memcpy(auStack2624,auStack3584,0x3c0);
        iVar1 = FUN_0011fa3c(param_1,auStack2624);
        if (iVar1 == 7) {
          FUN_0011e5e8(auStack3584,auStack2624);
          FUN_0011fcdc(local_730,local_728);
        }
        return param_1;
      }
      if (iVar1 != 8) {
        return param_1;
      }
    }
    FUN_0011f9f0(auStack2624,auStack1664);
  } while( true );
}



longlong _Unwind_ForcedUnwind(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_0011f914(auStack1920,register0x00000008);
  memcpy(auStack960,auStack1920,0x3c0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  iVar1 = FUN_0011fafc(param_1,auStack960);
  if (iVar1 == 7) {
    FUN_0011e5e8(auStack1920,auStack960);
    FUN_0011fcdc(local_b0,local_a8);
  }
  return param_1;
}



longlong _Unwind_Resume(longlong param_1)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  FUN_0011f914(auStack1920,register0x00000008);
  memcpy(auStack960,auStack1920,0x3c0);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_0011fa3c(param_1,auStack960);
  }
  else {
    iVar1 = FUN_0011fafc(param_1,auStack960);
  }
  if (iVar1 != 7) {
                    // WARNING: Subroutine does not return
    abort();
  }
  FUN_0011e5e8(auStack1920,auStack960);
  FUN_0011fcdc(local_b0,local_a8);
  return param_1;
}



longlong _Unwind_Resume_or_Rethrow(longlong param_1)

{
  int iVar1;
  undefined auStack1920 [960];
  undefined auStack960 [784];
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    _Unwind_RaiseException();
  }
  else {
    FUN_0011f914(auStack1920,register0x00000008);
    memcpy(auStack960,auStack1920,0x3c0);
    iVar1 = FUN_0011fafc(param_1,auStack960);
    if (iVar1 != 7) {
                    // WARNING: Subroutine does not return
      abort();
    }
    FUN_0011e5e8(auStack1920,auStack960);
    FUN_0011fcdc(local_b0,local_a8);
  }
  return param_1;
}



void _Unwind_DeleteException(longlong param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}



undefined8 _Unwind_Backtrace(code *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined auStack2624 [960];
  undefined auStack1664 [1664];
  
  FUN_0011f914(auStack2624,register0x00000008);
  while (((iVar1 = FUN_0011ed30(auStack2624,auStack1664), iVar1 == 5 || (iVar1 == 0)) &&
         (iVar2 = (*param_1)(auStack2624,param_2), iVar2 == 0))) {
    if (iVar1 == 5) {
      return 5;
    }
    FUN_0011f9f0(auStack2624,auStack1664);
  }
  return 3;
}



void FUN_00120234(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    bVar1 = *param_1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulonglong)((int)uVar4 + 7);
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
    param_1 = param_1 + 1;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return;
}



void FUN_0012025c(byte *param_1,ulonglong *param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar2 = *param_1;
    uVar3 = uVar5 & 0x3f;
    uVar1 = (int)uVar5 + 7;
    uVar5 = (ulonglong)uVar1;
    uVar4 = uVar4 | ((ulonglong)bVar2 & 0x7f) << uVar3;
    param_1 = param_1 + 1;
  } while ((char)bVar2 < '\0');
  if ((uVar1 < 0x40) && ((bVar2 >> 6 & 1) != 0)) {
    uVar4 = -1 << (uVar5 & 0x3f) | uVar4;
  }
  *param_2 = uVar4;
  return;
}



void FUN_001202b8(undefined8 param_1,code *param_2,longlong param_3,ulonglong param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar3 = (int)param_4;
  while( true ) {
    uVar1 = iVar3 * 2 + 1;
    uVar5 = (ulonglong)uVar1;
    if (param_5 <= (int)uVar1) {
      return;
    }
    uVar2 = iVar3 * 2 + 2;
    if ((int)uVar2 < param_5) {
      uVar5 = -(ulonglong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
      iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar5),
                         *(undefined8 *)(param_3 + uVar5 + 8));
      if (iVar3 < 0) {
        uVar1 = uVar2;
      }
      uVar5 = (ulonglong)uVar1;
    }
    uVar6 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
    uVar7 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    iVar3 = (*param_2)(param_1,*(undefined8 *)(param_3 + uVar6),*(undefined8 *)(param_3 + uVar7));
    if (-1 < iVar3) break;
    uVar4 = *(undefined8 *)(param_3 + uVar6);
    *(undefined8 *)(param_3 + uVar6) = *(undefined8 *)(param_3 + uVar7);
    *(undefined8 *)(param_3 + uVar7) = uVar4;
    iVar3 = (int)uVar5;
    param_4 = uVar5;
  }
  return;
}



void FUN_00120378(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = *(ulonglong *)(param_3 + 8);
  lVar2 = param_3 + 0x10;
  uVar6 = uVar5 >> 1;
  while( true ) {
    uVar4 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar4;
    if ((int)uVar4 < 0) break;
    FUN_001202b8(param_1,param_2,lVar2,(ulonglong)uVar4,uVar5 & 0xffffffff);
  }
  lVar7 = 0;
  uVar4 = (int)uVar5 - 1;
  lVar1 = lVar2 + (longlong)(int)uVar4 * 8;
  while (0 < (int)uVar4) {
    uVar5 = (ulonglong)uVar4;
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar1 + lVar7);
    *(undefined8 *)(lVar1 + lVar7) = uVar3;
    uVar4 = uVar4 - 1;
    lVar7 = lVar7 + -8;
    FUN_001202b8(param_1,param_2,lVar2,0,uVar5);
  }
  return;
}



undefined8 FUN_0012042c(byte param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    switch((uint)param_1 & 7) {
    case 0:
    case 4:
      uVar1 = 8;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 2:
      uVar1 = 2;
      break;
    case 3:
      uVar1 = 4;
    }
  }
  return uVar1;
}



undefined8 FUN_0012048c(byte param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



undefined8 FUN_001204ec(byte param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  if (param_1 != 0xff) {
    bVar1 = param_1 & 0x70;
    if (bVar1 == 0x20) {
      return *(undefined8 *)(param_2 + 8);
    }
    if (bVar1 < 0x21) {
      bVar2 = bVar1 == 0x10;
      if ((param_1 & 0x70) == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0x30) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      bVar2 = bVar1 == 0x50;
    }
    if (!bVar2) {
                    // WARNING: Subroutine does not return
      abort();
    }
  }
  return 0;
}



ulonglong ** FUN_0012054c(byte param_1,ulonglong **param_2,ulonglong **param_3,ulonglong **param_4)

{
  ulonglong **ppuVar1;
  ulonglong **local_8;
  
  if (param_1 == 0x50) {
    local_8 = (ulonglong **)((longlong)param_3 + 7U & 0xfffffffffffffff8);
    ppuVar1 = local_8 + 1;
    local_8 = (ulonglong **)*local_8;
  }
  else {
    switch((uint)param_1 & 0xf) {
    case 0:
    case 4:
    case 0xc:
      ppuVar1 = param_3 + 1;
      local_8 = (ulonglong **)*param_3;
      break;
    case 1:
      ppuVar1 = (ulonglong **)FUN_00120234(param_3,&local_8);
      break;
    case 2:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(ulonglong)*(ushort *)param_3;
      break;
    case 3:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(ulonglong)*(uint *)param_3;
      break;
    default:
                    // WARNING: Subroutine does not return
      abort();
    case 9:
      ppuVar1 = (ulonglong **)FUN_0012025c(param_3,&local_8);
      break;
    case 10:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 2);
      local_8 = (ulonglong **)(longlong)*(short *)param_3;
      break;
    case 0xb:
      ppuVar1 = (ulonglong **)((longlong)param_3 + 4);
      local_8 = (ulonglong **)(longlong)(int)*(uint *)param_3;
    }
    if (local_8 != (ulonglong **)0x0) {
      if ((param_1 & 0x70) != 0x10) {
        param_3 = param_2;
      }
      local_8 = (ulonglong **)((longlong)local_8 + (longlong)param_3);
      if ((char)param_1 < '\0') {
        local_8 = (ulonglong **)*local_8;
      }
    }
  }
  *(ulonglong ***)param_4 = local_8;
  return ppuVar1;
}



ulonglong FUN_0012063c(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar2 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar3 = FUN_0012048c(uVar2,param_1);
  FUN_0012054c(uVar2,uVar3,param_2 + 8,&local_10);
  FUN_0012054c((ulonglong)(*(ushort *)(param_1 + 0x20) >> 3),uVar3,param_3 + 8,&local_8);
  uVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



ulonglong FUN_001206cc(longlong param_1)

{
  char cVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  char *pcVar7;
  char *__s;
  undefined auStack24 [8];
  undefined auStack16 [8];
  undefined auStack8 [8];
  
  __s = (char *)(param_1 + 9);
  sVar2 = strlen(__s);
  pcVar7 = __s + (ulonglong)sVar2 + 1;
  if (3 < *(byte *)(param_1 + 8)) {
    if (__s[(ulonglong)sVar2 + 1] != '\b') {
      return 0xff;
    }
    if (pcVar7[1] != '\0') {
      return 0xff;
    }
    pcVar7 = pcVar7 + 2;
  }
  if (*(char *)(param_1 + 9) == 'z') {
    uVar4 = FUN_00120234(pcVar7,auStack16);
    lVar5 = FUN_0012025c(uVar4,auStack8);
    if (*(char *)(param_1 + 8) == '\x01') {
      lVar5 = lVar5 + 1;
    }
    else {
      lVar5 = FUN_00120234(lVar5,auStack16);
    }
    __s = (char *)(param_1 + 10);
    pbVar6 = (byte *)FUN_00120234(lVar5,auStack16);
    while (cVar1 = *__s, cVar1 != 'R') {
      if (cVar1 == 'P') {
        pbVar6 = (byte *)FUN_0012054c((ulonglong)((uint)*pbVar6 & 0x7f),0,pbVar6 + 1,auStack24);
      }
      else {
        if (cVar1 != 'L') goto LAB_00120724;
        pbVar6 = pbVar6 + 1;
      }
      __s = __s + 1;
    }
    uVar3 = (ulonglong)*pbVar6;
  }
  else {
LAB_00120724:
    uVar3 = 0;
  }
  return uVar3;
}



uint * FUN_001207c8(longlong param_1,uint *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar7 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar1 = FUN_0012048c(uVar7,param_1);
  lVar2 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0;
    }
    if (param_2[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (longlong)param_2 + (4 - (longlong)(int)param_2[1]), lVar6 != lVar2)) {
        uVar3 = FUN_001206cc(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_0012048c(uVar3,param_1);
      }
      if ((uint)uVar7 == 0) {
        local_10 = *(ulonglong *)(param_2 + 2);
        local_8 = *(ulonglong *)(param_2 + 4);
        uVar3 = local_10;
      }
      else {
        uVar4 = FUN_0012054c(uVar7 & 0xff,uVar1,param_2 + 2,&local_10);
        FUN_0012054c((ulonglong)((uint)uVar7 & 0xf),0,uVar4,&local_8);
        uVar3 = FUN_0012042c(uVar7 & 0xff);
        uVar5 = 0xffffffffffffffff;
        if ((uVar3 & 0xffffffff) < 8) {
          uVar5 = (1 << ((uVar3 & 7) << 3)) - 1;
        }
        uVar3 = uVar5 & local_10;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((longlong)param_2 + (ulonglong)*param_2 + 4);
  } while( true );
}



void FUN_00120928(longlong param_1)

{
  FUN_001206cc((param_1 + 4) - (longlong)*(int *)(param_1 + 4));
  return;
}



undefined8 FUN_00120938(ulonglong *param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int *piVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 local_40;
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  piVar13 = (int *)param_1[2];
  uVar16 = *param_1;
  if ((param_2 < 0x30) || (*(int *)(param_3 + 5) == 0)) {
    if (param_2 < 0x1a) {
      return 0xffffffff;
    }
  }
  else {
    if ((param_1[4] == DAT_0013b138) && (param_1[5] == DAT_0014d3c0)) {
      puVar17 = DAT_0014d3c8;
      puVar11 = (ulonglong *)0x0;
      puVar15 = (ulonglong *)0x0;
      while (puVar9 = puVar17, puVar9 != (ulonglong *)0x0) {
        if ((*puVar9 <= *param_3) && (*param_3 < puVar9[1])) {
          uVar16 = puVar9[2];
          piVar14 = (int *)puVar9[3];
          if (puVar9 != DAT_0014d3c8) {
            puVar15[5] = puVar9[5];
            *(ulonglong **)(puVar9 + 5) = DAT_0014d3c8;
            DAT_0014d3c8 = puVar9;
          }
          goto LAB_00120b44;
        }
        puVar11 = puVar9;
        if ((*puVar9 | puVar9[1]) == 0) break;
        puVar17 = (ulonglong *)puVar9[5];
        if (puVar17 != (ulonglong *)0x0) {
          puVar15 = puVar9;
        }
      }
      goto LAB_00120a60;
    }
    puVar10 = &DAT_0014d400;
    DAT_0013b138 = param_1[4];
    DAT_0014d3c0 = param_1[5];
    do {
      puVar10[-6] = 0;
      puVar10[-5] = 0;
      *(undefined8 **)(puVar10 + -1) = puVar10;
      puVar10 = puVar10 + 6;
    } while (puVar10 != (undefined8 *)0x14d580);
    DAT_0014d548 = 0;
    DAT_0014d3c8 = &DAT_0014d3d0;
    *(undefined4 *)(param_3 + 5) = 0;
  }
  puVar15 = (ulonglong *)0x0;
  puVar11 = (ulonglong *)0x0;
LAB_00120a60:
  uVar20 = (ulonglong)*(ushort *)(param_1 + 3);
  uVar12 = 0;
  uVar8 = 0;
  bVar5 = false;
  piVar18 = (int *)0x0;
  piVar14 = (int *)0x0;
  while (uVar20 = uVar20 - 1, uVar20 != 0xffffffffffffffff) {
    iVar4 = *piVar13;
    piVar19 = piVar14;
    if (iVar4 == 1) {
      uVar2 = uVar16 + *(longlong *)(piVar13 + 4);
      if ((uVar2 <= *param_3) && (*param_3 < uVar2 + *(longlong *)(piVar13 + 10))) {
        bVar5 = true;
        uVar12 = uVar2 + *(longlong *)(piVar13 + 10);
        uVar8 = uVar2;
      }
    }
    else {
      piVar19 = piVar13;
      if ((iVar4 != 0x6474e550) && (piVar19 = piVar14, iVar4 == 2)) {
        piVar18 = piVar13;
      }
    }
    piVar13 = piVar13 + 0xe;
    piVar14 = piVar19;
  }
  if (!bVar5) {
    return 0;
  }
  if (param_2 >= 0x30) {
    if ((puVar15 != (ulonglong *)0x0) && (puVar11 != (ulonglong *)0x0)) {
      puVar15[5] = puVar11[5];
      *(ulonglong **)(puVar11 + 5) = DAT_0014d3c8;
      DAT_0014d3c8 = puVar11;
    }
    puVar11 = DAT_0014d3c8;
    DAT_0014d3c8[2] = uVar16;
    *(int **)(puVar11 + 3) = piVar14;
    *(int **)(puVar11 + 4) = piVar18;
    *puVar11 = uVar8;
    puVar11[1] = uVar12;
  }
LAB_00120b44:
  if (piVar14 == (int *)0x0) {
    return 0;
  }
  lVar1 = uVar16 + *(longlong *)(piVar14 + 4);
  if (*(char *)(uVar16 + *(longlong *)(piVar14 + 4)) != '\x01') {
    return 1;
  }
  bVar3 = *(byte *)(lVar1 + 1);
  uVar6 = FUN_001204ec((ulonglong)bVar3,param_3);
  uVar6 = FUN_0012054c((ulonglong)bVar3,uVar6,lVar1 + 4,&local_40);
  bVar3 = *(byte *)(lVar1 + 2);
  if ((bVar3 != 0xff) && (*(char *)(lVar1 + 3) == ';')) {
    uVar7 = FUN_001204ec((ulonglong)bVar3,param_3);
    piVar13 = (int *)FUN_0012054c((ulonglong)bVar3,uVar7,uVar6,&local_38);
    if (local_38 == 0) {
      return 1;
    }
    if (((ulonglong)piVar13 & 3) == 0) {
      uVar16 = *param_3;
      if (uVar16 < (ulonglong)(lVar1 + *piVar13)) {
        return 1;
      }
      local_38 = local_38 - 1;
      if (uVar16 < (ulonglong)(lVar1 + piVar13[local_38 * 2])) {
        uVar12 = 0;
        uVar8 = local_38;
        do {
          uVar20 = uVar8;
          if (uVar20 <= uVar12) {
                    // WARNING: Subroutine does not return
            abort();
          }
          uVar2 = uVar20 + uVar12;
          local_38 = uVar2 >> 1;
          uVar8 = local_38;
        } while ((uVar16 < (ulonglong)(lVar1 + piVar13[uVar2 & 0xfffffffffffffffe])) ||
                (uVar12 = local_38 + 1, uVar8 = uVar20,
                (ulonglong)(lVar1 + piVar13[(uVar2 & 0xfffffffffffffffe) + 2]) <= uVar16));
      }
      uVar16 = lVar1 + piVar13[local_38 * 2 + 1];
      uVar12 = FUN_00120928(uVar16);
      uVar8 = FUN_0012042c(uVar12 & 0xff);
      FUN_0012054c((ulonglong)((uint)(uVar12 & 0xff) & 0xf),0,uVar16 + (uVar8 & 0xffffffff) + 8,
                   &local_30);
      iVar4 = piVar13[local_38 * 2];
      if (*param_3 < (ulonglong)(lVar1 + iVar4 + local_30)) {
        param_3[4] = uVar16;
      }
      param_3[3] = lVar1 + iVar4;
      return 1;
    }
  }
  local_28 = param_3[1];
  local_20 = param_3[2];
  local_10 = 4;
  local_30 = 0;
  local_18 = local_40;
  uVar16 = FUN_001207c8(&local_30,local_40,*param_3);
  param_3[4] = uVar16;
  if (uVar16 != 0) {
    uVar16 = FUN_00120928();
    uVar6 = FUN_001204ec(uVar16 & 0xff,param_3);
    FUN_0012054c(uVar16 & 0xff,uVar6,param_3[4] + 8,&local_38);
    param_3[3] = local_38;
  }
  return 1;
}



ulonglong FUN_00120d58(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong local_10;
  ulonglong local_8;
  
  uVar2 = FUN_00120928(param_2);
  uVar3 = FUN_0012048c(uVar2 & 0xff,param_1);
  FUN_0012054c(uVar2 & 0xff,uVar3,param_2 + 8,&local_10);
  uVar2 = FUN_00120928(param_3);
  uVar3 = FUN_0012048c(uVar2 & 0xff,param_1);
  FUN_0012054c(uVar2 & 0xff,uVar3,param_3 + 8,&local_8);
  uVar1 = -(uint)(local_10 < local_8);
  if (local_8 < local_10) {
    uVar1 = 1;
  }
  return (ulonglong)uVar1;
}



longlong FUN_00120df4(ulonglong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong local_8;
  
  uVar9 = 0;
  uVar8 = 0;
  lVar7 = 0;
  lVar3 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
      lVar6 = (longlong)param_2 + (4 - (longlong)(int)param_2[1]);
      if (lVar6 != lVar3) {
        uVar2 = FUN_001206cc(lVar6);
        uVar8 = (ulonglong)uVar2;
        if (uVar2 == 0xff) {
          return 0xffffffffffffffff;
        }
        uVar9 = FUN_0012048c((ulonglong)(byte)uVar2,param_1);
        uVar1 = *(ushort *)(param_1 + 4);
        lVar3 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else {
          if (((uint)(uVar1 >> 3) & 0xff) != uVar2) {
            *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
          }
        }
      }
      FUN_0012054c(uVar8 & 0xff,uVar9,param_2 + 2,&local_8);
      uVar4 = FUN_0012042c(uVar8 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar4 & 0xffffffff) < 8) {
        uVar5 = (1 << ((uVar4 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((longlong)param_2 + (ulonglong)*param_2 + 4);
  } while( true );
}



void FUN_00120f54(longlong param_1,longlong *param_2,uint *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong local_8;
  
  uVar7 = (ulonglong)(*(ushort *)(param_1 + 0x20) >> 3) & 0xff;
  uVar1 = FUN_0012048c(uVar7,param_1);
  lVar2 = 0;
  while (*param_3 != 0) {
    if (param_3[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (longlong)param_3 + (4 - (longlong)(int)param_3[1]), lVar6 != lVar2)) {
        uVar3 = FUN_001206cc(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_0012048c(uVar3,param_1);
      }
      if ((int)uVar7 == 0) {
        uVar3 = *(ulonglong *)(param_3 + 2);
      }
      else {
        FUN_0012054c(uVar7 & 0xff,uVar1,param_3 + 2,&local_8);
        uVar4 = FUN_0012042c(uVar7 & 0xff);
        uVar3 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar3 = (1 << ((uVar4 & 7) << 3)) - 1;
        }
        uVar3 = uVar3 & local_8;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (lVar6 = *param_2, lVar6 != 0)) {
        lVar5 = *(longlong *)(lVar6 + 8);
        *(longlong *)(lVar6 + 8) = lVar5 + 1;
        *(uint **)(lVar6 + (lVar5 + 2) * 8) = param_3;
      }
    }
    param_3 = (uint *)((longlong)param_3 + (ulonglong)*param_3 + 4);
  }
  return;
}



longlong FUN_00121088(ulonglong *param_1,ulonglong param_2)

{
  byte bVar1;
  ulonglong *puVar2;
  void *pvVar3;
  uint uVar4;
  size_t __size;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong local_18;
  ulonglong *local_10;
  void *local_8;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) goto LAB_001210b4;
  uVar14 = (ulonglong)(*(uint *)(param_1 + 4) >> 0xb);
  if (*(uint *)(param_1 + 4) >> 0xb == 0) {
    if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
      uVar14 = FUN_00120df4(param_1,param_1[3]);
      if (uVar14 != 0xffffffffffffffff) goto LAB_0012112c;
LAB_001210ec:
      param_1[4] = 0;
      *(undefined2 *)(param_1 + 4) = 0x7f8;
      param_1[3] = 0x14d558;
    }
    else {
      plVar10 = (longlong *)param_1[3];
      while (*plVar10 != 0) {
        lVar8 = FUN_00120df4(param_1);
        if (lVar8 == -1) goto LAB_001210ec;
        uVar14 = uVar14 + lVar8;
        plVar10 = plVar10 + 1;
      }
LAB_0012112c:
      uVar4 = (uint)uVar14 & 0x1fffff;
      if ((ulonglong)uVar4 == uVar14) {
        uVar4 = *(uint *)(param_1 + 4) & 0x7ff | uVar4 << 0xb;
      }
      else {
        uVar4 = *(uint *)(param_1 + 4) & 0x7ff;
      }
      *(uint *)(param_1 + 4) = uVar4;
      if (uVar14 != 0) goto LAB_00121154;
    }
  }
  else {
LAB_00121154:
    __size = ((int)uVar14 + 2) * 8;
    local_10 = (ulonglong *)malloc(__size);
    if (local_10 != (ulonglong *)0x0) {
      local_10[1] = 0;
      local_8 = malloc(__size);
      if (local_8 != (void *)0x0) {
        *(undefined8 *)((longlong)local_8 + 8) = 0;
      }
      if ((*(byte *)(param_1 + 4) >> 1 & 1) == 0) {
        FUN_00120f54(param_1,&local_10,param_1[3]);
      }
      else {
        plVar10 = (longlong *)param_1[3];
        while (*plVar10 != 0) {
          plVar10 = plVar10 + 1;
          FUN_00120f54(param_1,&local_10);
        }
      }
      pvVar3 = local_8;
      puVar2 = local_10;
      if ((local_10 != (ulonglong *)0x0) && (local_10[1] != uVar14)) {
LAB_001214ac:
                    // WARNING: Subroutine does not return
        abort();
      }
      if ((*(byte *)(param_1 + 4) >> 2 & 1) == 0) {
        if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
          pcVar13 = (code *)&LAB_0012029c;
        }
        else {
          pcVar13 = FUN_0012063c;
        }
      }
      else {
        pcVar13 = FUN_00120d58;
      }
      if (local_8 == (void *)0x0) {
        FUN_00120378(param_1,pcVar13,local_10);
      }
      else {
        puVar16 = local_10 + 2;
        uVar18 = local_10[1];
        uVar11 = 0;
        puVar12 = &DAT_0014d550;
        puVar19 = puVar16;
        while (uVar11 != uVar18) {
          while ((puVar12 != &DAT_0014d550 &&
                 (iVar5 = (*pcVar13)(param_1,*puVar19,*puVar12), iVar5 < 0))) {
            lVar8 = (longlong)pvVar3 + (longlong)((longlong)puVar12 - (longlong)puVar16);
            puVar12 = *(ulonglong **)(lVar8 + 0x10);
            *(undefined8 *)(lVar8 + 0x10) = 0;
          }
          lVar8 = uVar11 * 8;
          uVar11 = uVar11 + 1;
          *(ulonglong **)((longlong)pvVar3 + lVar8 + 0x10) = puVar12;
          puVar12 = puVar19;
          puVar19 = puVar19 + 1;
        }
        lVar8 = 0;
        uVar11 = 0;
        uVar15 = 0;
        while (uVar15 != uVar18) {
          if (*(longlong *)((longlong)pvVar3 + uVar15 * 8 + 0x10) == 0) {
            lVar17 = lVar8 + 2;
            lVar8 = lVar8 + 1;
            *(ulonglong *)((longlong)pvVar3 + lVar17 * 8) = *puVar16;
          }
          else {
            lVar17 = uVar11 + 2;
            uVar11 = uVar11 + 1;
            puVar2[lVar17] = *puVar16;
          }
          uVar15 = uVar15 + 1;
          puVar16 = puVar16 + 1;
        }
        puVar2[1] = uVar11;
        *(longlong *)((longlong)pvVar3 + 8) = lVar8;
        if (*(longlong *)((longlong)local_8 + 8) + local_10[1] != uVar14) goto LAB_001214ac;
        FUN_00120378(param_1,pcVar13);
        pvVar3 = local_8;
        puVar2 = local_10;
        lVar8 = *(longlong *)((longlong)local_8 + 8);
        if (lVar8 != 0) {
          uVar14 = local_10[1];
          lVar17 = lVar8 << 3;
          do {
            lVar8 = lVar8 + -1;
            uVar11 = *(ulonglong *)((longlong)pvVar3 + lVar17 + 8);
            puVar16 = puVar2 + uVar14;
            while (uVar14 != 0) {
              iVar5 = (*pcVar13)(param_1,puVar16[1],uVar11);
              if (iVar5 < 1) break;
              *(ulonglong *)((longlong)(puVar16 + -1) + lVar17 + 0x10) = puVar16[1];
              uVar14 = uVar14 - 1;
              puVar16 = puVar16 + -1;
            }
            lVar17 = lVar17 + -8;
            puVar2[uVar14 + lVar8 + 2] = uVar11;
          } while (lVar8 != 0);
          puVar2[1] = puVar2[1] + *(longlong *)((longlong)pvVar3 + 8);
        }
        free(local_8);
      }
      *local_10 = param_1[3];
      *(ulonglong **)(param_1 + 3) = local_10;
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
LAB_001210b4:
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 >> 1 & 1) == 0) {
      uVar9 = FUN_001207c8(param_1,param_1[3],param_2);
      return uVar9;
    }
    plVar10 = (longlong *)param_1[3];
    while (*plVar10 != 0) {
      lVar8 = FUN_001207c8(param_1,*plVar10,param_2);
      if (lVar8 != 0) {
        return lVar8;
      }
      plVar10 = plVar10 + 1;
    }
  }
  else {
    if ((bVar1 >> 2 & 1) == 0) {
      if ((*(ushort *)(param_1 + 4) & 0x7f8) == 0) {
        uVar14 = 0;
        uVar11 = *(undefined8 *)(param_1[3] + 8);
        while (uVar18 = uVar11, uVar14 < uVar18) {
          uVar11 = uVar18 + uVar14 >> 1;
          lVar8 = *(longlong *)(param_1[3] + (uVar11 + 2) * 8);
          if (*(ulonglong *)(lVar8 + 8) <= param_2) {
            if (param_2 < *(ulonglong *)(lVar8 + 8) + *(longlong *)(lVar8 + 0x10)) {
              return lVar8;
            }
            uVar14 = uVar11 + 1;
            uVar11 = uVar18;
          }
        }
      }
      else {
        uVar11 = (ulonglong)(*(ushort *)(param_1 + 4) >> 3) & 0xff;
        uVar15 = param_1[3];
        uVar14 = 0;
        uVar9 = FUN_0012048c(uVar11,param_1);
        uVar18 = *(undefined8 *)(uVar15 + 8);
        while (uVar6 = uVar18, uVar14 < uVar6) {
          uVar18 = uVar6 + uVar14 >> 1;
          lVar8 = *(longlong *)(uVar15 + (uVar18 + 2) * 8);
          uVar7 = FUN_0012054c(uVar11,uVar9,lVar8 + 8,&local_18);
          FUN_0012054c((ulonglong)((uint)uVar11 & 0xf),0,uVar7,&local_10);
          if (local_18 <= param_2) {
            if (param_2 < local_18 + (longlong)local_10) {
              return lVar8;
            }
            uVar14 = uVar18 + 1;
            uVar18 = uVar6;
          }
        }
      }
    }
    else {
      uVar18 = param_1[3];
      uVar14 = 0;
      uVar11 = *(undefined8 *)(uVar18 + 8);
      while (uVar15 = uVar11, uVar14 < uVar15) {
        uVar11 = uVar15 + uVar14 >> 1;
        lVar8 = *(longlong *)(uVar18 + (uVar11 + 2) * 8);
        uVar6 = FUN_00120928(lVar8);
        uVar9 = FUN_0012048c(uVar6 & 0xff,param_1);
        uVar9 = FUN_0012054c(uVar6 & 0xff,uVar9,lVar8 + 8,&local_18);
        FUN_0012054c((ulonglong)((uint)uVar6 & 0xf),0,uVar9,&local_10);
        if (local_18 <= param_2) {
          if (param_2 < local_18 + (longlong)local_10) {
            return lVar8;
          }
          uVar14 = uVar11 + 1;
          uVar11 = uVar15;
        }
      }
    }
  }
  return 0;
}



int * __register_frame_info_bases
                (int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_2 = 0xffffffffffffffff;
    param_2[4] = 0;
    *(int **)(param_2 + 3) = param_1;
    param_2[1] = param_3;
    param_2[2] = param_4;
    *(undefined2 *)(param_2 + 4) = 0x7f8;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0014d560);
    *(undefined8 **)(param_2 + 5) = DAT_0014d588;
    DAT_0014d588 = param_2;
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0014d560);
    return (int *)(ulonglong)uVar1;
  }
  return param_1;
}



void __register_frame_info(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_bases(param_1,param_2,0,0);
  return;
}



void __register_frame(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = malloc(0x30);
    __register_frame_info(param_1,pvVar1);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00121768)

ulonglong __register_frame_info_table_bases
                    (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  param_2[4] = 0;
  param_2[3] = param_1;
  *(undefined *)(param_2 + 4) = 2;
  param_2[1] = param_3;
  *param_2 = 0xffffffffffffffff;
  param_2[2] = param_4;
  *(ushort *)(param_2 + 4) = *(ushort *)(param_2 + 4) | 0x7f8;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0014d560);
  *(undefined8 **)(param_2 + 5) = DAT_0014d588;
  DAT_0014d588 = param_2;
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0014d560);
  return (ulonglong)uVar1;
}



void __register_frame_info_table(undefined8 param_1,undefined8 param_2)

{
  __register_frame_info_table_bases(param_1,param_2,0,0);
  return;
}



void __register_frame_table(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0x30);
  __register_frame_info_table(param_1,pvVar1);
  return;
}



longlong __deregister_frame_info_bases(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0014d560);
  plVar1 = &DAT_0014d588;
  lVar2 = DAT_0014d588;
  while (lVar2 != 0) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012183c;
    plVar1 = (longlong *)(lVar2 + 0x28);
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_0014d590;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012183c;
    }
    else {
      if (**(int ***)(lVar2 + 0x18) == param_1) {
        *plVar1 = *(longlong *)(lVar2 + 0x28);
        free(*(void **)(lVar2 + 0x18));
        break;
      }
    }
    plVar1 = (longlong *)(lVar2 + 0x28);
  }
LAB_0012187c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0014d560);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_0012183c:
  *plVar1 = *(longlong *)(lVar2 + 0x28);
  goto LAB_0012187c;
}



longlong __deregister_frame_info(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0014d560);
  plVar1 = &DAT_0014d588;
  lVar2 = DAT_0014d588;
  while (lVar2 != 0) {
    if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012183c;
    plVar1 = (longlong *)(lVar2 + 0x28);
    lVar2 = *(longlong *)(lVar2 + 0x28);
  }
  plVar1 = &DAT_0014d590;
  while (lVar2 = *plVar1, lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      if (*(int **)(lVar2 + 0x18) == param_1) goto LAB_0012183c;
    }
    else {
      if (**(int ***)(lVar2 + 0x18) == param_1) {
        *plVar1 = *(longlong *)(lVar2 + 0x28);
        free(*(void **)(lVar2 + 0x18));
        break;
      }
    }
    plVar1 = (longlong *)(lVar2 + 0x28);
  }
LAB_0012187c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0014d560);
  if (lVar2 != 0) {
    return lVar2;
  }
                    // WARNING: Subroutine does not return
  abort();
LAB_0012183c:
  *plVar1 = *(longlong *)(lVar2 + 0x28);
  goto LAB_0012187c;
}



void __deregister_frame(int *param_1)

{
  void *__ptr;
  
  if (*param_1 != 0) {
    __ptr = (void *)__deregister_frame_info();
    free(__ptr);
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00121a78)

longlong _Unwind_Find_FDE(ulonglong param_1,ulonglong *param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong **ppuVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  longlong local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0014d560);
  puVar7 = DAT_0014d590;
  while (puVar7 != (ulonglong *)0x0) {
    if (*puVar7 <= param_1) {
      local_10 = FUN_00121088(puVar7,param_1);
      if (local_10 != 0) goto LAB_001219b0;
      break;
    }
    puVar7 = (ulonglong *)puVar7[5];
  }
  do {
    puVar7 = DAT_0014d588;
    if (DAT_0014d588 == (ulonglong *)0x0) {
      local_10 = 0;
      break;
    }
    DAT_0014d588 = (ulonglong *)DAT_0014d588[5];
    local_10 = FUN_00121088(puVar7,param_1);
    ppuVar3 = (ulonglong **)&DAT_0014d590;
    puVar6 = DAT_0014d590;
    while ((puVar6 != (ulonglong *)0x0 && (*puVar7 <= *puVar6))) {
      ppuVar3 = (ulonglong **)(puVar6 + 5);
      puVar6 = (ulonglong *)puVar6[5];
    }
    *(ulonglong **)(puVar7 + 5) = puVar6;
    *ppuVar3 = puVar7;
  } while (local_10 == 0);
LAB_001219b0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0014d560);
  if (local_10 == 0) {
    local_8 = 1;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = param_1;
    iVar2 = dl_iterate_phdr(FUN_00120938,&local_30);
    if (iVar2 < 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = puVar7[1];
    bVar1 = *(byte *)(puVar7 + 4);
    param_2[1] = puVar7[2];
    uVar4 = (ulonglong)(*(ushort *)(puVar7 + 4) >> 3) & 0xff;
    if ((bVar1 >> 2 & 1) != 0) {
      uVar4 = FUN_00120928(local_10);
    }
    uVar5 = FUN_0012048c(uVar4 & 0xff,puVar7);
    FUN_0012054c(uVar4 & 0xff,uVar5,local_10 + 8,&local_30);
  }
  param_2[2] = local_30;
  return local_10;
}


