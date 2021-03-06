///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMGroupMemberSelector;
@class DBTEAMGroupSelector;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupMemberSelector` struct.
///
/// Argument for selecting a group and a single user.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMemberSelector : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Specify a group.
@property (nonatomic, readonly) DBTEAMGroupSelector *group;

/// Identity of a user that is a member of group.
@property (nonatomic, readonly) DBTEAMUserSelectorArg *user;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Specify a group.
/// @param user Identity of a user that is a member of group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group user:(DBTEAMUserSelectorArg *)user;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMemberSelector` struct.
///
@interface DBTEAMGroupMemberSelectorSerializer : NSObject

///
/// Serializes `DBTEAMGroupMemberSelector` instances.
///
/// @param instance An instance of the `DBTEAMGroupMemberSelector` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMemberSelector` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupMemberSelector *)instance;

///
/// Deserializes `DBTEAMGroupMemberSelector` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMemberSelector` API object.
///
/// @return An instantiation of the `DBTEAMGroupMemberSelector` object.
///
+ (DBTEAMGroupMemberSelector *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
