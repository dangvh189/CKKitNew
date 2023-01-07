#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef CLOUDKITWRAPPER_SWIFT_H
#define CLOUDKITWRAPPER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
#endif

#import <CloudKitWrapper/CloudKitWrapper.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CloudKitWrapper",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

SWIFT_EXTERN void CKAsset_Free(void * _Nonnull pointer);


SWIFT_EXTERN int8_t * _Nonnull CKAsset_GetFileUrl(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKAsset_Init(int8_t * _Nonnull fileUrl) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKContainer_Default(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKContainer_Free(void * _Nonnull pointer);


SWIFT_EXTERN void CKContainer_GetAccountStatus(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onSuccess)(int64_t, int32_t), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN int8_t * _Nonnull CKContainer_GetCKCurrentUserDefaultName(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKContainer_GetPrivateDatabase(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKContainer_GetPublicDatabase(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKContainer_Init(int8_t * _Nonnull identifier) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKDatabaseSubscription_GetRecordType(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKDatabaseSubscription_Init(int8_t * _Nonnull subscriptionId) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKDatabaseSubscription_SetRecordType(void * _Nonnull pointer, int8_t * _Nonnull recordType);


SWIFT_EXTERN void CKDatabase_AddOperation(void * _Nonnull databasePtr, void * _Nonnull operationsPtr);


SWIFT_EXTERN void CKDatabase_DeleteRecord(void * _Nonnull databasePtr, void * _Nonnull recordPtr, int64_t taskId, void (* _Nonnull onDeleted)(int64_t, void * _Nullable), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKDatabase_FetchRecord(void * _Nonnull databasePtr, void * _Nonnull recordIdPtr, int64_t taskId, void (* _Nonnull onFetch)(int64_t, void * _Nullable), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKDatabase_Free(void * _Nonnull pointer);


SWIFT_EXTERN void CKDatabase_SaveRecord(void * _Nonnull databasePtr, void * _Nonnull recordPtr, int64_t taskId, void (* _Nonnull onSaved)(int64_t, void * _Nullable), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN int8_t * _Nonnull CKError_GetCKErrorRetryAfterKey(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKError_GetCKPartialErrorsByItemIDKey(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKError_GetCKRecordChangedErrorAncestorRecordKey(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKError_GetCKRecordChangedErrorClientRecordKey(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKError_GetCKRecordChangedErrorServerRecordKey(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKFetchRecordZonesOperation_FetchAllRecordZonesOperation(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKFetchRecordZonesOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nonnull CKFetchRecordZonesOperation_Init(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKFetchRecordZonesOperation_SetCompletionCallback(void * _Nonnull operationPointer, int64_t taskId, void (* _Nonnull callback)(int64_t, void const * _Nonnull, int32_t), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKFetchRecordsOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN InteropStructArray CKFetchRecordsOperation_GetRecordIDs(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKFetchRecordsOperation_Init(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKFetchRecordsOperation_InitWithRecordIDs(InteropStructArray recordIds) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKFetchRecordsOperation_SetCompletionCallback(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onComplete)(int64_t, InteropStructArray), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKFetchRecordsOperation_SetRecordIDs(void * _Nonnull pointer, InteropStructArray recordIdPtrs);


SWIFT_EXTERN void CKModifyRecordZonesOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nonnull CKModifyRecordZonesOperation_Init(InteropStructArray zonesToSavePtrsArray, InteropStructArray zonesIdsToDeletePtrsArray) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKModifyRecordZonesOperation_SetCompletionCallback(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onComplete)(int64_t, InteropStructArray, InteropStructArray), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKModifyRecordsOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN BOOL CKModifyRecordsOperation_GetIsAtomic(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int32_t CKModifyRecordsOperation_GetSavePolicy(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKModifyRecordsOperation_Init(InteropStructArray recordsToSaveArray, InteropStructArray recordIdsToDeleteArray) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKModifyRecordsOperation_SetCompletionCallback(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onComplete)(int64_t, InteropStructArray, InteropStructArray), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKModifyRecordsOperation_SetIsAtomic(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKModifyRecordsOperation_SetSavePolicy(void * _Nonnull pointer, int32_t value);


SWIFT_EXTERN void CKModifySubscriptionsOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nonnull CKModifySubscriptionsOperation_Init(void * _Nonnull subscriptionsToSaveArray, void * _Nonnull subscriptionIdsToDeleteArray) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKModifySubscriptionsOperation_SetCompletionCallback(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onComplete)(int64_t), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKNotificationInfo_Free(void * _Nonnull pointer);


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetAlertActionLocalizationKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetAlertBody(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetAlertLaunchImage(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKNotificationInfo_GetAlertLocalizationArgs(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetAlertLocalizationKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetCategory(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetCollapseIDKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKNotificationInfo_GetDesiredKeys(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKNotificationInfo_GetShouldBadge(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKNotificationInfo_GetShouldSendContentAvailable(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKNotificationInfo_GetShouldSendMutableContent(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetSoundName(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetSubtitle(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKNotificationInfo_GetSubtitleLocalizationArgs(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetSubtitleLocalizationKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetTitle(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKNotificationInfo_GetTitleLocalizationArgs(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKNotificationInfo_GetTitleLocalizationKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKNotificationInfo_Init(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKNotificationInfo_SetAlertActionLocalizationKey(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetAlertBody(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetAlertLaunchImage(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetAlertLocalizationArgs(void * _Nonnull pointer, void * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetAlertLocalizationKey(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetCategory(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetCollapseIDKey(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetDesiredKeys(void * _Nonnull pointer, void * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetShouldBadge(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKNotificationInfo_SetShouldSendContentAvailable(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKNotificationInfo_SetShouldSendMutableContent(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKNotificationInfo_SetSoundName(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetSubtitle(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetSubtitleLocalizationArgs(void * _Nonnull pointer, void * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetSubtitleLocalizationKey(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetTitle(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetTitleLocalizationArgs(void * _Nonnull pointer, void * _Nonnull value);


SWIFT_EXTERN void CKNotificationInfo_SetTitleLocalizationKey(void * _Nonnull pointer, int8_t * _Nonnull value);


SWIFT_EXTERN BOOL CKOperationConfiguration_GetAllowsCellularAccess(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKOperationConfiguration_GetIsLongLived(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int32_t CKOperationConfiguration_GetQualityOfService(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double CKOperationConfiguration_GetTimeoutIntervalForRequest(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double CKOperationConfiguration_GetTimeoutIntervalForResource(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKOperationConfiguration_SetAllowsCellularAccess(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKOperationConfiguration_SetIsLongLived(void * _Nonnull pointer, BOOL value);


SWIFT_EXTERN void CKOperationConfiguration_SetQualityOfService(void * _Nonnull pointer, int32_t value);


SWIFT_EXTERN void CKOperationConfiguration_SetTimeoutIntervalForRequest(void * _Nonnull pointer, double value);


SWIFT_EXTERN void CKOperationConfiguration_SetTimeoutIntervalForResource(void * _Nonnull pointer, double value);


SWIFT_EXTERN void CKOperationConfiguration_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nonnull CKOperation_GetConfiguration(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKQueryOperation_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nullable CKQueryOperation_GetCursor(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKQueryOperation_GetDesiredKeys(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int32_t CKQueryOperation_GetResultsLimit(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKQueryOperation_GetZoneID(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKQueryOperation_InitWithCursor(void * _Nonnull cursorPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKQueryOperation_InitWithQuery(void * _Nonnull queryPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKQueryOperation_SetCompletionCallback(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onCompletion)(int64_t, void const * _Nullable), void (* _Nonnull onError)(int64_t, void * _Nonnull));


SWIFT_EXTERN void CKQueryOperation_SetDesiredKeys(void * _Nonnull pointer, int8_t * _Nonnull keysJoined);


SWIFT_EXTERN void CKQueryOperation_SetRecordFetchedBlock(void * _Nonnull pointer, int64_t taskId, void (* _Nonnull onRecordFetched)(int64_t, void const * _Nonnull));


SWIFT_EXTERN void CKQueryOperation_SetResultsLimit(void * _Nonnull pointer, int32_t value);


SWIFT_EXTERN void CKQueryOperation_SetZoneID(void * _Nonnull pointer, void * _Nonnull zoneIDPtr);


SWIFT_EXTERN NSUInteger CKQuerySubscription_GetQuerySubscriptionOptions(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKQuerySubscription_GetRecordType(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKQuerySubscription_GetZoneID(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKQuerySubscription_Init(int8_t * _Nonnull recordType, void * _Nonnull predicatePtr, int8_t * _Nonnull subscriptionId, NSUInteger options) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKQuerySubscription_SetZoneID(void * _Nonnull pointer, void * _Nonnull zoneIdPtr);


SWIFT_EXTERN void CKQuery_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nonnull CKQuery_GetPredicate(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKQuery_GetRecordType(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN InteropStructArray CKQuery_GetSortDescriptors(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKQuery_Init(int8_t * _Nonnull recordType, void * _Nonnull predicatePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKQuery_SetSortDescriptors(void * _Nonnull pointer, InteropStructArray descriptorsPtr);


SWIFT_EXTERN void CKRecordID_Free(void * _Nonnull recordIdPtr);


SWIFT_EXTERN int8_t * _Nonnull CKRecordID_GetRecordName(void * _Nonnull recordIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordID_GetZoneID(void * _Nonnull recordIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordID_InitWithRecordName(int8_t * _Nonnull recordName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordID_InitWithRecordNameAndZone(int8_t * _Nonnull recordName, void * _Nonnull recordZoneIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZoneID_Default(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKRecordZoneID_Free(void * _Nonnull recordZoneIDPtr);


SWIFT_EXTERN int8_t * _Nonnull CKRecordZoneID_GetOwnerName(void * _Nonnull recordZoneIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKRecordZoneID_GetZoneName(void * _Nonnull recordZoneIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZoneID_Init(int8_t * _Nonnull zoneName, int8_t * _Nonnull ownerName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKRecordZoneSubscription_GetRecordType(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecordZoneSubscription_GetZoneID(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZoneSubscription_Init(void * _Nonnull recordZoneIdPtr, int8_t * _Nonnull subscriptionId) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKRecordZoneSubscription_SetRecordType(void * _Nonnull pointer, int8_t * _Nonnull recordType);


SWIFT_EXTERN void * _Nonnull CKRecordZone_Default(void) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKRecordZone_Free(void * _Nonnull recordZonePtr);


SWIFT_EXTERN int32_t CKRecordZone_GetCapabilities(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZone_GetZoneID(void * _Nonnull recordZonePtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZone_InitWithZoneID(void * _Nonnull recordZoneIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecordZone_InitWithZoneName(int8_t * _Nonnull zoneName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKRecord_Free(void * _Nonnull recordPtr);


SWIFT_EXTERN InteropStructArray CKRecord_GetBinaryData(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKRecord_GetBool(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecord_GetCKAsset(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecord_GetCKReference(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double CKRecord_GetCreationDate(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecord_GetCreatorUserRecordID(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN float CKRecord_GetFloat(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int32_t CKRecord_GetInt32(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int64_t CKRecord_GetInt64(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double CKRecord_GetLastModificationDate(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecord_GetLastModifiedUserRecordID(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable CKRecord_GetParent(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable CKRecord_GetRecordChangeTag(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecord_GetRecordID(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKRecord_GetRecordType(void * _Nonnull recordPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKRecord_GetString(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL CKRecord_HasKey(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecord_InitWithRecordType(int8_t * _Nonnull recordType) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKRecord_InitWithRecordTypeAndID(int8_t * _Nonnull recordType, void * _Nonnull recordIDPtr) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKRecord_SetBinaryData(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, InteropStructArray dataArray);


SWIFT_EXTERN void CKRecord_SetBool(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, BOOL value);


SWIFT_EXTERN void CKRecord_SetCKAsset(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, void * _Nonnull assetPtr);


SWIFT_EXTERN void CKRecord_SetCKReference(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, void * _Nonnull referencePtr);


SWIFT_EXTERN void CKRecord_SetFloat(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, float value);


SWIFT_EXTERN void CKRecord_SetInt32(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, int32_t value);


SWIFT_EXTERN void CKRecord_SetInt64(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, int64_t value);


SWIFT_EXTERN void CKRecord_SetParentWithRecord(void * _Nonnull pointer, void * _Nonnull parentPointer);


SWIFT_EXTERN void CKRecord_SetParentWithRecordID(void * _Nonnull pointer, void * _Nonnull parentIDPointer);


SWIFT_EXTERN void CKRecord_SetString(void * _Nonnull recordPtr, int8_t * _Nonnull fieldName, int8_t * _Nonnull value);


SWIFT_EXTERN void CKReference_Free(void * _Nonnull pointer);


SWIFT_EXTERN int32_t CKReference_GetAction(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKReference_GetRecordID(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKReference_InitWithRecord(void * _Nonnull recordPtr, int32_t action) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull CKReference_InitWithRecordID(void * _Nonnull recordIDPtr, int32_t action) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKSubscription_Free(void * _Nonnull pointer);


SWIFT_EXTERN void * _Nullable CKSubscription_GetNotificationInfo(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull CKSubscription_GetSubscriptionID(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN NSInteger CKSubscription_GetSubscriptionType(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void CKSubscription_SetNotificationInfo(void * _Nonnull pointer, void * _Nonnull notificationInfoPtr);


SWIFT_EXTERN void * _Nullable NSArray_GetCKSubscriptionAt(void * _Nonnull pointer, int32_t index) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nullable NSDictionary_GetValueForKey_AsNSError_WithCKRecordID(void * _Nonnull pointer, void * _Nonnull recordIdPointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void NSMutableArray_AddCKSubscription(void * _Nonnull pointer, void * _Nonnull subscriptionId);


SWIFT_EXTERN void NSPredicate_Free(void * _Nonnull pointer);


SWIFT_EXTERN int8_t * _Nonnull NSPredicate_GetPredicateFormat(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull NSPredicate_InitWithFormat(int8_t * _Nonnull format) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull NSPredicate_InitWithValue(BOOL value) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void NSSortDescriptor_Free(void * _Nonnull pointer);


SWIFT_EXTERN BOOL NSSortDescriptor_GetAscending(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nullable NSSortDescriptor_GetKey(void * _Nonnull pointer) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void * _Nonnull NSSortDescriptor_Init(int8_t * _Nonnull key, BOOL isAscending) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN InteropStructArray NSUbiquitousKeyValueStore_GetBinaryData(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL NSUbiquitousKeyValueStore_GetBool(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN double NSUbiquitousKeyValueStore_GetDouble(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int32_t NSUbiquitousKeyValueStore_GetInt32(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int64_t NSUbiquitousKeyValueStore_GetInt64(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN int8_t * _Nonnull NSUbiquitousKeyValueStore_GetString(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN BOOL NSUbiquitousKeyValueStore_HasKey(int8_t * _Nonnull key) SWIFT_WARN_UNUSED_RESULT;


SWIFT_EXTERN void NSUbiquitousKeyValueStore_RegisterDidChangeExternallyNotification(void (* _Nonnull callback)(int8_t * _Nullable));


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetBinaryData(int8_t * _Nonnull key, uint8_t * _Nonnull data, NSInteger dataLength);


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetBool(int8_t * _Nonnull key, BOOL value);


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetDouble(int8_t * _Nonnull key, double value);


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetInt32(int8_t * _Nonnull key, int32_t value);


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetInt64(int8_t * _Nonnull key, int64_t value);


SWIFT_EXTERN void NSUbiquitousKeyValueStore_SetString(int8_t * _Nonnull key, int8_t * _Nonnull value);


SWIFT_EXTERN BOOL NSUbiquitousKeyValueStore_Synchronize(void) SWIFT_WARN_UNUSED_RESULT;

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif