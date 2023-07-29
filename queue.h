#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct {
    volatile uint16_t head;
    volatile uint16_t tail;
    uint16_t itemsize;
    uint16_t itemcount;
    uint8_t *buf;
} queue_type;

static __inline int queue_is_empty(queue_type *q)
{
    return (q->head == q->tail);
}

static __inline int queue_is_full(queue_type *q)
{
    return (q->head == q->tail - 1) || ((q->tail == 0) && (q->head == q->itemcount - 1));
}

void queue_init(queue_type *q, uint8_t *buf, uint16_t itemsize, uint16_t itemcount);
int queue_put(queue_type *q, void *data);
int queue_get(queue_type *q, void *data);
int queue_get_size(queue_type *q);
int queue_peek(queue_type *q, void *data);

#endif // _QUEUE_H_

