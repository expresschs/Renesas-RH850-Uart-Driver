#include <string.h>
#include <stdint.h>
#include "queue.h"

void queue_init(queue_type *q, uint8_t *buf, uint16_t itemsize, uint16_t itemcount)
{
    q->itemsize = itemsize;
    q->itemcount = itemcount;
    q->buf = (void*)buf;
    q->head = 0;
    q->tail = 0;

    return;
}

int queue_put(queue_type *q, void *data)
{
    int ret = 1;

    if (0 == queue_is_full(q)) {
        memcpy(q->buf + q->itemsize * q->head, data, q->itemsize);
        q->head++;
        if(q->head == q->itemcount) {
            q->head = 0;
        }
        ret = 0;
    }

    return ret;
}

int queue_get(queue_type *q, void *data)
{
    int ret = 1;

    if (0 == queue_is_empty(q)) {
        memcpy(data, q->buf + q->itemsize * q->tail, q->itemsize);
        q->tail++;
        if(q->tail == q->itemcount) {
            q->tail = 0;
        }
        ret = 0;
    }

    return ret;
}

int qeuue_get_size(queue_type *q)
{
    int size;

    if (q->head >= q->tail) {
        size = q->head - q->tail;
    } else {
        size = q->itemcount - q->tail + q->head;
    }

    return size;
}

int queue_peek(queue_type *q, void *data)
{
    int ret = 1;

    if (0 == queue_is_empty(q)) {
        memcpy(data, q->buf + q->itemsize * q->tail, q->itemsize);
        ret = 0;
    }

    return ret;
}

