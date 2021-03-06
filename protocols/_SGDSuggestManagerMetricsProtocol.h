/* Generated by RuntimeBrowser.
 */

@protocol _SGDSuggestManagerMetricsProtocol

@required

- (void)logMetricAutocompleteUserSelectedRecordId:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricContactCreated:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricContactSearchResultSelected:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(NSString *)arg1;
- (void)logMetricSuggestedContactDetailShown:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;
- (void)logMetricSuggestedContactDetailUsed:(SGRecordId *)arg1 contactIdentifier:(NSString *)arg2 bundleId:(NSString *)arg3;

@end
