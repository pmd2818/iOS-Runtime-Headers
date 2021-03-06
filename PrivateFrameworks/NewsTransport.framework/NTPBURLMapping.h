/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBURLMapping : PBCodable <NSCopying> {
    NSMutableArray * _domains;
}

@property (nonatomic, retain) NSMutableArray *domains;

+ (Class)domainsType;

- (void).cxx_destruct;
- (void)addDomains:(id)arg1;
- (void)clearDomains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domains;
- (id)domainsAtIndex:(unsigned int)arg1;
- (unsigned int)domainsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)writeTo:(id)arg1;

@end
