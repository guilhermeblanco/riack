/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_riak_5fkv_2eproto__INCLUDED
#define PROTOBUF_C_riak_5fkv_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "riak.pb-c.h"

typedef struct _RpbGetClientIdResp RpbGetClientIdResp;
typedef struct _RpbSetClientIdReq RpbSetClientIdReq;
typedef struct _RpbGetReq RpbGetReq;
typedef struct _RpbGetResp RpbGetResp;
typedef struct _RpbPutReq RpbPutReq;
typedef struct _RpbPutResp RpbPutResp;
typedef struct _RpbDelReq RpbDelReq;
typedef struct _RpbListBucketsReq RpbListBucketsReq;
typedef struct _RpbListBucketsResp RpbListBucketsResp;
typedef struct _RpbListKeysReq RpbListKeysReq;
typedef struct _RpbListKeysResp RpbListKeysResp;
typedef struct _RpbMapRedReq RpbMapRedReq;
typedef struct _RpbMapRedResp RpbMapRedResp;
typedef struct _RpbIndexReq RpbIndexReq;
typedef struct _RpbIndexResp RpbIndexResp;
typedef struct _RpbCSBucketReq RpbCSBucketReq;
typedef struct _RpbCSBucketResp RpbCSBucketResp;
typedef struct _RpbIndexObject RpbIndexObject;
typedef struct _RpbContent RpbContent;
typedef struct _RpbLink RpbLink;
typedef struct _RpbCounterUpdateReq RpbCounterUpdateReq;
typedef struct _RpbCounterUpdateResp RpbCounterUpdateResp;
typedef struct _RpbCounterGetReq RpbCounterGetReq;
typedef struct _RpbCounterGetResp RpbCounterGetResp;


/* --- enums --- */

typedef enum _RpbIndexReq__IndexQueryType {
  RPB_INDEX_REQ__INDEX_QUERY_TYPE__eq = 0,
  RPB_INDEX_REQ__INDEX_QUERY_TYPE__range = 1
} RpbIndexReq__IndexQueryType;

/* --- messages --- */

struct  _RpbGetClientIdResp
{
  ProtobufCMessage base;
  ProtobufCBinaryData client_id;
};
#define RPB_GET_CLIENT_ID_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_get_client_id_resp__descriptor) \
    , {0,NULL} }


struct  _RpbSetClientIdReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData client_id;
};
#define RPB_SET_CLIENT_ID_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_set_client_id_req__descriptor) \
    , {0,NULL} }


struct  _RpbGetReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_r;
  uint32_t r;
  protobuf_c_boolean has_pr;
  uint32_t pr;
  protobuf_c_boolean has_basic_quorum;
  protobuf_c_boolean basic_quorum;
  protobuf_c_boolean has_notfound_ok;
  protobuf_c_boolean notfound_ok;
  protobuf_c_boolean has_if_modified;
  ProtobufCBinaryData if_modified;
  protobuf_c_boolean has_head;
  protobuf_c_boolean head;
  protobuf_c_boolean has_deletedvclock;
  protobuf_c_boolean deletedvclock;
  protobuf_c_boolean has_timeout;
  uint32_t timeout;
  protobuf_c_boolean has_sloppy_quorum;
  protobuf_c_boolean sloppy_quorum;
  protobuf_c_boolean has_n_val;
  uint32_t n_val;
};
#define RPB_GET_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_get_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0,0, 0,0, 0,0, 0,0, 0,{0,NULL}, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _RpbGetResp
{
  ProtobufCMessage base;
  size_t n_content;
  RpbContent **content;
  protobuf_c_boolean has_vclock;
  ProtobufCBinaryData vclock;
  protobuf_c_boolean has_unchanged;
  protobuf_c_boolean unchanged;
};
#define RPB_GET_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_get_resp__descriptor) \
    , 0,NULL, 0,{0,NULL}, 0,0 }


struct  _RpbPutReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_vclock;
  ProtobufCBinaryData vclock;
  RpbContent *content;
  protobuf_c_boolean has_w;
  uint32_t w;
  protobuf_c_boolean has_dw;
  uint32_t dw;
  protobuf_c_boolean has_return_body;
  protobuf_c_boolean return_body;
  protobuf_c_boolean has_pw;
  uint32_t pw;
  protobuf_c_boolean has_if_not_modified;
  protobuf_c_boolean if_not_modified;
  protobuf_c_boolean has_if_none_match;
  protobuf_c_boolean if_none_match;
  protobuf_c_boolean has_return_head;
  protobuf_c_boolean return_head;
  protobuf_c_boolean has_timeout;
  uint32_t timeout;
  protobuf_c_boolean has_asis;
  protobuf_c_boolean asis;
  protobuf_c_boolean has_sloppy_quorum;
  protobuf_c_boolean sloppy_quorum;
  protobuf_c_boolean has_n_val;
  uint32_t n_val;
};
#define RPB_PUT_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_put_req__descriptor) \
    , {0,NULL}, 0,{0,NULL}, 0,{0,NULL}, NULL, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _RpbPutResp
{
  ProtobufCMessage base;
  size_t n_content;
  RpbContent **content;
  protobuf_c_boolean has_vclock;
  ProtobufCBinaryData vclock;
  protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
};
#define RPB_PUT_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_put_resp__descriptor) \
    , 0,NULL, 0,{0,NULL}, 0,{0,NULL} }


struct  _RpbDelReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_rw;
  uint32_t rw;
  protobuf_c_boolean has_vclock;
  ProtobufCBinaryData vclock;
  protobuf_c_boolean has_r;
  uint32_t r;
  protobuf_c_boolean has_w;
  uint32_t w;
  protobuf_c_boolean has_pr;
  uint32_t pr;
  protobuf_c_boolean has_pw;
  uint32_t pw;
  protobuf_c_boolean has_dw;
  uint32_t dw;
  protobuf_c_boolean has_timeout;
  uint32_t timeout;
  protobuf_c_boolean has_sloppy_quorum;
  protobuf_c_boolean sloppy_quorum;
  protobuf_c_boolean has_n_val;
  uint32_t n_val;
};
#define RPB_DEL_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_del_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0,0, 0,{0,NULL}, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0 }


struct  _RpbListBucketsReq
{
  ProtobufCMessage base;
  protobuf_c_boolean has_timeout;
  uint32_t timeout;
  protobuf_c_boolean has_stream;
  protobuf_c_boolean stream;
};
#define RPB_LIST_BUCKETS_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_list_buckets_req__descriptor) \
    , 0,0, 0,0 }


struct  _RpbListBucketsResp
{
  ProtobufCMessage base;
  size_t n_buckets;
  ProtobufCBinaryData *buckets;
  protobuf_c_boolean has_done;
  protobuf_c_boolean done;
};
#define RPB_LIST_BUCKETS_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_list_buckets_resp__descriptor) \
    , 0,NULL, 0,0 }


struct  _RpbListKeysReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  protobuf_c_boolean has_timeout;
  uint32_t timeout;
};
#define RPB_LIST_KEYS_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_list_keys_req__descriptor) \
    , {0,NULL}, 0,0 }


struct  _RpbListKeysResp
{
  ProtobufCMessage base;
  size_t n_keys;
  ProtobufCBinaryData *keys;
  protobuf_c_boolean has_done;
  protobuf_c_boolean done;
};
#define RPB_LIST_KEYS_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_list_keys_resp__descriptor) \
    , 0,NULL, 0,0 }


struct  _RpbMapRedReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData request;
  ProtobufCBinaryData content_type;
};
#define RPB_MAP_RED_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_map_red_req__descriptor) \
    , {0,NULL}, {0,NULL} }


struct  _RpbMapRedResp
{
  ProtobufCMessage base;
  protobuf_c_boolean has_phase;
  uint32_t phase;
  protobuf_c_boolean has_response;
  ProtobufCBinaryData response;
  protobuf_c_boolean has_done;
  protobuf_c_boolean done;
};
#define RPB_MAP_RED_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_map_red_resp__descriptor) \
    , 0,0, 0,{0,NULL}, 0,0 }


struct  _RpbIndexReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData index;
  RpbIndexReq__IndexQueryType qtype;
  protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_range_min;
  ProtobufCBinaryData range_min;
  protobuf_c_boolean has_range_max;
  ProtobufCBinaryData range_max;
  protobuf_c_boolean has_return_terms;
  protobuf_c_boolean return_terms;
  protobuf_c_boolean has_stream;
  protobuf_c_boolean stream;
  protobuf_c_boolean has_max_results;
  uint32_t max_results;
  protobuf_c_boolean has_continuation;
  ProtobufCBinaryData continuation;
};
#define RPB_INDEX_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_index_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,0, 0,0, 0,0, 0,{0,NULL} }


struct  _RpbIndexResp
{
  ProtobufCMessage base;
  size_t n_keys;
  ProtobufCBinaryData *keys;
  size_t n_results;
  RpbPair **results;
  protobuf_c_boolean has_continuation;
  ProtobufCBinaryData continuation;
  protobuf_c_boolean has_done;
  protobuf_c_boolean done;
};
#define RPB_INDEX_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_index_resp__descriptor) \
    , 0,NULL, 0,NULL, 0,{0,NULL}, 0,0 }


struct  _RpbCSBucketReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData start_key;
  protobuf_c_boolean has_end_key;
  ProtobufCBinaryData end_key;
  protobuf_c_boolean has_start_incl;
  protobuf_c_boolean start_incl;
  protobuf_c_boolean has_end_incl;
  protobuf_c_boolean end_incl;
  protobuf_c_boolean has_continuation;
  ProtobufCBinaryData continuation;
  protobuf_c_boolean has_max_results;
  uint32_t max_results;
};
#define RPB_CSBUCKET_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_csbucket_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0,{0,NULL}, 0,1, 0,0, 0,{0,NULL}, 0,0 }


struct  _RpbCSBucketResp
{
  ProtobufCMessage base;
  size_t n_objects;
  RpbIndexObject **objects;
  protobuf_c_boolean has_continuation;
  ProtobufCBinaryData continuation;
  protobuf_c_boolean has_done;
  protobuf_c_boolean done;
};
#define RPB_CSBUCKET_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_csbucket_resp__descriptor) \
    , 0,NULL, 0,{0,NULL}, 0,0 }


struct  _RpbIndexObject
{
  ProtobufCMessage base;
  ProtobufCBinaryData key;
  RpbGetResp *object;
};
#define RPB_INDEX_OBJECT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_index_object__descriptor) \
    , {0,NULL}, NULL }


struct  _RpbContent
{
  ProtobufCMessage base;
  ProtobufCBinaryData value;
  protobuf_c_boolean has_content_type;
  ProtobufCBinaryData content_type;
  protobuf_c_boolean has_charset;
  ProtobufCBinaryData charset;
  protobuf_c_boolean has_content_encoding;
  ProtobufCBinaryData content_encoding;
  protobuf_c_boolean has_vtag;
  ProtobufCBinaryData vtag;
  size_t n_links;
  RpbLink **links;
  protobuf_c_boolean has_last_mod;
  uint32_t last_mod;
  protobuf_c_boolean has_last_mod_usecs;
  uint32_t last_mod_usecs;
  size_t n_usermeta;
  RpbPair **usermeta;
  size_t n_indexes;
  RpbPair **indexes;
  protobuf_c_boolean has_deleted;
  protobuf_c_boolean deleted;
};
#define RPB_CONTENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_content__descriptor) \
    , {0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL}, 0,NULL, 0,0, 0,0, 0,NULL, 0,NULL, 0,0 }


struct  _RpbLink
{
  ProtobufCMessage base;
  protobuf_c_boolean has_bucket;
  ProtobufCBinaryData bucket;
  protobuf_c_boolean has_key;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_tag;
  ProtobufCBinaryData tag;
};
#define RPB_LINK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_link__descriptor) \
    , 0,{0,NULL}, 0,{0,NULL}, 0,{0,NULL} }


struct  _RpbCounterUpdateReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData key;
  int64_t amount;
  protobuf_c_boolean has_w;
  uint32_t w;
  protobuf_c_boolean has_dw;
  uint32_t dw;
  protobuf_c_boolean has_pw;
  uint32_t pw;
  protobuf_c_boolean has_returnvalue;
  protobuf_c_boolean returnvalue;
};
#define RPB_COUNTER_UPDATE_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_counter_update_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0, 0,0, 0,0, 0,0, 0,0 }


struct  _RpbCounterUpdateResp
{
  ProtobufCMessage base;
  protobuf_c_boolean has_value;
  int64_t value;
};
#define RPB_COUNTER_UPDATE_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_counter_update_resp__descriptor) \
    , 0,0 }


struct  _RpbCounterGetReq
{
  ProtobufCMessage base;
  ProtobufCBinaryData bucket;
  ProtobufCBinaryData key;
  protobuf_c_boolean has_r;
  uint32_t r;
  protobuf_c_boolean has_pr;
  uint32_t pr;
  protobuf_c_boolean has_basic_quorum;
  protobuf_c_boolean basic_quorum;
  protobuf_c_boolean has_notfound_ok;
  protobuf_c_boolean notfound_ok;
};
#define RPB_COUNTER_GET_REQ__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_counter_get_req__descriptor) \
    , {0,NULL}, {0,NULL}, 0,0, 0,0, 0,0, 0,0 }


struct  _RpbCounterGetResp
{
  ProtobufCMessage base;
  protobuf_c_boolean has_value;
  int64_t value;
};
#define RPB_COUNTER_GET_RESP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&rpb_counter_get_resp__descriptor) \
    , 0,0 }


/* RpbGetClientIdResp methods */
void   rpb_get_client_id_resp__init
                     (RpbGetClientIdResp         *message);
size_t rpb_get_client_id_resp__get_packed_size
                     (const RpbGetClientIdResp   *message);
size_t rpb_get_client_id_resp__pack
                     (const RpbGetClientIdResp   *message,
                      uint8_t             *out);
size_t rpb_get_client_id_resp__pack_to_buffer
                     (const RpbGetClientIdResp   *message,
                      ProtobufCBuffer     *buffer);
RpbGetClientIdResp *
       rpb_get_client_id_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_get_client_id_resp__free_unpacked
                     (RpbGetClientIdResp *message,
                      ProtobufCAllocator *allocator);
/* RpbSetClientIdReq methods */
void   rpb_set_client_id_req__init
                     (RpbSetClientIdReq         *message);
size_t rpb_set_client_id_req__get_packed_size
                     (const RpbSetClientIdReq   *message);
size_t rpb_set_client_id_req__pack
                     (const RpbSetClientIdReq   *message,
                      uint8_t             *out);
size_t rpb_set_client_id_req__pack_to_buffer
                     (const RpbSetClientIdReq   *message,
                      ProtobufCBuffer     *buffer);
RpbSetClientIdReq *
       rpb_set_client_id_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_set_client_id_req__free_unpacked
                     (RpbSetClientIdReq *message,
                      ProtobufCAllocator *allocator);
/* RpbGetReq methods */
void   rpb_get_req__init
                     (RpbGetReq         *message);
size_t rpb_get_req__get_packed_size
                     (const RpbGetReq   *message);
size_t rpb_get_req__pack
                     (const RpbGetReq   *message,
                      uint8_t             *out);
size_t rpb_get_req__pack_to_buffer
                     (const RpbGetReq   *message,
                      ProtobufCBuffer     *buffer);
RpbGetReq *
       rpb_get_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_get_req__free_unpacked
                     (RpbGetReq *message,
                      ProtobufCAllocator *allocator);
/* RpbGetResp methods */
void   rpb_get_resp__init
                     (RpbGetResp         *message);
size_t rpb_get_resp__get_packed_size
                     (const RpbGetResp   *message);
size_t rpb_get_resp__pack
                     (const RpbGetResp   *message,
                      uint8_t             *out);
size_t rpb_get_resp__pack_to_buffer
                     (const RpbGetResp   *message,
                      ProtobufCBuffer     *buffer);
RpbGetResp *
       rpb_get_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_get_resp__free_unpacked
                     (RpbGetResp *message,
                      ProtobufCAllocator *allocator);
/* RpbPutReq methods */
void   rpb_put_req__init
                     (RpbPutReq         *message);
size_t rpb_put_req__get_packed_size
                     (const RpbPutReq   *message);
size_t rpb_put_req__pack
                     (const RpbPutReq   *message,
                      uint8_t             *out);
size_t rpb_put_req__pack_to_buffer
                     (const RpbPutReq   *message,
                      ProtobufCBuffer     *buffer);
RpbPutReq *
       rpb_put_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_put_req__free_unpacked
                     (RpbPutReq *message,
                      ProtobufCAllocator *allocator);
/* RpbPutResp methods */
void   rpb_put_resp__init
                     (RpbPutResp         *message);
size_t rpb_put_resp__get_packed_size
                     (const RpbPutResp   *message);
size_t rpb_put_resp__pack
                     (const RpbPutResp   *message,
                      uint8_t             *out);
size_t rpb_put_resp__pack_to_buffer
                     (const RpbPutResp   *message,
                      ProtobufCBuffer     *buffer);
RpbPutResp *
       rpb_put_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_put_resp__free_unpacked
                     (RpbPutResp *message,
                      ProtobufCAllocator *allocator);
/* RpbDelReq methods */
void   rpb_del_req__init
                     (RpbDelReq         *message);
size_t rpb_del_req__get_packed_size
                     (const RpbDelReq   *message);
size_t rpb_del_req__pack
                     (const RpbDelReq   *message,
                      uint8_t             *out);
size_t rpb_del_req__pack_to_buffer
                     (const RpbDelReq   *message,
                      ProtobufCBuffer     *buffer);
RpbDelReq *
       rpb_del_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_del_req__free_unpacked
                     (RpbDelReq *message,
                      ProtobufCAllocator *allocator);
/* RpbListBucketsReq methods */
void   rpb_list_buckets_req__init
                     (RpbListBucketsReq         *message);
size_t rpb_list_buckets_req__get_packed_size
                     (const RpbListBucketsReq   *message);
size_t rpb_list_buckets_req__pack
                     (const RpbListBucketsReq   *message,
                      uint8_t             *out);
size_t rpb_list_buckets_req__pack_to_buffer
                     (const RpbListBucketsReq   *message,
                      ProtobufCBuffer     *buffer);
RpbListBucketsReq *
       rpb_list_buckets_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_list_buckets_req__free_unpacked
                     (RpbListBucketsReq *message,
                      ProtobufCAllocator *allocator);
/* RpbListBucketsResp methods */
void   rpb_list_buckets_resp__init
                     (RpbListBucketsResp         *message);
size_t rpb_list_buckets_resp__get_packed_size
                     (const RpbListBucketsResp   *message);
size_t rpb_list_buckets_resp__pack
                     (const RpbListBucketsResp   *message,
                      uint8_t             *out);
size_t rpb_list_buckets_resp__pack_to_buffer
                     (const RpbListBucketsResp   *message,
                      ProtobufCBuffer     *buffer);
RpbListBucketsResp *
       rpb_list_buckets_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_list_buckets_resp__free_unpacked
                     (RpbListBucketsResp *message,
                      ProtobufCAllocator *allocator);
/* RpbListKeysReq methods */
void   rpb_list_keys_req__init
                     (RpbListKeysReq         *message);
size_t rpb_list_keys_req__get_packed_size
                     (const RpbListKeysReq   *message);
size_t rpb_list_keys_req__pack
                     (const RpbListKeysReq   *message,
                      uint8_t             *out);
size_t rpb_list_keys_req__pack_to_buffer
                     (const RpbListKeysReq   *message,
                      ProtobufCBuffer     *buffer);
RpbListKeysReq *
       rpb_list_keys_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_list_keys_req__free_unpacked
                     (RpbListKeysReq *message,
                      ProtobufCAllocator *allocator);
/* RpbListKeysResp methods */
void   rpb_list_keys_resp__init
                     (RpbListKeysResp         *message);
size_t rpb_list_keys_resp__get_packed_size
                     (const RpbListKeysResp   *message);
size_t rpb_list_keys_resp__pack
                     (const RpbListKeysResp   *message,
                      uint8_t             *out);
size_t rpb_list_keys_resp__pack_to_buffer
                     (const RpbListKeysResp   *message,
                      ProtobufCBuffer     *buffer);
RpbListKeysResp *
       rpb_list_keys_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_list_keys_resp__free_unpacked
                     (RpbListKeysResp *message,
                      ProtobufCAllocator *allocator);
/* RpbMapRedReq methods */
void   rpb_map_red_req__init
                     (RpbMapRedReq         *message);
size_t rpb_map_red_req__get_packed_size
                     (const RpbMapRedReq   *message);
size_t rpb_map_red_req__pack
                     (const RpbMapRedReq   *message,
                      uint8_t             *out);
size_t rpb_map_red_req__pack_to_buffer
                     (const RpbMapRedReq   *message,
                      ProtobufCBuffer     *buffer);
RpbMapRedReq *
       rpb_map_red_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_map_red_req__free_unpacked
                     (RpbMapRedReq *message,
                      ProtobufCAllocator *allocator);
/* RpbMapRedResp methods */
void   rpb_map_red_resp__init
                     (RpbMapRedResp         *message);
size_t rpb_map_red_resp__get_packed_size
                     (const RpbMapRedResp   *message);
size_t rpb_map_red_resp__pack
                     (const RpbMapRedResp   *message,
                      uint8_t             *out);
size_t rpb_map_red_resp__pack_to_buffer
                     (const RpbMapRedResp   *message,
                      ProtobufCBuffer     *buffer);
RpbMapRedResp *
       rpb_map_red_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_map_red_resp__free_unpacked
                     (RpbMapRedResp *message,
                      ProtobufCAllocator *allocator);
/* RpbIndexReq methods */
void   rpb_index_req__init
                     (RpbIndexReq         *message);
size_t rpb_index_req__get_packed_size
                     (const RpbIndexReq   *message);
size_t rpb_index_req__pack
                     (const RpbIndexReq   *message,
                      uint8_t             *out);
size_t rpb_index_req__pack_to_buffer
                     (const RpbIndexReq   *message,
                      ProtobufCBuffer     *buffer);
RpbIndexReq *
       rpb_index_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_index_req__free_unpacked
                     (RpbIndexReq *message,
                      ProtobufCAllocator *allocator);
/* RpbIndexResp methods */
void   rpb_index_resp__init
                     (RpbIndexResp         *message);
size_t rpb_index_resp__get_packed_size
                     (const RpbIndexResp   *message);
size_t rpb_index_resp__pack
                     (const RpbIndexResp   *message,
                      uint8_t             *out);
size_t rpb_index_resp__pack_to_buffer
                     (const RpbIndexResp   *message,
                      ProtobufCBuffer     *buffer);
RpbIndexResp *
       rpb_index_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_index_resp__free_unpacked
                     (RpbIndexResp *message,
                      ProtobufCAllocator *allocator);
/* RpbCSBucketReq methods */
void   rpb_csbucket_req__init
                     (RpbCSBucketReq         *message);
size_t rpb_csbucket_req__get_packed_size
                     (const RpbCSBucketReq   *message);
size_t rpb_csbucket_req__pack
                     (const RpbCSBucketReq   *message,
                      uint8_t             *out);
size_t rpb_csbucket_req__pack_to_buffer
                     (const RpbCSBucketReq   *message,
                      ProtobufCBuffer     *buffer);
RpbCSBucketReq *
       rpb_csbucket_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_csbucket_req__free_unpacked
                     (RpbCSBucketReq *message,
                      ProtobufCAllocator *allocator);
/* RpbCSBucketResp methods */
void   rpb_csbucket_resp__init
                     (RpbCSBucketResp         *message);
size_t rpb_csbucket_resp__get_packed_size
                     (const RpbCSBucketResp   *message);
size_t rpb_csbucket_resp__pack
                     (const RpbCSBucketResp   *message,
                      uint8_t             *out);
size_t rpb_csbucket_resp__pack_to_buffer
                     (const RpbCSBucketResp   *message,
                      ProtobufCBuffer     *buffer);
RpbCSBucketResp *
       rpb_csbucket_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_csbucket_resp__free_unpacked
                     (RpbCSBucketResp *message,
                      ProtobufCAllocator *allocator);
/* RpbIndexObject methods */
void   rpb_index_object__init
                     (RpbIndexObject         *message);
size_t rpb_index_object__get_packed_size
                     (const RpbIndexObject   *message);
size_t rpb_index_object__pack
                     (const RpbIndexObject   *message,
                      uint8_t             *out);
size_t rpb_index_object__pack_to_buffer
                     (const RpbIndexObject   *message,
                      ProtobufCBuffer     *buffer);
RpbIndexObject *
       rpb_index_object__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_index_object__free_unpacked
                     (RpbIndexObject *message,
                      ProtobufCAllocator *allocator);
/* RpbContent methods */
void   rpb_content__init
                     (RpbContent         *message);
size_t rpb_content__get_packed_size
                     (const RpbContent   *message);
size_t rpb_content__pack
                     (const RpbContent   *message,
                      uint8_t             *out);
size_t rpb_content__pack_to_buffer
                     (const RpbContent   *message,
                      ProtobufCBuffer     *buffer);
RpbContent *
       rpb_content__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_content__free_unpacked
                     (RpbContent *message,
                      ProtobufCAllocator *allocator);
/* RpbLink methods */
void   rpb_link__init
                     (RpbLink         *message);
size_t rpb_link__get_packed_size
                     (const RpbLink   *message);
size_t rpb_link__pack
                     (const RpbLink   *message,
                      uint8_t             *out);
size_t rpb_link__pack_to_buffer
                     (const RpbLink   *message,
                      ProtobufCBuffer     *buffer);
RpbLink *
       rpb_link__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_link__free_unpacked
                     (RpbLink *message,
                      ProtobufCAllocator *allocator);
/* RpbCounterUpdateReq methods */
void   rpb_counter_update_req__init
                     (RpbCounterUpdateReq         *message);
size_t rpb_counter_update_req__get_packed_size
                     (const RpbCounterUpdateReq   *message);
size_t rpb_counter_update_req__pack
                     (const RpbCounterUpdateReq   *message,
                      uint8_t             *out);
size_t rpb_counter_update_req__pack_to_buffer
                     (const RpbCounterUpdateReq   *message,
                      ProtobufCBuffer     *buffer);
RpbCounterUpdateReq *
       rpb_counter_update_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_counter_update_req__free_unpacked
                     (RpbCounterUpdateReq *message,
                      ProtobufCAllocator *allocator);
/* RpbCounterUpdateResp methods */
void   rpb_counter_update_resp__init
                     (RpbCounterUpdateResp         *message);
size_t rpb_counter_update_resp__get_packed_size
                     (const RpbCounterUpdateResp   *message);
size_t rpb_counter_update_resp__pack
                     (const RpbCounterUpdateResp   *message,
                      uint8_t             *out);
size_t rpb_counter_update_resp__pack_to_buffer
                     (const RpbCounterUpdateResp   *message,
                      ProtobufCBuffer     *buffer);
RpbCounterUpdateResp *
       rpb_counter_update_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_counter_update_resp__free_unpacked
                     (RpbCounterUpdateResp *message,
                      ProtobufCAllocator *allocator);
/* RpbCounterGetReq methods */
void   rpb_counter_get_req__init
                     (RpbCounterGetReq         *message);
size_t rpb_counter_get_req__get_packed_size
                     (const RpbCounterGetReq   *message);
size_t rpb_counter_get_req__pack
                     (const RpbCounterGetReq   *message,
                      uint8_t             *out);
size_t rpb_counter_get_req__pack_to_buffer
                     (const RpbCounterGetReq   *message,
                      ProtobufCBuffer     *buffer);
RpbCounterGetReq *
       rpb_counter_get_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_counter_get_req__free_unpacked
                     (RpbCounterGetReq *message,
                      ProtobufCAllocator *allocator);
/* RpbCounterGetResp methods */
void   rpb_counter_get_resp__init
                     (RpbCounterGetResp         *message);
size_t rpb_counter_get_resp__get_packed_size
                     (const RpbCounterGetResp   *message);
size_t rpb_counter_get_resp__pack
                     (const RpbCounterGetResp   *message,
                      uint8_t             *out);
size_t rpb_counter_get_resp__pack_to_buffer
                     (const RpbCounterGetResp   *message,
                      ProtobufCBuffer     *buffer);
RpbCounterGetResp *
       rpb_counter_get_resp__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   rpb_counter_get_resp__free_unpacked
                     (RpbCounterGetResp *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*RpbGetClientIdResp_Closure)
                 (const RpbGetClientIdResp *message,
                  void *closure_data);
typedef void (*RpbSetClientIdReq_Closure)
                 (const RpbSetClientIdReq *message,
                  void *closure_data);
typedef void (*RpbGetReq_Closure)
                 (const RpbGetReq *message,
                  void *closure_data);
typedef void (*RpbGetResp_Closure)
                 (const RpbGetResp *message,
                  void *closure_data);
typedef void (*RpbPutReq_Closure)
                 (const RpbPutReq *message,
                  void *closure_data);
typedef void (*RpbPutResp_Closure)
                 (const RpbPutResp *message,
                  void *closure_data);
typedef void (*RpbDelReq_Closure)
                 (const RpbDelReq *message,
                  void *closure_data);
typedef void (*RpbListBucketsReq_Closure)
                 (const RpbListBucketsReq *message,
                  void *closure_data);
typedef void (*RpbListBucketsResp_Closure)
                 (const RpbListBucketsResp *message,
                  void *closure_data);
typedef void (*RpbListKeysReq_Closure)
                 (const RpbListKeysReq *message,
                  void *closure_data);
typedef void (*RpbListKeysResp_Closure)
                 (const RpbListKeysResp *message,
                  void *closure_data);
typedef void (*RpbMapRedReq_Closure)
                 (const RpbMapRedReq *message,
                  void *closure_data);
typedef void (*RpbMapRedResp_Closure)
                 (const RpbMapRedResp *message,
                  void *closure_data);
typedef void (*RpbIndexReq_Closure)
                 (const RpbIndexReq *message,
                  void *closure_data);
typedef void (*RpbIndexResp_Closure)
                 (const RpbIndexResp *message,
                  void *closure_data);
typedef void (*RpbCSBucketReq_Closure)
                 (const RpbCSBucketReq *message,
                  void *closure_data);
typedef void (*RpbCSBucketResp_Closure)
                 (const RpbCSBucketResp *message,
                  void *closure_data);
typedef void (*RpbIndexObject_Closure)
                 (const RpbIndexObject *message,
                  void *closure_data);
typedef void (*RpbContent_Closure)
                 (const RpbContent *message,
                  void *closure_data);
typedef void (*RpbLink_Closure)
                 (const RpbLink *message,
                  void *closure_data);
typedef void (*RpbCounterUpdateReq_Closure)
                 (const RpbCounterUpdateReq *message,
                  void *closure_data);
typedef void (*RpbCounterUpdateResp_Closure)
                 (const RpbCounterUpdateResp *message,
                  void *closure_data);
typedef void (*RpbCounterGetReq_Closure)
                 (const RpbCounterGetReq *message,
                  void *closure_data);
typedef void (*RpbCounterGetResp_Closure)
                 (const RpbCounterGetResp *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor rpb_get_client_id_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_set_client_id_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_get_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_get_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_put_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_put_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_del_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_list_buckets_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_list_buckets_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_list_keys_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_list_keys_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_map_red_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_map_red_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_index_req__descriptor;
extern const ProtobufCEnumDescriptor    rpb_index_req__index_query_type__descriptor;
extern const ProtobufCMessageDescriptor rpb_index_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_csbucket_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_csbucket_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_index_object__descriptor;
extern const ProtobufCMessageDescriptor rpb_content__descriptor;
extern const ProtobufCMessageDescriptor rpb_link__descriptor;
extern const ProtobufCMessageDescriptor rpb_counter_update_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_counter_update_resp__descriptor;
extern const ProtobufCMessageDescriptor rpb_counter_get_req__descriptor;
extern const ProtobufCMessageDescriptor rpb_counter_get_resp__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_riak_5fkv_2eproto__INCLUDED */
