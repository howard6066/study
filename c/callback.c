#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#define DEFAULT_BLOCK_SIZE (4096)
 
// �w�qcallback function��prototype�C
typedef void (* CALLBACK) (int);
 
// �w�q�F�@�ӦW��ShowPercentage���禡�C�o�N�O�ڭ̪�callback�禡�C
// �L��prototype�����P�e����CALLBACK�ŧi�@�P�C
void ShowPercentage(int percentage)
{
    fprintf(stderr, "%dn%nn", percentage);
}
 
// �w�q�F�@��CopyFile���禡�A�o�Ө禡�|�N�Ѽ�source�ҫ��w�ɮ׽ƻs��
// target�ѼƩҫ��w���ɮץh�C�ӥB�C�ƻsDEFAULT_BLOCK_SIZE�ƶq�����
// �N�|�I�s�@��callback�ѼƩҫ���function�@���C
void CopyFile(const char *source, const char *target, CALLBACK callback)
{
    char buf[DEFAULT_BLOCK_SIZE] ;
    struct stat fs ;
    int fdSrc, fdTrg ;
    int readBytes = 0, totalReadBytes = 0, percentage = 0;
    fdSrc = open(source, O_RDONLY);
    fstat(fdSrc, &fs);
    fdTrg = open(target,O_CREAT|O_TRUNC|O_RDWR);
    // �D�n�ƻs��ƪ��j��
    while((readBytes=read(fdSrc, buf, DEFAULT_BLOCK_SIZE)) > 0)
{
        write(fdTrg, buf, readBytes);
        totalReadBytes += readBytes ;
        //�ƻs��ƫ�N�I�scallback�禡�h����ܦʤ��񪺰ʧ@�C
        callback( (totalReadBytes*100)/fs.st_size);
}
    close(fdTrg);
    close(fdSrc);
}
 
int main(void)
{
    // �o�ӽd�Ҥ��u�O�Q��callback����ܥثe���i�סC
    // ��ڤW�ڭ̥i�H�Q��callback�Ӱ���h���ʧ@�C
    CopyFile("A.TXT", "B.TXT", ShowPercentage);
    return 0 ;
}