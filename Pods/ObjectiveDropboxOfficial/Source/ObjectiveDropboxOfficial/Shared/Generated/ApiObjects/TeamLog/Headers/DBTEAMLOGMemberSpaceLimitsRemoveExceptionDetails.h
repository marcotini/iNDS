///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberSpaceLimitsRemoveExceptionDetails` struct.
///
/// Removed members from member space limit exception list.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberSpaceLimitsRemoveExceptionDetails`
/// struct.
///
@interface DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails *)instance;

///
/// Deserializes `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails` object.
///
+ (DBTEAMLOGMemberSpaceLimitsRemoveExceptionDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END