/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAccountManager : NSObject {
    NSObject<OS_dispatch_queue> * _accountQueue;
    ACAccountStore * _accountStore;
    ACAccountType * _appleIDAccountType;
    ACAccountType * _authKitAccountType;
    ACAccountType * _iCloudAccountType;
}

@property (nonatomic, readonly) ACAccountType *appleIDAccountType;
@property (nonatomic, readonly) ACAccountType *authKitAccountType;
@property (nonatomic, retain) ACAccountStore *store;

+ (BOOL)isAccountsFrameworkAvailable;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1;
- (id)_aliasesForiCloudAccount:(id)arg1;
- (id)_altDSIDForiCloudAccount:(id)arg1;
- (id)_iCloudAccountType;
- (void)_removeTokenForKeys:(id)arg1 forAccount:(id)arg2;
- (void)_removeTokenKey:(id)arg1 forAccount:(id)arg2;
- (id)_tokenWithName:(id)arg1 forAccount:(id)arg2;
- (id)activeServiceNamesForAccount:(id)arg1;
- (id)aliasesForAccount:(id)arg1;
- (id)allAuthKitAccounts;
- (id)altDSIDForAccount:(id)arg1;
- (id)appleIDAccountType;
- (id)appleIDAccountWithAltDSID:(id)arg1;
- (id)appleIDAccountWithAppleID:(id)arg1;
- (id)authKitAccountType;
- (id)authKitAccountWithAltDSID:(id)arg1;
- (id)authKitAccountWithAppleID:(id)arg1;
- (id)authKitAccountWithDSID:(id)arg1;
- (id)continuationTokenForAccount:(id)arg1;
- (BOOL)hasPrimaryiCloudAccountForAppleID:(id)arg1;
- (id)hearbeatTokenForAccount:(id)arg1;
- (id)iCloudAccountForAltDSID:(id)arg1;
- (id)iCloudAccountForAppleID:(id)arg1;
- (id)init;
- (BOOL)isPrimaryiCloudAccount:(id)arg1;
- (id)masterTokenForAccount:(id)arg1;
- (id)mostRecentlyUsedAuthKitAccount;
- (id)passwordResetTokenBackupForAccount:(id)arg1;
- (id)passwordResetTokenForAccount:(id)arg1;
- (void)removeAllPasswordResetTokens;
- (void)removeContinuationTokenForAccount:(id)arg1;
- (void)removeMasterTokenForAccount:(id)arg1;
- (void)removeUnusedAuthKitAccounts;
- (unsigned int)securityLevelForAccount:(id)arg1;
- (id)servicesUsingAccount:(id)arg1;
- (void)setAccount:(id)arg1 inUse:(BOOL)arg2 byService:(int)arg3;
- (void)setAliases:(id)arg1 forAccount:(id)arg2;
- (void)setAltDSID:(id)arg1 forAccount:(id)arg2;
- (void)setDSID:(id)arg1 forAccount:(id)arg2;
- (void)setSecurityLevel:(unsigned int)arg1 forAccount:(id)arg2;
- (void)setStore:(id)arg1;
- (id)store;
- (id)stringRepresentationForService:(int)arg1;
- (id)transportableAuthKitAccount:(id)arg1;

@end
