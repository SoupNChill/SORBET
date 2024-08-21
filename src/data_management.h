// data_management.h
#ifndef DATA_MANAGEMENT_H
#define DATA_MANAGEMENT_H

void distribute_data(uint8_t *data, size_t data_size, Disk *disks, int disk_count, char *parity_path);
void recover_file(char *file_path, Disk *disks, int disk_count, char *parity_path);

#endif // DATA_MANAGEMENT_H
