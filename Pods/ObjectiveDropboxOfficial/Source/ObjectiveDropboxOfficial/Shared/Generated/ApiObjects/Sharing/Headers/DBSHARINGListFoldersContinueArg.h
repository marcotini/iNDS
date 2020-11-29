///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListFoldersContinueArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFoldersContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFoldersContinueArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The cursor returned by the previous API call specified in the endpoint
/// description.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor The cursor returned by the previous API call specified in the
/// endpoint description.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFoldersContinueArg` struct.
///
@interface DBSHARINGListFoldersContinueArgSerializer : NSObject

///
/// Serializes `DBSHARINGListFoldersContinueArg` instances.
///
/// @param instance An instance of the `DBSHARINGListFoldersContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersContinueArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGListFoldersContinueArg *)instance;

///
/// Deserializes `DBSHARINGListFoldersContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFoldersContinueArg` API object.
///
/// @return An instantiation of the `DBSHARINGListFoldersContinueArg` object.
///
+ (DBSHARINGListFoldersContinueArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
