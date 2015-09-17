/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContainer : NSObject <NSCopying, NSSecureCoding> {
    BOOL _enabled;
    int _iOSLegacyIdentifier;
    NSString *_identifier;
    NSString *_name;
    CNContainer *_snapshot;
    int _type;
}

@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) CNContainer *snapshot;
@property (nonatomic, readonly) int type;

+ (id)identifierProvider;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForContainerOfContactWithIdentifier:(id)arg1;
+ (id)predicateForContainerOfGroupWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithExternalIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1;
+ (id)predicateForContainersInAccountWithIdentifier:(id)arg1 includingDisabledContainers:(BOOL)arg2;
+ (id)predicateForContainersIncludingDisabled:(BOOL)arg1;
+ (id)predicateForContainersWithIdentifiers:(id)arg1;
+ (id)predicateForDefaultContainerForAccountWithIdentifier:(id)arg1;
+ (id)predicateForLocalContainer;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionForContainerType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 type:(int)arg2;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)snapshot;
- (int)type;

@end