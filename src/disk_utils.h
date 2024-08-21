// disk_utils.h
#ifndef DISK_UTILS_H
#define DISK_UTILS_H

typedef struct {
    char path[256];
    uint64_t size;
    int mounted;
    int is_hot_spare;
} Disk;

void mount_disk(Disk *disk);
void unmount_disk(Disk *disk);
int initialize_disk(Disk *disk, int reformat);
void get_disk_size(Disk *disk);

#endif // DISK_UTILS_H
