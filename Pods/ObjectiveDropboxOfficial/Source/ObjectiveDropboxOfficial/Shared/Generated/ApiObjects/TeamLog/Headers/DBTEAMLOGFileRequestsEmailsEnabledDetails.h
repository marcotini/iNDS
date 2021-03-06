///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileRequestsEmailsEnabledDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestsEmailsEnabledDetails` struct.
///
/// Enabled file request emails for everyone.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestsEmailsEnabledDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `FileRequestsEmailsEnabledDetails` struct.
///
@interface DBTEAMLOGFileRequestsEmailsEnabledDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestsEmailsEnabledDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileRequestsEmailsEnabledDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestsEmailsEnabledDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileRequestsEmailsEnabledDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestsEmailsEnabledDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestsEmailsEnabledDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestsEmailsEnabledDetails`
/// object.
///
+ (DBTEAMLOGFileRequestsEmailsEnabledDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
