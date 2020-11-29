///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBASYNCLaunchResultBase;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LaunchResultBase` union.
///
/// Result returned by methods that launch an asynchronous job. A method who may
/// either launch an asynchronous job, or complete the request synchronously,
/// can use this union by extending it, and adding a 'complete' field with the
/// type of the synchronous response. See LaunchEmptyResult for an example.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBASYNCLaunchResultBase : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBASYNCLaunchResultBaseTag` enum type represents the possible tag
/// states with which the `DBASYNCLaunchResultBase` union can exist.
typedef NS_ENUM(NSInteger, DBASYNCLaunchResultBaseTag) {
  /// This response indicates that the processing is asynchronous. The string
  /// is an id that can be used to obtain the status of the asynchronous job.
  DBASYNCLaunchResultBaseAsyncJobId,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBASYNCLaunchResultBaseTag tag;

/// This response indicates that the processing is asynchronous. The string is
/// an id that can be used to obtain the status of the asynchronous job. @note
/// Ensure the `isAsyncJobId` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *asyncJobId;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "async_job_id".
///
/// Description of the "async_job_id" tag state: This response indicates that
/// the processing is asynchronous. The string is an id that can be used to
/// obtain the status of the asynchronous job.
///
/// @param asyncJobId This response indicates that the processing is
/// asynchronous. The string is an id that can be used to obtain the status of
/// the asynchronous job.
///
/// @return An initialized instance.
///
- (instancetype)initWithAsyncJobId:(NSString *)asyncJobId;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "async_job_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `asyncJobId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "async_job_id".
///
- (BOOL)isAsyncJobId;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBASYNCLaunchResultBase` union.
///
@interface DBASYNCLaunchResultBaseSerializer : NSObject

///
/// Serializes `DBASYNCLaunchResultBase` instances.
///
/// @param instance An instance of the `DBASYNCLaunchResultBase` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBASYNCLaunchResultBase` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBASYNCLaunchResultBase *)instance;

///
/// Deserializes `DBASYNCLaunchResultBase` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBASYNCLaunchResultBase` API object.
///
/// @return An instantiation of the `DBASYNCLaunchResultBase` object.
///
+ (DBASYNCLaunchResultBase *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
