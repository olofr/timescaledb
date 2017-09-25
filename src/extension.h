#ifndef TIMESCALEDB_EXTENSION_H
#define TIMESCALEDB_EXTENSION_H
#include <postgres.h>

bool		extension_invalidate(Oid relid);
bool		extension_is_loaded(void);
void        assert_extension_version(void);
void        set_altering_extension(bool);

#endif   /* TIMESCALEDB_EXTENSION_H */
