<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="html" />
    <xsl:template match="/shop">
        <html>
            <head>
                <link rel="stylesheet" href="css/main.css" />
            </head>
            <body>
                <div class="conteiner">
                    <xsl:for-each select="products">
                        <!-- Сортирует по тегу price из xml -->
                        <xsl:sort select="price" order="ascending" /> 
                        <div
                            class="info">
                            <div class="products">
                                <div class="img"></div>
                                <span class="name">
                                    <xsl:value-of select="name" />
                                </span>
                                <span class="price">
                                    <xsl:value-of select="price" />
                                </span>
                            </div>
                        </div>
                    </xsl:for-each>
                </div>
            </body>
        </html>

    </xsl:template>

</xsl:stylesheet>