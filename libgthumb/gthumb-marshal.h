
#ifndef __gthumb_marshal_MARSHAL_H__
#define __gthumb_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* BOOL:BOOL (./gthumb-marshal.list:1) */
extern void gthumb_marshal_BOOLEAN__BOOLEAN (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);
#define gthumb_marshal_BOOL__BOOL	gthumb_marshal_BOOLEAN__BOOLEAN

/* BOOL:ENUM (./gthumb-marshal.list:2) */
extern void gthumb_marshal_BOOLEAN__ENUM (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);
#define gthumb_marshal_BOOL__ENUM	gthumb_marshal_BOOLEAN__ENUM

/* BOOL:ENUM,ENUM (./gthumb-marshal.list:3) */
extern void gthumb_marshal_BOOLEAN__ENUM_ENUM (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);
#define gthumb_marshal_BOOL__ENUM_ENUM	gthumb_marshal_BOOLEAN__ENUM_ENUM

/* BOOL:INT,POINTER (./gthumb-marshal.list:4) */
extern void gthumb_marshal_BOOLEAN__INT_POINTER (GClosure     *closure,
                                                 GValue       *return_value,
                                                 guint         n_param_values,
                                                 const GValue *param_values,
                                                 gpointer      invocation_hint,
                                                 gpointer      marshal_data);
#define gthumb_marshal_BOOL__INT_POINTER	gthumb_marshal_BOOLEAN__INT_POINTER

/* BOOL:VOID (./gthumb-marshal.list:5) */
extern void gthumb_marshal_BOOLEAN__VOID (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);
#define gthumb_marshal_BOOL__VOID	gthumb_marshal_BOOLEAN__VOID

/* VOID:BOOL (./gthumb-marshal.list:6) */
#define gthumb_marshal_VOID__BOOLEAN	g_cclosure_marshal_VOID__BOOLEAN
#define gthumb_marshal_VOID__BOOL	gthumb_marshal_VOID__BOOLEAN

/* VOID:ENUM,BOOLEAN (./gthumb-marshal.list:7) */
extern void gthumb_marshal_VOID__ENUM_BOOLEAN (GClosure     *closure,
                                               GValue       *return_value,
                                               guint         n_param_values,
                                               const GValue *param_values,
                                               gpointer      invocation_hint,
                                               gpointer      marshal_data);

/* VOID:ENUM,ENUM (./gthumb-marshal.list:8) */
extern void gthumb_marshal_VOID__ENUM_ENUM (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* VOID:ENUM (./gthumb-marshal.list:9) */
#define gthumb_marshal_VOID__ENUM	g_cclosure_marshal_VOID__ENUM

/* VOID:FLOAT (./gthumb-marshal.list:10) */
#define gthumb_marshal_VOID__FLOAT	g_cclosure_marshal_VOID__FLOAT

/* VOID:INT (./gthumb-marshal.list:11) */
#define gthumb_marshal_VOID__INT	g_cclosure_marshal_VOID__INT

/* VOID:INT,BOXED (./gthumb-marshal.list:12) */
extern void gthumb_marshal_VOID__INT_BOXED (GClosure     *closure,
                                            GValue       *return_value,
                                            guint         n_param_values,
                                            const GValue *param_values,
                                            gpointer      invocation_hint,
                                            gpointer      marshal_data);

/* VOID:INT,INT (./gthumb-marshal.list:13) */
extern void gthumb_marshal_VOID__INT_INT (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

/* VOID:POINTER,POINTER (./gthumb-marshal.list:14) */
extern void gthumb_marshal_VOID__POINTER_POINTER (GClosure     *closure,
                                                  GValue       *return_value,
                                                  guint         n_param_values,
                                                  const GValue *param_values,
                                                  gpointer      invocation_hint,
                                                  gpointer      marshal_data);

/* VOID:STRING (./gthumb-marshal.list:15) */
#define gthumb_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING

/* VOID:STRING,INT (./gthumb-marshal.list:16) */
extern void gthumb_marshal_VOID__STRING_INT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

/* VOID:STRING,INT,BOXED (./gthumb-marshal.list:17) */
extern void gthumb_marshal_VOID__STRING_INT_BOXED (GClosure     *closure,
                                                   GValue       *return_value,
                                                   guint         n_param_values,
                                                   const GValue *param_values,
                                                   gpointer      invocation_hint,
                                                   gpointer      marshal_data);

/* VOID:STRING,STRING (./gthumb-marshal.list:18) */
extern void gthumb_marshal_VOID__STRING_STRING (GClosure     *closure,
                                                GValue       *return_value,
                                                guint         n_param_values,
                                                const GValue *param_values,
                                                gpointer      invocation_hint,
                                                gpointer      marshal_data);

/* VOID:VOID (./gthumb-marshal.list:19) */
#define gthumb_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

G_END_DECLS

#endif /* __gthumb_marshal_MARSHAL_H__ */

