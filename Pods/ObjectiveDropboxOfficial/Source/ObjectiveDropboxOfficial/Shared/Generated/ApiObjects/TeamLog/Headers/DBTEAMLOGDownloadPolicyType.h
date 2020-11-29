///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDownloadPolicyType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DownloadPolicyType` union.
///
/// Shared content downloads policy
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDownloadPolicyType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGDownloadPolicyTypeTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGDownloadPolicyType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGDownloadPolicyTypeTag) {
  /// (no description).
  DBTEAMLOGDownloadPolicyTypeAllow,

  /// (no description).
  DBTEAMLOGDownloadPolicyTypeDisallow,

  /// (no description).
  DBTEAMLOGDownloadPolicyTypeOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGDownloadPolicyTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "allow".
///
/// @return An initialized instance.
///
- (instancetype)initWithAllow;

///
/// Initializes union class with tag state of "disallow".
///
/// @return An initialized instance.
///
- (instancetype)initWithDisallow;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "allow".
///
/// @return Whether the union's current tag state has value "allow".
///
- (BOOL)isAllow;

///
/// Retrieves whether the union's current tag state has value "disallow".
///
/// @return Whether the union's current tag state has value "disallow".
///
- (BOOL)isDisallow;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGDownloadPolicyType` union.
///
@interface DBTEAMLOGDownloadPolicyTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGDownloadPolicyType` instances.
///
/// @param instance An instance of the `DBTEAMLOGDownloadPolicyType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDownloadPolicyType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDownloadPolicyType *)instance;

///
/// Deserializes `DBTEAMLOGDownloadPolicyType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDownloadPolicyType` API object.
///
/// @return An instantiation of the `DBTEAMLOGDownloadPolicyType` object.
///
+ (DBTEAMLOGDownloadPolicyType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
