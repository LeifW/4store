/*
 *  Copyright 2006 Nick Lamb for Garlik.com
 */

typedef struct {
  int sock;
  char *request;
  GIOChannel *ioch;
  GHashTable *headers;
  int importing;
  char *import_uri;
  long bytes_left;
  GByteArray *partial;
  char *query_string;
  fs_query *qr;
  int query_flags;
  guint watchdog;
  int soft_limit;
} client_ctxt;
